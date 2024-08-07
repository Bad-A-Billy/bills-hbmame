// license:GPL_2.0
// copyright-holders:Robbbert
#include "../mame/drivers/system1.cpp"

// Wonder Boy in Monster Land
ROM_START( wbml01 ) // wbmlbit
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD( "wbml.01",      0x20000, 0x8000, CRC(66482638) SHA1(887f93015f0effa2d0fa1f1f59082f75ac072221) )
	ROM_CONTINUE(             0x00000, 0x8000 )
	ROM_LOAD( "wbml.02it",    0x30000, 0x8000, CRC(680f2186) SHA1(bb7b43a8d8438ec9dc55f219db284934a57ea81a) )
	ROM_CONTINUE(             0x10000, 0x8000 )
	ROM_LOAD( "wbml.03",      0x38000, 0x8000, CRC(d57ba8aa) SHA1(16f095cb78e31af5ce76d36c20fe4c3e0d027aea) )
	ROM_CONTINUE(             0x18000, 0x8000 )

	ROM_REGION( 0x2000, "maincpu:key", 0 )
	ROM_LOAD( "317-0043.key",  0x0000, 0x2000, CRC(e354abfc) SHA1(07b0d3c51301ebb25909234b6220a3ed20dbcc7d) )

	ROM_REGION( 0x10000, "soundcpu", 0 )
	ROM_LOAD( "epr-11037.126", 0x0000, 0x8000, CRC(7a4ee585) SHA1(050436106cced5dcbf40a3d94d48202eedddc3ad) )

	ROM_REGION( 0x18000, "tiles", 0 )
	ROM_LOAD( "wbml.08it",    0x00000, 0x8000, CRC(bc2846d3) SHA1(6777ef6ca5b92600aa6038d773cdd8263639b1cb) )
	ROM_LOAD( "wbml.09it",    0x08000, 0x8000, CRC(c61fd58e) SHA1(f17dba3195e8b3c3d443d696cce63604cdc64a5e) )
	ROM_LOAD( "wbml.10it",    0x10000, 0x8000, CRC(e0386c02) SHA1(bdfa5fa2bbf641730865d74057203e41dcae80fa) )

	ROM_REGION( 0x20000, "sprites", 0 )
	ROM_LOAD( "epr-11028.87",  0x00000, 0x8000, CRC(af0b3972) SHA1(413825f66b84c7e45aa1855131482abead8f7f3b) )
	ROM_LOAD( "epr-11027.86",  0x08000, 0x8000, CRC(277d8f1d) SHA1(7854673503ed03d276abe971805a11f8c992f6d6) )
	ROM_LOAD( "epr-11030.89",  0x10000, 0x8000, CRC(f05ffc76) SHA1(f3dbb518240f86430840c3d4cda04bac79c20f69) )
	ROM_LOAD( "epr-11029.88",  0x18000, 0x8000, CRC(cedc9c61) SHA1(dbe5744f9b6f2a406b52b910dd4e133db7bce6b2) )

	ROM_REGION( 0x0300, "color_proms", 0 )
	ROM_LOAD( "pr11026.20",   0x0000, 0x0100, CRC(27057298) SHA1(654be7abb937bb0720263ee6512e31194662effe) )
	ROM_LOAD( "pr11025.14",   0x0100, 0x0100, CRC(41e4d86b) SHA1(a86e8bb0a465d01b04410edfbb82eb96f12b909f) )
	ROM_LOAD( "pr11024.8",    0x0200, 0x0100, CRC(08d71954) SHA1(df045dbfb3d669e4d42fbdba1e7191cd046f7b47) )

	ROM_REGION( 0x0100, "lookup_proms", 0 )
	ROM_LOAD( "pr5317.37",    0x0000, 0x0100, CRC(648350b8) SHA1(c7986aa9127ef5b50b845434cb4e81dff9861cd2) )
ROM_END

