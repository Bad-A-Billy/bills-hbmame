// license:GPL_2.0
// copyright-holders:Robbbert
#include "../mame/drivers/powerins.cpp"

/**************
 Power Instinct
*****************/

ROM_START( powerins01 )
	ROM_REGION( 0x900000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "93095_s01-3.u108", 0x00000, 0x454F48, CRC(1aa0b604) SHA1(67bc37584e7d697b28537eb43622fccf83dd87e7) )
	ROM_LOAD16_WORD_SWAP( "93095-4.u109",  0x80000, 0x80000, CRC(d3d7a782) SHA1(7846de0ebb09bd9b2534cd451ff9aa5175e60647) )

	ROM_REGION( 0x20000, "audiocpu", 0 )
	ROM_LOAD( "93095-2.u90",  0x00000, 0x20000, CRC(4b123cc6) SHA1(ed61d3a2ab20c86b91fd7bafa717be3ce26159be) )

	ROM_REGION( 0x280000, "bgtile", 0 )
	ROM_LOAD( "93095-5.u16",  0x000000, 0x100000, CRC(b1371808) SHA1(15fca313314ff2e0caff35841a2fdda97f6235a8) )
	ROM_LOAD( "93095_s01-6.u17",  0x100000, 0x100000, CRC(4a7a6bd8) SHA1(953bba9606795ec32c9c0e4e0fd4e88da9708cf8) )
	ROM_LOAD( "93095-7.u18",  0x200000, 0x080000, CRC(2dd76149) SHA1(975e4d371fdfbbd9a568da4d4c91ffd3f0ae636e) )

	ROM_REGION( 0x100000, "fgtile", 0 )
	ROM_LOAD( "93095_s01-1.u15",  0x000000, 0x020000, CRC(7e73e1d8) SHA1(ff8d8ecbb01122291404f93a60d6e0c3fc56c3c7) )

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-12.u116", 0x000000, 0x100000, CRC(35f3c2a3) SHA1(70efebfe248401ba3d766dc0e4bcc2846cd0d9a0) )
	ROM_LOAD16_WORD_SWAP( "93095-13.u117", 0x100000, 0x100000, CRC(1ebd45da) SHA1(99b0ac734890673064b2a4b4b57ff2694e338dea) )
	ROM_LOAD16_WORD_SWAP( "93095-14.u118", 0x200000, 0x100000, CRC(760d871b) SHA1(4887122ad0518c90f08c11a7a6b694f3fd218498) )
	ROM_LOAD16_WORD_SWAP( "93095-15.u119", 0x300000, 0x100000, CRC(d011be88) SHA1(837409a2584abdf22e022b0f06181a600a974cbe) )
	ROM_LOAD16_WORD_SWAP( "93095-16.u120", 0x400000, 0x100000, CRC(a9c16c9c) SHA1(a34e81324c875c2a57f778d1dbdda8da81850a29) )
	ROM_LOAD16_WORD_SWAP( "93095-17.u121", 0x500000, 0x100000, CRC(51b57288) SHA1(821473d51565bc0a8b9a979723ce1307b97e517e) )
	ROM_LOAD16_WORD_SWAP( "93095-18.u122", 0x600000, 0x100000, CRC(b135e3f2) SHA1(339fb4007ca0f379b7554a1c4f711f494a371fb2) )
	ROM_LOAD16_WORD_SWAP( "93095-19.u123", 0x700000, 0x100000, CRC(67695537) SHA1(4c78ce3e36f27d2a6a9e50e8bf896335d4d0958a) )

	ROM_REGION( 0x240000, "oki1", 0 )
	ROM_LOAD( "93095-10.u48", 0x040000, 0x100000, CRC(329ac6c5) SHA1(e809b94e2623141f5a48995cfa97fe1ead7ab40b) )
	ROM_LOAD( "93095-11.u49", 0x140000, 0x100000, CRC(75d6097c) SHA1(3c89a7c9b12087e2d969b822419d3e5f98f5cb1d) )

	ROM_REGION( 0x240000, "oki2", 0 )
	ROM_LOAD( "93095-8.u46",  0x040000, 0x100000, CRC(f019bedb) SHA1(4b6e10f85671c75b666e547887d403d6e607cec8) )
	ROM_LOAD( "93095-9.u47",  0x140000, 0x100000, CRC(adc83765) SHA1(9e760443f9de21c1bb7e33eaa1541023fcdc60ab) )

	ROM_REGION( 0x0220, "proms", 0 )
	ROM_LOAD( "22.u81",       0x000000, 0x0020, CRC(67d5ec4b) SHA1(87d32948a0c88277dcdd0eaa035bde40fc7db5fe) )
	ROM_LOAD( "21.u71",       0x000020, 0x0100, CRC(182cd81f) SHA1(3a76bea81b34ea7ccf56044206721058aa5b03e6) )
	ROM_LOAD( "20.u54",       0x000100, 0x0100, CRC(38bd0e2f) SHA1(20d311869642cd96bb831fdf4a458e0d872f03eb) )
