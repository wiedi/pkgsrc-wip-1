# $NetBSD: Makefile,v 1.3 2012/11/12 16:26:52 othyro Exp $
#

DISTNAME=	SocNetV-0.90
PKGNAME=	socnetv-0.90
CATEGORIES=	math graphics
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=socnetv/}

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://socnetv.sourceforge.net/index.html
COMMENT=	Social network analysis and visualisation application
LICENSE=	gnu-gpl-v3

WRKSRC=		${WRKDIR}/socnetv-0.90

GNU_CONFIGURE=	yes
USE_TOOLS+=	gzip
USE_LANGUAGES=	c c++

CONFIGURE_ARGS+=	--with-qt=${LOCALBASE}/qt4

post-extract:
	gzip -d ${WRKSRC}/man/socnetv.1.gz

.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/qt4-libs/buildlink3.mk"
BUILDLINK_API_DEPENDS.qt4-tools+=	qt4-tools>=4.1.0
.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