ROM_START( wbml02 ) // wbmlkb
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD( "wbml.01",      0x20000, 0x8000, CRC(66482638) SHA1(887f93015f0effa2d0fa1f1f59082f75ac072221) )
	ROM_CONTINUE(             0x00000, 0x8000 )
	ROM_LOAD( "m-6k.bin",     0x30000, 0x8000, CRC(7dd0b45a) SHA1(ae715437c225013bade54cf021be708c5145a84f) )
	ROM_CONTINUE(             0x10000, 0x8000 )
	ROM_LOAD( "m-7.bin",      0x38000, 0x8000, CRC(11881703) SHA1(b5e4d477158e7653b0fef5a4806be7b4871e917d) )
	ROM_CONTINUE(             0x18000, 0x8000 )

	ROM_REGION( 0x2000, "maincpu:key", 0 )
	ROM_LOAD( "317-0043.key",  0x0000, 0x2000, CRC(e354abfc) SHA1(07b0d3c51301ebb25909234b6220a3ed20dbcc7d) )

	ROM_REGION( 0x10000, "soundcpu", 0 )
	ROM_LOAD( "epr-11037.126", 0x0000, 0x8000, CRC(7a4ee585) SHA1(050436106cced5dcbf40a3d94d48202eedddc3ad) )

	ROM_REGION( 0x18000, "tiles", 0 )
	ROM_LOAD( "epr11034.4k",  0x00000, 0x8000, CRC(7e631c73) SHA1(ef7bc9c8b15083680f8169fa8d322cfbfa7d54ac) )
	ROM_LOAD( "epr11035.5k",  0x08000, 0x8000, CRC(4c67a9a6) SHA1(eac1f97aac3f5b0ce96dd082c7741033caa4b55b) )
	ROM_LOAD( "epr11036.6k",  0x10000, 0x8000, CRC(0440b0c7) SHA1(f0e321dc6c979807852c375c8a6905fd32336dde) )

	ROM_REGION( 0x20000, "sprites", 0 )
	ROM_LOAD( "epr-11028.87",  0x00000, 0x8000, CRC(af0b3972) SHA1(413825f66b84c7e45aa1855131482abead8f7f3b) )
	ROM_LOAD( "epr-11027.86",  0x08000, 0x8000, CRC(277d8f1d) SHA1(7854673503ed03d276abe971805a11f8c992f6d6) )
	ROM_LOAD( "epr-11030.89",  0x10000, 0x8000, CRC(f05ffc76) SHA1(f3dbb518240f86430840c3d4cda04bac79c20f69) )
	ROM_LOAD( "epr-11029.88",  0x18000, 0x8000, CRC(cedc9c61) SHA1(dbe5744f9b6f2a406b52b910dd4e133db7bce6b2) )

	ROM_REGION( 0x0300, "color_proms", 0 )
	ROM_LOAD( "pr11026.20",   0x0000, 0x0100, CRC(27057298) SHA1(654be7abb937bb0720263ee6512e31194662effe) )
	ROM_LOAD( "pr11025.14",   0x0100, 0x0100, CRC(41e4d86b) SHA1(a86e8bb0a465d01b04410edfbb82eb96f12b909f) )
	ROM_LOAD( "pr11024.8",    0x0200, 0x0100, CRC(08d71954) SHA1(df045dbfb3d669e4d42fbdba1e7191cd046f7b47) )

	ROM_REGION( 0x0100, "lookup_proms", 0 )
	ROM_LOAD( "pr5317.37",    0x0000, 0x0100, CRC(648350b8) SHA1(c7986aa9127ef5b50b845434cb4e81dff9861cd2) )
ROM_END

ROM_START( wbml03 )
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD( "wbml.01",      0x20000, 0x8000, CRC(66482638) SHA1(887f93015f0effa2d0fa1f1f59082f75ac072221) )
	ROM_CONTINUE(             0x00000, 0x8000 )
	ROM_LOAD( "wbml03.02",    0x30000, 0x8000, CRC(a7e1771a) SHA1(3286ed7912da5327ecc8b8c206927f8ded436578) )
	ROM_CONTINUE(             0x10000, 0x8000 )
	ROM_LOAD( "m-7.bin",      0x38000, 0x8000, CRC(11881703) SHA1(b5e4d477158e7653b0fef5a4806be7b4871e917d) )
	ROM_CONTINUE(             0x18000, 0x8000 )

	ROM_REGION( 0x10000, "soundcpu", 0 )
	ROM_LOAD( "epr-11037.126", 0x0000, 0x8000, CRC(7a4ee585) SHA1(050436106cced5dcbf40a3d94d48202eedddc3ad) )

	ROM_REGION( 0x18000, "tiles", 0 )
	ROM_LOAD( "wbml03.08",     0x00000, 0x8000, CRC(77551e44) SHA1(dbb325bb57967c169e9b67bbcd7e7074dbb512b2) )
	ROM_LOAD( "wbml03.09",     0x08000, 0x8000, CRC(8d05bb22) SHA1(c9d4c9642b072fc4560f8bf6c19a29c46fcc038d) )
	ROM_LOAD( "wbml03.10",     0x10000, 0x8000, CRC(243172bb) SHA1(42fd282105504ea9f6d7b4aceb688bd779dd32a2) )

	ROM_REGION( 0x20000, "sprites", 0 )
	ROM_LOAD( "epr-11028.87",  0x00000, 0x8000, CRC(af0b3972) SHA1(413825f66b84c7e45aa1855131482abead8f7f3b) )
	ROM_LOAD( "epr-11027.86",  0x08000, 0x8000, CRC(277d8f1d) SHA1(7854673503ed03d276abe971805a11f8c992f6d6) )
	ROM_LOAD( "epr-11030.89",  0x10000, 0x8000, CRC(f05ffc76) SHA1(f3dbb518240f86430840c3d4cda04bac79c20f69) )
	ROM_LOAD( "epr-11029.88",  0x18000, 0x8000, CRC(cedc9c61) SHA1(dbe5744f9b6f2a406b52b910dd4e133db7bce6b2) )

	ROM_REGION( 0x0300, "color_proms", 0 )
	ROM_LOAD( "pr11026.20",   0x0000, 0x0100, CRC(27057298) SHA1(654be7abb937bb0720263ee6512e31194662effe) )
	ROM_LOAD( "pr11025.14",   0x0100, 0x0100, CRC(41e4d86b) SHA1(a86e8bb0a465d01b04410edfbb82eb96f12b909f) )
	ROM_LOAD( "pr11024.8",    0x0200, 0x0100, CRC(08d71954) SHA1(df045dbfb3d669e4d42fbdba1e7191cd046f7b47) )

	ROM_REGION( 0x0100, "lookup_proms", 0 )
	ROM_LOAD( "pr5317.37",    0x0000, 0x0100, CRC(648350b8) SHA1(c7986aa9127ef5b50b845434cb4e81dff9861cd2) )