ROM_END

ROM_START( powerins02 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-3a.u108", 0x00000, 0x80000, CRC(9825ea3d) SHA1(567fd8e3d866a58a68608ea20c5d3fc16cf9f444) )
	ROM_LOAD16_WORD_SWAP( "93095-4.u109",  0x80000, 0x80000, CRC(d3d7a782) SHA1(7846de0ebb09bd9b2534cd451ff9aa5175e60647) )

	ROM_REGION( 0x820000, "audiocpu", 0 )
	ROM_LOAD( "93095-2_s02.u90",  0x00000, 0x7FD9A, CRC(20a75f53) SHA1(812c2502299d3a556cb238f141c4079d7352b436) )

	ROM_REGION( 0x280000, "bgtile", 0 )
	ROM_LOAD( "93095-5.u16",  0x000000, 0x100000, CRC(b1371808) SHA1(15fca313314ff2e0caff35841a2fdda97f6235a8) )
	ROM_LOAD( "93095-6.u17",  0x100000, 0x100000, CRC(29c85d80) SHA1(abd54f9c8bade21ea918a426627199da04193165) )
	ROM_LOAD( "93095-7.u18",  0x200000, 0x080000, CRC(2dd76149) SHA1(975e4d371fdfbbd9a568da4d4c91ffd3f0ae636e) )

	ROM_REGION( 0x100000, "fgtile", 0 )
	ROM_LOAD( "93095-1.u15",  0x000000, 0x020000, CRC(6a579ee0) SHA1(438e87b930e068e0cf7352e614a14049ebde6b8a) )

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-12.u116", 0x000000, 0x100000, CRC(35f3c2a3) SHA1(70efebfe248401ba3d766dc0e4bcc2846cd0d9a0) )
	ROM_LOAD16_WORD_SWAP( "93095-13.u117", 0x100000, 0x100000, CRC(1ebd45da) SHA1(99b0ac734890673064b2a4b4b57ff2694e338dea) )
	ROM_LOAD16_WORD_SWAP( "93095-14.u118", 0x200000, 0x100000, CRC(760d871b) SHA1(4887122ad0518c90f08c11a7a6b694f3fd218498) )
	ROM_LOAD16_WORD_SWAP( "93095-15.u119", 0x300000, 0x100000, CRC(d011be88) SHA1(837409a2584abdf22e022b0f06181a600a974cbe) )
	ROM_LOAD16_WORD_SWAP( "93095-16.u120", 0x400000, 0x100000, CRC(a9c16c9c) SHA1(a34e81324c875c2a57f778d1dbdda8da81850a29) )
	ROM_LOAD16_WORD_SWAP( "93095-17.u121", 0x500000, 0x100000, CRC(51b57288) SHA1(821473d51565bc0a8b9a979723ce1307b97e517e) )
	ROM_LOAD16_WORD_SWAP( "93095-18.u122", 0x600000, 0x100000, CRC(b135e3f2) SHA1(339fb4007ca0f379b7554a1c4f711f494a371fb2) )
	ROM_LOAD16_WORD_SWAP( "93095-19.u123", 0x700000, 0x100000, CRC(67695537) SHA1(4c78ce3e36f27d2a6a9e50e8bf896335d4d0958a) )

	ROM_REGION( 0x240000, "oki1", 0 )
	ROM_LOAD( "93095-10.u48", 0x040000, 0x100000, CRC(329ac6c5) SHA1(e809b94e2623141f5a48995cfa97fe1ead7ab40b) )
	ROM_LOAD( "93095-11.u49", 0x140000, 0x100000, CRC(75d6097c) SHA1(3c89a7c9b12087e2d969b822419d3e5f98f5cb1d) )

	ROM_REGION( 0x240000, "oki2", 0 )
	ROM_LOAD( "93095-8.u46",  0x040000, 0x100000, CRC(f019bedb) SHA1(4b6e10f85671c75b666e547887d403d6e607cec8) )
	ROM_LOAD( "93095-9.u47",  0x140000, 0x100000, CRC(adc83765) SHA1(9e760443f9de21c1bb7e33eaa1541023fcdc60ab) )

	ROM_REGION( 0x0220, "proms", 0 )
	ROM_LOAD( "22.u81",       0x000000, 0x0020, CRC(67d5ec4b) SHA1(87d32948a0c88277dcdd0eaa035bde40fc7db5fe) )
	ROM_LOAD( "21.u71",       0x000020, 0x0100, CRC(182cd81f) SHA1(3a76bea81b34ea7ccf56044206721058aa5b03e6) )
	ROM_LOAD( "20.u54",       0x000100, 0x0100, CRC(38bd0e2f) SHA1(20d311869642cd96bb831fdf4a458e0d872f03eb) )
ROM_END

ROM_START( powerins03 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "93095_s03-3a.u108", 0x00000, 0x80000, CRC(432453c5) SHA1(38111f755737ea852ca3dd364103383697420158) )
	ROM_LOAD16_WORD_SWAP( "93095-4.u109",  0x80000, 0x80000, CRC(d3d7a782) SHA1(7846de0ebb09bd9b2534cd451ff9aa5175e60647) )

	ROM_REGION( 0x20000, "audiocpu", 0 )
	ROM_LOAD( "93095-2.u90",  0x00000, 0x20000, CRC(4b123cc6) SHA1(ed61d3a2ab20c86b91fd7bafa717be3ce26159be) )

	ROM_REGION( 0x280000, "bgtile", 0 )
	ROM_LOAD( "93095-5.u16",  0x000000, 0x100000, CRC(b1371808) SHA1(15fca313314ff2e0caff35841a2fdda97f6235a8) )
	ROM_LOAD( "93095-6.u17",  0x100000, 0x100000, CRC(29c85d80) SHA1(abd54f9c8bade21ea918a426627199da04193165) )
	ROM_LOAD( "93095-7.u18",  0x200000, 0x080000, CRC(2dd76149) SHA1(975e4d371fdfbbd9a568da4d4c91ffd3f0ae636e) )

	ROM_REGION( 0x100000, "fgtile", 0 )
	ROM_LOAD( "93095-1.u15",  0x000000, 0x020000, CRC(6a579ee0) SHA1(438e87b930e068e0cf7352e614a14049ebde6b8a) )

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-12.u116", 0x000000, 0x100000, CRC(35f3c2a3) SHA1(70efebfe248401ba3d766dc0e4bcc2846cd0d9a0) )
	ROM_LOAD16_WORD_SWAP( "93095-13.u117", 0x100000, 0x100000, CRC(1ebd45da) SHA1(99b0ac734890673064b2a4b4b57ff2694e338dea) )
	ROM_LOAD16_WORD_SWAP( "93095-14.u118", 0x200000, 0x100000, CRC(760d871b) SHA1(4887122ad0518c90f08c11a7a6b694f3fd218498) )
	ROM_LOAD16_WORD_SWAP( "93095-15.u119", 0x300000, 0x100000, CRC(d011be88) SHA1(837409a2584abdf22e022b0f06181a600a974cbe) )
	ROM_LOAD16_WORD_SWAP( "93095-16.u120", 0x400000, 0x100000, CRC(a9c16c9c) SHA1(a34e81324c875c2a57f778d1dbdda8da81850a29) )
	ROM_LOAD16_WORD_SWAP( "93095-17.u121", 0x500000, 0x100000, CRC(51b57288) SHA1(821473d51565bc0a8b9a979723ce1307b97e517e) )
	ROM_LOAD16_WORD_SWAP( "93095-18.u122", 0x600000, 0x100000, CRC(b135e3f2) SHA1(339fb4007ca0f379b7554a1c4f711f494a371fb2) )
	ROM_LOAD16_WORD_SWAP( "93095-19.u123", 0x700000, 0x100000, CRC(67695537) SHA1(4c78ce3e36f27d2a6a9e50e8bf896335d4d0958a) )

	ROM_REGION( 0x240000, "oki1", 0 )
	ROM_LOAD( "93095-10.u48", 0x040000, 0x100000, CRC(329ac6c5) SHA1(e809b94e2623141f5a48995cfa97fe1ead7ab40b) )
	ROM_LOAD( "93095-11.u49", 0x140000, 0x100000, CRC(75d6097c) SHA1(3c89a7c9b12087e2d969b822419d3e5f98f5cb1d) )

	ROM_REGION( 0x240000, "oki2", 0 )
	ROM_LOAD( "93095-8.u46",  0x040000, 0x100000, CRC(f019bedb) SHA1(4b6e10f85671c75b666e547887d403d6e607cec8) )
	ROM_LOAD( "93095-9.u47",  0x140000, 0x100000, CRC(adc83765) SHA1(9e760443f9de21c1bb7e33eaa1541023fcdc60ab) )

	ROM_REGION( 0x0220, "proms", 0 )
	ROM_LOAD( "22.u81",       0x000000, 0x0020, CRC(67d5ec4b) SHA1(87d32948a0c88277dcdd0eaa035bde40fc7db5fe) )
	ROM_LOAD( "21.u71",       0x000020, 0x0100, CRC(182cd81f) SHA1(3a76bea81b34ea7ccf56044206721058aa5b03e6) )
	ROM_LOAD( "20.u54",       0x000100, 0x0100, CRC(38bd0e2f) SHA1(20d311869642cd96bb831fdf4a458e0d872f03eb) )
ROM_END

ROM_START( powerins04 ) //powerinsl
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "93095_s04-3a.u108", 0x00000, 0x80000, CRC(1686cae2) SHA1(6eb4b42d2f0f9a5ab2a98998b0416f5d88f98cef) )
	ROM_LOAD16_WORD_SWAP( "93095-4.u109",  0x80000, 0x80000, CRC(d3d7a782) SHA1(7846de0ebb09bd9b2534cd451ff9aa5175e60647) )

	ROM_REGION( 0x20000, "audiocpu", 0 )
	ROM_LOAD( "93095-2.u90",  0x00000, 0x20000, CRC(4b123cc6) SHA1(ed61d3a2ab20c86b91fd7bafa717be3ce26159be) )

	ROM_REGION( 0x280000, "bgtile", 0 )
	ROM_LOAD( "93095-5.u16",  0x000000, 0x100000, CRC(b1371808) SHA1(15fca313314ff2e0caff35841a2fdda97f6235a8) )
	ROM_LOAD( "93095-6.u17",  0x100000, 0x100000, CRC(29c85d80) SHA1(abd54f9c8bade21ea918a426627199da04193165) )
	ROM_LOAD( "93095-7.u18",  0x200000, 0x080000, CRC(2dd76149) SHA1(975e4d371fdfbbd9a568da4d4c91ffd3f0ae636e) )

	ROM_REGION( 0x100000, "fgtile", 0 )
	ROM_LOAD( "93095-1.u15",  0x000000, 0x020000, CRC(6a579ee0) SHA1(438e87b930e068e0cf7352e614a14049ebde6b8a) )

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-12.u116", 0x000000, 0x100000, CRC(35f3c2a3) SHA1(70efebfe248401ba3d766dc0e4bcc2846cd0d9a0) )
	ROM_LOAD16_WORD_SWAP( "93095-13.u117", 0x100000, 0x100000, CRC(1ebd45da) SHA1(99b0ac734890673064b2a4b4b57ff2694e338dea) )
	ROM_LOAD16_WORD_SWAP( "93095-14.u118", 0x200000, 0x100000, CRC(760d871b) SHA1(4887122ad0518c90f08c11a7a6b694f3fd218498) )
	ROM_LOAD16_WORD_SWAP( "93095-15.u119", 0x300000, 0x100000, CRC(d011be88) SHA1(837409a2584abdf22e022b0f06181a600a974cbe) )
	ROM_LOAD16_WORD_SWAP( "93095-16.u120", 0x400000, 0x100000, CRC(a9c16c9c) SHA1(a34e81324c875c2a57f778d1dbdda8da81850a29) )
	ROM_LOAD16_WORD_SWAP( "93095-17.u121", 0x500000, 0x100000, CRC(51b57288) SHA1(821473d51565bc0a8b9a979723ce1307b97e517e) )
	ROM_LOAD16_WORD_SWAP( "93095-18.u122", 0x600000, 0x100000, CRC(b135e3f2) SHA1(339fb4007ca0f379b7554a1c4f711f494a371fb2) )
	ROM_LOAD16_WORD_SWAP( "93095-19.u123", 0x700000, 0x100000, CRC(67695537) SHA1(4c78ce3e36f27d2a6a9e50e8bf896335d4d0958a) )

	ROM_REGION( 0x240000, "oki1", 0 )
	ROM_LOAD( "93095-10.u48", 0x040000, 0x100000, CRC(329ac6c5) SHA1(e809b94e2623141f5a48995cfa97fe1ead7ab40b) )
	ROM_LOAD( "93095-11.u49", 0x140000, 0x100000, CRC(75d6097c) SHA1(3c89a7c9b12087e2d969b822419d3e5f98f5cb1d) )

	ROM_REGION( 0x240000, "oki2", 0 )
	ROM_LOAD( "93095-8.u46",  0x040000, 0x100000, CRC(f019bedb) SHA1(4b6e10f85671c75b666e547887d403d6e607cec8) )
	ROM_LOAD( "93095-9.u47",  0x140000, 0x100000, CRC(adc83765) SHA1(9e760443f9de21c1bb7e33eaa1541023fcdc60ab) )

	ROM_REGION( 0x0220, "proms", 0 )
	ROM_LOAD( "22.u81",       0x000000, 0x0020, CRC(67d5ec4b) SHA1(87d32948a0c88277dcdd0eaa035bde40fc7db5fe) )
	ROM_LOAD( "21.u71",       0x000020, 0x0100, CRC(182cd81f) SHA1(3a76bea81b34ea7ccf56044206721058aa5b03e6) )
	ROM_LOAD( "20.u54",       0x000100, 0x0100, CRC(38bd0e2f) SHA1(20d311869642cd96bb831fdf4a458e0d872f03eb) )
