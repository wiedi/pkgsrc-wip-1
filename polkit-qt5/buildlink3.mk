# $NetBSD: buildlink3.mk,v 1.3 2015/04/11 16:54:26 krytarowski Exp $

BUILDLINK_TREE+=	polkit-qt5-1

.if !defined(POLKIT_QT5_BUILDLINK3_MK)
POLKIT_QT5_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.polkit-qt5-1+=	polkit-qt5-1>=0.112.0
BUILDLINK_ABI_DEPENDS.polkit-qt5-1+=	polkit-qt5-1>=0.112.0
BUILDLINK_PKGSRCDIR.polkit-qt5-1?=	../../wip/polkit-qt5

.include "../../x11/qt5-dbus/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../security/policykit/buildlink3.mk"
.include "../../wip/polkit/buildlink3.mk"
.endif	# POLKIT_QT5_BUILDLINK3_MK

BUILDLINK_TREE+=	-polkit-qt5-1
