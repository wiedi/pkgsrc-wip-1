# $NetBSD: Makefile,v 1.6 2014/12/31 13:58:34 thomasklausner Exp $

DISTNAME=	Model-Builder-0.4.6
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/M/m/S/B/b/}
CATEGORIES=	math python
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=model-builder/}

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://model-builder.sourceforge.net/
COMMENT=	Graphical ODE simulator

DEPENDS+=	${PYPKGPREFIX}-scipy>=0.7.0:../../math/py-scipy

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 # py-wxWidgets

USE_LANGUAGES=	# none

post-extract:
	${CP} ${FILESDIR}/model-builder.desktop ${WRKSRC}
	${CP} ${FILESDIR}/MB.png ${WRKSRC}


.include "../../lang/python/egg.mk"
.include "../../graphics/py-matplotlib/buildlink3.mk"
.include "../../math/py-numpy/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/py-wxWidgets/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
