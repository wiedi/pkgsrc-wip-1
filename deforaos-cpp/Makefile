# $NetBSD: Makefile,v 1.3 2015/01/27 00:10:05 khorben Exp $

DISTNAME=	cpp-0.0.1
PKGNAME=	deforaos-cpp-0.0.1
CATEGORIES=	devel
MASTER_SITES=	http://www.defora.org/os/download/download/3542/

MAINTAINER=	khorben@defora.org
HOMEPAGE=	http://www.defora.org/
COMMENT=	DeforaOS C pre-processor

LICENSE=	gnu-gpl-v3

USE_TOOLS+=	pkg-config

MAKE_FLAGS+=	PREFIX=${PREFIX}
MAKE_FLAGS+=	DESTDIR=${DESTDIR}

.include "../../devel/deforaos-libsystem/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
