# $NetBSD: Makefile,v 1.3 2012/09/24 16:56:38 asau Exp $
#

DISTNAME=	velocity-1.6.4
PKGNAME=	apache-${DISTNAME}
CATEGORIES=	textproc java
MASTER_SITES=	http://www.gtlib.gatech.edu/pub/apache//velocity/engine/1.6.4/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://velocity.apache.org/
COMMENT=	Java-based template engine for web application
LICENSE=	apache-2.0

DEPENDS+=	jakarta-oro>=2.0.8:../../wip/jakarta-oro

NO_BUILD=		yes
USE_TOOLS+=	pax
USE_LANGUAGES=	# none

USE_JAVA2=	yes
USE_JAVA=	yes
PKG_JVMS_ACCEPTED= sun-jdk6 sun-jdk15

EDGDIR=	${PREFIX}/share/examples/apache-velocity

INSTALLATION_DIRS=	lib/java share/doc/apache-velocity ${EDGDIR}

do-install:
	${INSTALL_DATA} ${WRKSRC}/velocity-1.6.4.jar\
		${DESTDIR}${PREFIX}/lib/java/velocity.jar
	cd ${WRKSRC}/docs && pax -rw -pp . ${DESTDIR}${PREFIX}/share/doc/apache-velocity
	cd ${WRKSRC}/examples && pax -rw -pp . ${DESTDIR}${EDGDIR}


.include "../../mk/java-vm.mk"
.include "../../mk/bsd.pkg.mk"
