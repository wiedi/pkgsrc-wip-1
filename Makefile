# $Id: Makefile,v 1.153 2003/05/09 20:34:30 marc Exp $
# $NetBSD: Makefile,v 1.153 2003/05/09 20:34:30 marc Exp $

COMMENT=	WIP pkgsrc packages

SUBDIR+=	PPower4
SUBDIR+=	abook
SUBDIR+=	adodb
SUBDIR+=	allegro
SUBDIR+=	amsn
SUBDIR+=	aolserver
SUBDIR+=	ap-bunzip2
SUBDIR+=	ap-ometer
SUBDIR+=	aputils
SUBDIR+=	autoproject
SUBDIR+=	billardgl
SUBDIR+=	bugzilla
SUBDIR+=	byacc
SUBDIR+=	cherokee
SUBDIR+=	chksniff
SUBDIR+=	cjk-latex
SUBDIR+=	cjk-latex-chinese
SUBDIR+=	cjk-latex-japanese
SUBDIR+=	cjk-latex-korean
SUBDIR+=	cvsd
SUBDIR+=	darkice
SUBDIR+=	dancer-ircd
SUBDIR+=	devhelp
SUBDIR+=	dircproxy
SUBDIR+=	directfb
SUBDIR+=	dovecot
SUBDIR+=	drweb
SUBDIR+=	emirror
SUBDIR+=	ezbounce
SUBDIR+=	fluxconf
SUBDIR+=	gdrdao
SUBDIR+=	geeklog
SUBDIR+=	geoip
SUBDIR+=	gini
SUBDIR+=	gkrellm2
SUBDIR+=	gkrellm2-flynn
SUBDIR+=	gkrellm2-launch
SUBDIR+=	gkrellm2-leds
SUBDIR+=	gkrellm2-multiping
SUBDIR+=	gkrellm2-server
SUBDIR+=	gkrellm2-share
SUBDIR+=	gkrellm2-snmp
SUBDIR+=	gkrellm2-volume
SUBDIR+=	gkrellm2-xmms
SUBDIR+=	gmencoder
SUBDIR+=	gnomeicu
SUBDIR+=	golem
SUBDIR+=	gstreamer-player
SUBDIR+=	gtetrinet2
SUBDIR+=	gtk-sharp
SUBDIR+=	gtk2-engines-xfce
SUBDIR+=	gtranslator
SUBDIR+=	honeyd-arpd
SUBDIR+=	httrack
SUBDIR+=	ices
SUBDIR+=	idesk
SUBDIR+=	idled
SUBDIR+=	ike-scan
SUBDIR+=	ion-devel
SUBDIR+=	ion-dock
SUBDIR+=	jabberd
SUBDIR+=	jakarta-log4j
SUBDIR+=	jdk-openjit
SUBDIR+=	jdk12
SUBDIR+=	jdk12-openjit
SUBDIR+=	jdk13
SUBDIR+=	jdk13-openjit
SUBDIR+=	jigdo
SUBDIR+=	jpgraph
SUBDIR+=	libdialog
SUBDIR+=	libshout
SUBDIR+=	liquidwar
SUBDIR+=	lpe
SUBDIR+=	mailfilter
SUBDIR+=	mcats
SUBDIR+=	mcats-iodbc
SUBDIR+=	mixer.tk
SUBDIR+=	mopac
SUBDIR+=	mtf
SUBDIR+=	nagios-base
SUBDIR+=	nagios-plugin-ldap
SUBDIR+=	nagios-plugin-mysql
SUBDIR+=	nagios-plugin-pgsql
SUBDIR+=	nagios-plugin-snmp
SUBDIR+=	nagios-plugins
SUBDIR+=	navigatrix
SUBDIR+=	netbeans-ide
SUBDIR+=	net-tools
SUBDIR+=	nvtv
SUBDIR+=	p5-Chart
SUBDIR+=	p5-HTTP-GHTTP
SUBDIR+=	p5-Net-Gnats
SUBDIR+=	p5-Net-Jabber
SUBDIR+=	p5-Unicode-String
SUBDIR+=	p5-XML-Stream
SUBDIR+=	p5-gtk2
SUBDIR+=	perltidy
SUBDIR+=	phplot
SUBDIR+=	pinball
SUBDIR+=	pixieplus
SUBDIR+=	poedit
SUBDIR+=	portmap
SUBDIR+=	ppp
SUBDIR+=	pts
SUBDIR+=	puf
SUBDIR+=	py-OpenGL
SUBDIR+=	py-PgSQL
SUBDIR+=	py-gnome2
SUBDIR+=	py-gnosis-utils
SUBDIR+=	py-spreadmodule
SUBDIR+=	qinx
SUBDIR+=	qn-x11
SUBDIR+=	raptor
SUBDIR+=	rcorder
SUBDIR+=	rlpr
SUBDIR+=	scm
SUBDIR+=	scponly
SUBDIR+=	shoutcast
SUBDIR+=	srvx
SUBDIR+=	streamripper
SUBDIR+=	sysklogd
SUBDIR+=	sysvinit
SUBDIR+=	tendra
SUBDIR+=	tex-foiltex
SUBDIR+=	totem
SUBDIR+=	tsclient
SUBDIR+=	umix
SUBDIR+=	vcdgear
SUBDIR+=	vim-gtk2
SUBDIR+=	vixie-cron
SUBDIR+=	vmsbackup
SUBDIR+=	windowlab
SUBDIR+=	xawtv
SUBDIR+=	xevil
SUBDIR+=	xmms-liveice
SUBDIR+=	xml2doc
SUBDIR+=	zebra-pj
SUBDIR+=	WEPCrack

.include "../mk/bsd.pkg.subdir.mk"
