# $NetBSD: Makefile,v 1.10 2014/12/31 13:58:27 thomasklausner Exp $

DISTNAME=	django-gitrevision-0.1.4
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
PKGREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	http://pypi.python.org/packages/source/d/django-gitrevision/

MAINTAINER=	kamel.derouiche@gmail.com
HOMEPAGE=	http://github.com/klen/django-gitrevision.git
COMMENT=	Django git revision
LICENSE=	gnu-lgpl-v2.1

DEPENDS+=	${PYPKGPREFIX}-django-[0-9]*:../../www/py-django
DEPENDS+=	${PYPKGPREFIX}-git-[0-9]*:../../wip/py-git

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 # py-git

USE_LANGUAGES=	# none

PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