ROM_END

ROM_START( powerins05 ) //powerinsj
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "93095_s05-3a.u108", 0x00000, 0x80000, CRC(45d14b06) SHA1(57ac115d14962bff1dc81571da6e53760c468c4f) )
	ROM_LOAD16_WORD_SWAP( "93095_s05-4.u109",  0x80000, 0x80000, CRC(0117de7e) SHA1(26cb4f25e61d5d1334d1e02af83284d6f0b50e32) )

	ROM_REGION( 0x20000, "audiocpu", 0 )
	ROM_LOAD( "93095-2.u90",  0x00000, 0x20000, CRC(4b123cc6) SHA1(ed61d3a2ab20c86b91fd7bafa717be3ce26159be) )

	ROM_REGION( 0x280000, "bgtile", 0 )
	ROM_LOAD( "93095-5.u16",  0x000000, 0x100000, CRC(b1371808) SHA1(15fca313314ff2e0caff35841a2fdda97f6235a8) )
	ROM_LOAD( "93095-6.u17",  0x100000, 0x100000, CRC(29c85d80) SHA1(abd54f9c8bade21ea918a426627199da04193165) )
	ROM_LOAD( "93095-7.u18",  0x200000, 0x080000, CRC(2dd76149) SHA1(975e4d371fdfbbd9a568da4d4c91ffd3f0ae636e) )

	ROM_REGION( 0x100000, "fgtile", 0 )
	ROM_LOAD( "93095-1.u15",  0x000000, 0x020000, CRC(6a579ee0) SHA1(438e87b930e068e0cf7352e614a14049ebde6b8a) )

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-12.u116", 0x000000, 0x100000, CRC(35f3c2a3) SHA1(70efebfe248401ba3d766dc0e4bcc2846cd0d9a0) )
	ROM_LOAD16_WORD_SWAP( "93095-13.u117", 0x100000, 0x100000, CRC(1ebd45da) SHA1(99b0ac734890673064b2a4b4b57ff2694e338dea) )
	ROM_LOAD16_WORD_SWAP( "93095-14.u118", 0x200000, 0x100000, CRC(760d871b) SHA1(4887122ad0518c90f08c11a7a6b694f3fd218498) )
	ROM_LOAD16_WORD_SWAP( "93095-15.u119", 0x300000, 0x100000, CRC(d011be88) SHA1(837409a2584abdf22e022b0f06181a600a974cbe) )
	ROM_LOAD16_WORD_SWAP( "93095-16.u120", 0x400000, 0x100000, CRC(a9c16c9c) SHA1(a34e81324c875c2a57f778d1dbdda8da81850a29) )
	ROM_LOAD16_WORD_SWAP( "93095-17.u121", 0x500000, 0x100000, CRC(51b57288) SHA1(821473d51565bc0a8b9a979723ce1307b97e517e) )
	ROM_LOAD16_WORD_SWAP( "93095-18.u122", 0x600000, 0x100000, CRC(b135e3f2) SHA1(339fb4007ca0f379b7554a1c4f711f494a371fb2) )
	ROM_LOAD16_WORD_SWAP( "93095-19.u123", 0x700000, 0x100000, CRC(67695537) SHA1(4c78ce3e36f27d2a6a9e50e8bf896335d4d0958a) )

	ROM_REGION( 0x240000, "oki1", 0 )
	ROM_LOAD( "93095-10.u48", 0x040000, 0x100000, CRC(329ac6c5) SHA1(e809b94e2623141f5a48995cfa97fe1ead7ab40b) )
	ROM_LOAD( "93095-11.u49", 0x140000, 0x100000, CRC(75d6097c) SHA1(3c89a7c9b12087e2d969b822419d3e5f98f5cb1d) )

	ROM_REGION( 0x240000, "oki2", 0 )
	ROM_LOAD( "93095-8.u46",  0x040000, 0x100000, CRC(f019bedb) SHA1(4b6e10f85671c75b666e547887d403d6e607cec8) )
	ROM_LOAD( "93095-9.u47",  0x140000, 0x100000, CRC(adc83765) SHA1(9e760443f9de21c1bb7e33eaa1541023fcdc60ab) )

	ROM_REGION( 0x0220, "proms", 0 )
	ROM_LOAD( "22.u81",       0x000000, 0x0020, CRC(67d5ec4b) SHA1(87d32948a0c88277dcdd0eaa035bde40fc7db5fe) )
	ROM_LOAD( "21.u71",       0x000020, 0x0100, CRC(182cd81f) SHA1(3a76bea81b34ea7ccf56044206721058aa5b03e6) )
	ROM_LOAD( "20.u54",       0x000100, 0x0100, CRC(38bd0e2f) SHA1(20d311869642cd96bb831fdf4a458e0d872f03eb) )
