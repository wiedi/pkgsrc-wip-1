# $NetBSD: Makefile,v 1.2 2015/07/15 08:52:51 fhajny Exp $

DISTNAME=	libv8-3.16.14.11
PKGNAME=	${RUBY_PKGPREFIX}-${DISTNAME}
CATEGORIES=	lang

MAINTAINER=	filip@joyent.com
HOMEPAGE=	http://github.com/cowboyd/libv8
COMMENT=	Ruby distribution wrapper for the V8 JavaScript engine
LICENSE=	mit

CHECK_PORTABILITY_SKIP+=	vendor/v8/tools/run-llprof.sh

CONFIGURE_ARGS+=		--with-system-v8

pre-build:
	${TOUCH} ${WRKSRC}/ext/libv8/.location.yml

.include "../../wip/v8-316/buildlink3.mk"
.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
