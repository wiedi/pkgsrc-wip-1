# $NetBSD: Makefile,v 1.2 2015/09/13 20:39:38 yhardy Exp $

DISTNAME=	chocolate-doom-2.2.1
CATEGORIES=	games
MASTER_SITES=	http://www.chocolate-doom.org/downloads/2.2.1/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.chocolate-doom.org/
COMMENT=	Doom/Heretic/Hexen/Strife source port
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
USE_TOOLS+=	gmake

.include "../../mk/bsd.prefs.mk"

# no inb/outb
.if ${OPSYS} == NetBSD
CONFIGURE_ENV+=	ac_cv_lib_i386_i386_iopl=no
CONFIGURE_ENV+=	ac_cv_lib_amd64_amd64_iopl=no
.endif

PYTHON_FOR_BUILD_ONLY=		yes
PYTHON_VERSIONS_ACCEPTED=	27
REPLACE_PYTHON+=		data/convert-icon
REPLACE_PYTHON+=		man/docgen
REPLACE_PYTHON+=		man/simplecpp

.include "../../lang/python/application.mk"

.include "../../audio/SDL_mixer/buildlink3.mk"
.include "../../audio/libsamplerate/buildlink3.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../net/SDL_net/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