ROM_END

ROM_START( powerins06 )
	ROM_REGION( 0x100000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "93095_s06-3.u108", 0x00000, 0x80000, CRC(522e776a) SHA1(4b3965a3388fdbb438d5cdbff7194cc3344a51e7) )
	ROM_LOAD16_WORD_SWAP( "93095-4.u109",  0x80000, 0x80000, CRC(d3d7a782) SHA1(7846de0ebb09bd9b2534cd451ff9aa5175e60647) )

	ROM_REGION( 0x20000, "audiocpu", 0 )
	ROM_LOAD( "93095-2.u90",  0x00000, 0x20000, CRC(4b123cc6) SHA1(ed61d3a2ab20c86b91fd7bafa717be3ce26159be) )

	ROM_REGION( 0x280000, "bgtile", 0 )
	ROM_LOAD( "93095-5.u16",  0x000000, 0x100000, CRC(b1371808) SHA1(15fca313314ff2e0caff35841a2fdda97f6235a8) )
	ROM_LOAD( "93095_s01-6.u17",  0x100000, 0x100000, CRC(4a7a6bd8) SHA1(953bba9606795ec32c9c0e4e0fd4e88da9708cf8) )
	ROM_LOAD( "93095-7.u18",  0x200000, 0x080000, CRC(2dd76149) SHA1(975e4d371fdfbbd9a568da4d4c91ffd3f0ae636e) )

	ROM_REGION( 0x100000, "fgtile", 0 )
	ROM_LOAD( "93095_s01-1.u15",  0x000000, 0x020000, CRC(7e73e1d8) SHA1(ff8d8ecbb01122291404f93a60d6e0c3fc56c3c7) )

	ROM_REGION( 0x800000, "sprites", 0 )
	ROM_LOAD16_WORD_SWAP( "93095-12.u116", 0x000000, 0x100000, CRC(35f3c2a3) SHA1(70efebfe248401ba3d766dc0e4bcc2846cd0d9a0) )
	ROM_LOAD16_WORD_SWAP( "93095-13.u117", 0x100000, 0x100000, CRC(1ebd45da) SHA1(99b0ac734890673064b2a4b4b57ff2694e338dea) )
	ROM_LOAD16_WORD_SWAP( "93095-14.u118", 0x200000, 0x100000, CRC(760d871b) SHA1(4887122ad0518c90f08c11a7a6b694f3fd218498) )
	ROM_LOAD16_WORD_SWAP( "93095-15.u119", 0x300000, 0x100000, CRC(d011be88) SHA1(837409a2584abdf22e022b0f06181a600a974cbe) )
	ROM_LOAD16_WORD_SWAP( "93095-16.u120", 0x400000, 0x100000, CRC(a9c16c9c) SHA1(a34e81324c875c2a57f778d1dbdda8da81850a29) )
	ROM_LOAD16_WORD_SWAP( "93095-17.u121", 0x500000, 0x100000, CRC(51b57288) SHA1(821473d51565bc0a8b9a979723ce1307b97e517e) )
	ROM_LOAD16_WORD_SWAP( "93095-18.u122", 0x600000, 0x100000, CRC(b135e3f2) SHA1(339fb4007ca0f379b7554a1c4f711f494a371fb2) )
	ROM_LOAD16_WORD_SWAP( "93095-19.u123", 0x700000, 0x100000, CRC(67695537) SHA1(4c78ce3e36f27d2a6a9e50e8bf896335d4d0958a) )

	ROM_REGION( 0x240000, "oki1", 0 )
	ROM_LOAD( "93095-10.u48", 0x040000, 0x100000, CRC(329ac6c5) SHA1(e809b94e2623141f5a48995cfa97fe1ead7ab40b) )
	ROM_LOAD( "93095-11.u49", 0x140000, 0x100000, CRC(75d6097c) SHA1(3c89a7c9b12087e2d969b822419d3e5f98f5cb1d) )

	ROM_REGION( 0x240000, "oki2", 0 )
	ROM_LOAD( "93095-8.u46",  0x040000, 0x100000, CRC(f019bedb) SHA1(4b6e10f85671c75b666e547887d403d6e607cec8) )
	ROM_LOAD( "93095-9.u47",  0x140000, 0x100000, CRC(adc83765) SHA1(9e760443f9de21c1bb7e33eaa1541023fcdc60ab) )

	ROM_REGION( 0x0220, "proms", 0 )
	ROM_LOAD( "22.u81",       0x000000, 0x0020, CRC(67d5ec4b) SHA1(87d32948a0c88277dcdd0eaa035bde40fc7db5fe) )
	ROM_LOAD( "21.u71",       0x000020, 0x0100, CRC(182cd81f) SHA1(3a76bea81b34ea7ccf56044206721058aa5b03e6) )
	ROM_LOAD( "20.u54",       0x000100, 0x0100, CRC(38bd0e2f) SHA1(20d311869642cd96bb831fdf4a458e0d872f03eb) )
