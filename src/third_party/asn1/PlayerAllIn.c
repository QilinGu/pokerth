/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "PlayerAllIn.h"

static asn_TYPE_member_t asn_MBR_PlayerAllIn_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerAllIn, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerAllIn, allInCard1),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Card,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"allInCard1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerAllIn, allInCard2),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Card,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"allInCard2"
		},
};
static ber_tlv_tag_t asn_DEF_PlayerAllIn_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PlayerAllIn_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 2 }, /* playerId at 512 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 1 }, /* allInCard1 at 513 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 0 } /* allInCard2 at 515 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PlayerAllIn_specs_1 = {
	sizeof(struct PlayerAllIn),
	offsetof(struct PlayerAllIn, _asn_ctx),
	asn_MAP_PlayerAllIn_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PlayerAllIn = {
	"PlayerAllIn",
	"PlayerAllIn",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PlayerAllIn_tags_1,
	sizeof(asn_DEF_PlayerAllIn_tags_1)
		/sizeof(asn_DEF_PlayerAllIn_tags_1[0]), /* 1 */
	asn_DEF_PlayerAllIn_tags_1,	/* Same as above */
	sizeof(asn_DEF_PlayerAllIn_tags_1)
		/sizeof(asn_DEF_PlayerAllIn_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PlayerAllIn_1,
	3,	/* Elements count */
	&asn_SPC_PlayerAllIn_specs_1	/* Additional specs */
};

