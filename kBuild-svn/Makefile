# $NetBSD: Makefile,v 1.3 2014/08/22 09:24:56 thomasklausner Exp $

DISTNAME=		kBuild
PKGNAME=		kBuild-0.1.9998
CATEGORIES=		devel
MASTER_SITES=		ftp://ftp.netlabs.org/pub/kbuild/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://www.virtualbox.org/wiki/kBuild
COMMENT=		Build framework based on GNU make
LICENSE=		gnu-gpl-v3

BUILD_DEPENDS+=		gettext-tools-[0-9]*:../../devel/gettext-tools

SVN_REPOSITORIES=	kBuild
SVN_ROOT.kBuild=	http://svn.netlabs.org/repos/kbuild/trunk/

USE_TOOLS+=		autoreconf autoconf automake gmake perl

INSTALLATION_DIRS=	bin

.include "../../mk/bsd.fast.prefs.mk"

KBUILD_PLATFORM=        ${LOWER_OPSYS}.${MACHINE_ARCH:S/x86_64/amd64/:S/i386/x86/}

post-extract:
	${CP} ${FILESDIR}/strtofflags.c ${WRKSRC}/src/kmk/strtofflags.c

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${WRKSRC}/kBuild/env.sh --full gmake -f bootstrap.gmk

do-install:
	for f in ${WRKSRC}/out/${KBUILD_PLATFORM}/release/stage/kBuild/bin/${KBUILD_PLATFORM}/*; do \
		${INSTALL_PROGRAM} $${f} ${DESTDIR}${PREFIX}/bin; \
	done

.include "../../wip/mk/svn-package.mk"
.include "../../mk/bsd.pkg.mk"
