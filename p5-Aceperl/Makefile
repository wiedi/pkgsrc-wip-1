# $NetBSD: Makefile,v 1.5 2013/05/17 18:06:16 shattered Exp $
#

DISTNAME=		AcePerl-1.92
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		databases
MASTER_SITES=		http://www.cpan.org/authors/id/L/LD/LDS/

MAINTAINER=		dprice@cs.nmsu.edu
HOMEPAGE=		http://www.cpan.org/authors/id/L/LD/LDS/
COMMENT=		Perl interface for the ACEDB object-oriented database

PKG_DESTDIR_SUPPORT=    none

PERL5_PACKLIST=		auto/Ace/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
