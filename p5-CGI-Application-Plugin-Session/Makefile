# $NetBSD: Makefile,v 1.3 2014/10/09 14:06:29 thomasklausner Exp $
#

DISTNAME=	CGI-Application-Plugin-Session-1.03
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	www perl5
MASTER_SITES=	http://search.cpan.org/CPAN/authors/id/C/CE/CEESHEK/

MAINTAINER=	ficovh@yahoo.com
HOMEPAGE=	http://search.cpan.org/CPAN/authors/id/C/CE/CEESHEK/
COMMENT=	Add CGI::Session support to CGI::Application

# TODO: Look for the dependencies in Build.PL.
DEPENDS+=	p5-CGI-Application>=4:../../www/p5-CGI-Application
DEPENDS+=	p5-CGI-Session>=0:../../www/p5-CGI-Session

PERL5_MODULE_TYPE=	Module::Build
PERL5_PACKLIST=		auto/CGI/Application/Plugin/Session/.packlist
USE_LANGUAGES=		# none

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