ROM_END


/*    YEAR  NAME            PARENT    MACHINE        INPUT       CLASS             INIT        MONITOR COMPANY         FULLNAME FLAGS */
//Power Instinct
GAME( 2015, powerins01,     powerins, powerins,      powerins,   powerins_state,   empty_init,  ROT0,  "hack", "Power Instinct (Great Blood Temple Simplification, 2015-12-05)", MACHINE_SUPPORTS_SAVE )
GAME( 2017, powerins02,     powerins, powerins,      powerins,   powerins_state,   empty_init,  ROT0,  "hack", "Power Instinct (Unknown Hack, 2017-07-01)", MACHINE_SUPPORTS_SAVE )
GAME( 2006, powerins03,     powerins, powerins,      powerins,   powerins_state,   empty_init,  ROT0,  "0 DAY-S", "Power Instinct (Enable Hidden Character)", MACHINE_SUPPORTS_SAVE )
GAME( 2018, powerins04,     powerins, powerins,      powerins,   powerins_state,   empty_init,  ROT0,  "hack", "Power Instinct (Simplify Edition, 2018-06-04)", MACHINE_SUPPORTS_SAVE )
GAME( 2020, powerins05,     powerins, powerins,      powerins,   powerins_state,   empty_init,  ROT0,  "hack", "Power Instinct (Optimised Edition, 2020-05-15)", MACHINE_SUPPORTS_SAVE )
GAME( 2006, powerins06,     powerins, powerins,      powerins,   powerins_state,   empty_init,  ROT0,  "Devilfox & BisonSAS", "Power Instinct (Brazilian, 2006-04-25)", MACHINE_SUPPORTS_SAVE )