ROM_END

// Pitfall 2
ROM_START( pitfall2u01 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "epr-6623s01.116",  0x0000, 0x4000, CRC(217e9902) SHA1(a83d73b65a92d5676e519fb2cb787378a7e19fa0) )
	ROM_LOAD( "epr-6624s01.109",  0x4000, 0x4000, CRC(825b70b8) SHA1(adf90f01d4a5461a4201c7dc0d725ccf8b317015) )
	ROM_LOAD( "epr-6625.96",    0x8000, 0x4000, CRC(dc5484ba) SHA1(62fffff7d935c104def5f09e9dc4a26fa4ce4f94) )

	ROM_REGION( 0x10000, "soundcpu", 0 )
	ROM_LOAD( "epr-6462.120",   0x0000, 0x2000, CRC(86bb9185) SHA1(89add2e3784e8f5a20b895fb2c4466bdd6c34b0c) )

	ROM_REGION( 0xc000, "tiles", 0 )
	ROM_LOAD( "epr-6474a.62",   0x0000, 0x2000, CRC(9f1711b9) SHA1(c652010a8b19828f81fd101aa1ea781e250c4ec2) )
	ROM_LOAD( "epr-6473a.61",   0x2000, 0x2000, CRC(8e53b8dd) SHA1(23e04589f2b523d6b8e46d16f40e59685e27f522) )
	ROM_LOAD( "epr-6472a.64",   0x4000, 0x2000, CRC(e0f34a11) SHA1(b7a96a1867f8bd3cc1251b5fd12991c406e62a37) )
	ROM_LOAD( "epr-6471a.63",   0x6000, 0x2000, CRC(d5bc805c) SHA1(520afa7617e8dfd09bf469c01ac606a4a3acdc5e) )
	ROM_LOAD( "epr-6470a.66",   0x8000, 0x2000, CRC(1439729f) SHA1(54ea6ef54be6dcc2a5d00f7f817fd8836a02b3b9) )
	ROM_LOAD( "epr-6469a.65",   0xa000, 0x2000, CRC(e4ac6921) SHA1(f95e3b368c2c6dbf8265fb314d73019fe7dcce22) )

	ROM_REGION( 0x8000, "sprites", 0 )
	ROM_LOAD( "epr-6454a.117",  0x0000, 0x4000, CRC(a5d96780) SHA1(e0571f6fd031bbe2d971c3be7b96a017b0ea4be9) )
	ROM_LOAD( "epr-6455.05",    0x4000, 0x4000, CRC(32ee64a1) SHA1(21743f78735fc9105fbbfac420bdaa2965b4b56f) )

	ROM_REGION( 0x0100, "lookup_proms", 0 )
	ROM_LOAD( "pr-5317.76",     0x0000, 0x0100, CRC(648350b8) SHA1(c7986aa9127ef5b50b845434cb4e81dff9861cd2) )
ROM_END


GAME( 1987, wbml01, wbml, sys2xb,    wbml, system1_state, init_bootsys2, ROT0, "Michele", "Wonder Boy in Monster Land (Italian - v0.99)", MACHINE_SUPPORTS_SAVE )
GAME( 1987, wbml02, wbml, sys2xb,    wbml, system1_state, init_bootsys2, ROT0, "Aneue Bannzai", "Wonder Boy in Monster Land (Korean)", MACHINE_SUPPORTS_SAVE )
GAME( 1987, wbml03, wbml, sys2xboot, wbml, system1_state, init_bootsys2, ROT0, "bootleg", "Wonder Boy in Monster Land (bootleg)", MACHINE_SUPPORTS_SAVE )
GAME( 2002, pitfall2u01,  pitfall2, sys1pio, pitfall2u, system1_state, empty_init, ROT0, "Sekret", "Pitfall II Trainer (2002-10-15)", MACHINE_SUPPORTS_SAVE )

