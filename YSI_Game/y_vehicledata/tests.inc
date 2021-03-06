/*
Legal:
	Version: MPL 1.1
	
	The contents of this file are subject to the Mozilla Public License Version 
	1.1 the "License"; you may not use this file except in compliance with 
	the License. You may obtain a copy of the License at 
	http://www.mozilla.org/MPL/
	
	Software distributed under the License is distributed on an "AS IS" basis,
	WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
	for the specific language governing rights and limitations under the
	License.
	
	The Original Code is the YSI framework.
	
	The Initial Developer of the Original Code is Alex "Y_Less" Cole.
	Portions created by the Initial Developer are Copyright C 2011
	the Initial Developer. All Rights Reserved.

Contributors:
	Y_Less
	koolk
	JoeBullet/Google63
	g_aSlice/Slice
	Misiur
	samphunter
	tianmeta
	maddinat0r
	spacemud
	Crayder
	Dayvison
	Ahmad45123
	Zeex
	irinel1996
	Yiin-
	Chaprnks
	Konstantinos
	Masterchen09
	Southclaws
	PatchwerkQWER
	m0k1
	paulommu
	udan111

Thanks:
	JoeBullet/Google63 - Handy arbitrary ASM jump code using SCTRL.
	ZeeX - Very productive conversations.
	koolk - IsPlayerinAreaEx code.
	TheAlpha - Danish translation.
	breadfish - German translation.
	Fireburn - Dutch translation.
	yom - French translation.
	50p - Polish translation.
	Zamaroht - Spanish translation.
	Los - Portuguese translation.
	Dracoblue, sintax, mabako, Xtreme, other coders - Producing other modes for
		me to strive to better.
	Pixels^ - Running XScripters where the idea was born.
	Matite - Pestering me to release it and using it.

Very special thanks to:
	Thiadmer - PAWN, whose limits continue to amaze me!
	Kye/Kalcor - SA:MP.
	SA:MP Team past, present and future - SA:MP.

Optional plugins:
	Gamer_Z - GPS.
	Incognito - Streamer.
	Me - sscanf2, fixes2, Whirlpool.
*/

static stock bool:VIM_LocalEmpty(str[])
{
	return str[0] == '\0';
}

Test:VIM_SomeSettings()
{
	ASSERT(Model_IsCar(401));
	ASSERT(Model_IsCar(457));
	ASSERT(!Model_IsCar(476));
	ASSERT(!Model_IsCar(999));
}

Test:VIM_Clamps()
{
	ASSERT(Model_ToVIM(-3)  == VIM:(399 - 399));
	ASSERT(Model_ToVIM(0)   == VIM:(399 - 399));
	ASSERT(Model_ToVIM(10)  == VIM:(399 - 399));
	ASSERT(Model_ToVIM(397) == VIM:(399 - 399));
	ASSERT(Model_ToVIM(398) == VIM:(399 - 399));
	ASSERT(Model_ToVIM(399) == VIM:(399 - 399));
	ASSERT(Model_ToVIM(400) == VIM:(400 - 399));
	ASSERT(Model_ToVIM(401) == VIM:(401 - 399));
	ASSERT(Model_ToVIM(402) == VIM:(402 - 399));
	ASSERT(Model_ToVIM(403) == VIM:(403 - 399));
	ASSERT(Model_ToVIM(404) == VIM:(404 - 399));
	ASSERT(Model_ToVIM(405) == VIM:(405 - 399));
	ASSERT(Model_ToVIM(406) == VIM:(406 - 399));
	ASSERT(Model_ToVIM(407) == VIM:(407 - 399));
	ASSERT(Model_ToVIM(408) == VIM:(408 - 399));
	ASSERT(Model_ToVIM(409) == VIM:(409 - 399));
	ASSERT(Model_ToVIM(410) == VIM:(410 - 399));
	ASSERT(Model_ToVIM(411) == VIM:(411 - 399));
	ASSERT(Model_ToVIM(412) == VIM:(412 - 399));
	ASSERT(Model_ToVIM(413) == VIM:(413 - 399));
	ASSERT(Model_ToVIM(414) == VIM:(414 - 399));
	ASSERT(Model_ToVIM(415) == VIM:(415 - 399));
	ASSERT(Model_ToVIM(416) == VIM:(416 - 399));
	ASSERT(Model_ToVIM(417) == VIM:(417 - 399));
	ASSERT(Model_ToVIM(418) == VIM:(418 - 399));
	ASSERT(Model_ToVIM(419) == VIM:(419 - 399));
	ASSERT(Model_ToVIM(420) == VIM:(420 - 399));
	ASSERT(Model_ToVIM(421) == VIM:(421 - 399));
	ASSERT(Model_ToVIM(422) == VIM:(422 - 399));
	ASSERT(Model_ToVIM(423) == VIM:(423 - 399));
	ASSERT(Model_ToVIM(424) == VIM:(424 - 399));
	ASSERT(Model_ToVIM(425) == VIM:(425 - 399));
	ASSERT(Model_ToVIM(426) == VIM:(426 - 399));
	ASSERT(Model_ToVIM(427) == VIM:(427 - 399));
	ASSERT(Model_ToVIM(428) == VIM:(428 - 399));
	ASSERT(Model_ToVIM(429) == VIM:(429 - 399));
	ASSERT(Model_ToVIM(430) == VIM:(430 - 399));
	ASSERT(Model_ToVIM(431) == VIM:(431 - 399));
	ASSERT(Model_ToVIM(432) == VIM:(432 - 399));
	ASSERT(Model_ToVIM(433) == VIM:(433 - 399));
	ASSERT(Model_ToVIM(434) == VIM:(434 - 399));
	ASSERT(Model_ToVIM(435) == VIM:(435 - 399));
	ASSERT(Model_ToVIM(436) == VIM:(436 - 399));
	ASSERT(Model_ToVIM(437) == VIM:(437 - 399));
	ASSERT(Model_ToVIM(438) == VIM:(438 - 399));
	ASSERT(Model_ToVIM(439) == VIM:(439 - 399));
	ASSERT(Model_ToVIM(440) == VIM:(440 - 399));
	ASSERT(Model_ToVIM(441) == VIM:(441 - 399));
	ASSERT(Model_ToVIM(442) == VIM:(442 - 399));
	ASSERT(Model_ToVIM(443) == VIM:(443 - 399));
	ASSERT(Model_ToVIM(444) == VIM:(444 - 399));
	ASSERT(Model_ToVIM(445) == VIM:(445 - 399));
	ASSERT(Model_ToVIM(446) == VIM:(446 - 399));
	ASSERT(Model_ToVIM(447) == VIM:(447 - 399));
	ASSERT(Model_ToVIM(448) == VIM:(448 - 399));
	ASSERT(Model_ToVIM(449) == VIM:(449 - 399));
	ASSERT(Model_ToVIM(450) == VIM:(450 - 399));
	ASSERT(Model_ToVIM(451) == VIM:(451 - 399));
	ASSERT(Model_ToVIM(452) == VIM:(452 - 399));
	ASSERT(Model_ToVIM(453) == VIM:(453 - 399));
	ASSERT(Model_ToVIM(454) == VIM:(454 - 399));
	ASSERT(Model_ToVIM(455) == VIM:(455 - 399));
	ASSERT(Model_ToVIM(456) == VIM:(456 - 399));
	ASSERT(Model_ToVIM(457) == VIM:(457 - 399));
	ASSERT(Model_ToVIM(458) == VIM:(458 - 399));
	ASSERT(Model_ToVIM(459) == VIM:(459 - 399));
	ASSERT(Model_ToVIM(460) == VIM:(460 - 399));
	ASSERT(Model_ToVIM(461) == VIM:(461 - 399));
	ASSERT(Model_ToVIM(462) == VIM:(462 - 399));
	ASSERT(Model_ToVIM(463) == VIM:(463 - 399));
	ASSERT(Model_ToVIM(464) == VIM:(464 - 399));
	ASSERT(Model_ToVIM(465) == VIM:(465 - 399));
	ASSERT(Model_ToVIM(466) == VIM:(466 - 399));
	ASSERT(Model_ToVIM(467) == VIM:(467 - 399));
	ASSERT(Model_ToVIM(468) == VIM:(468 - 399));
	ASSERT(Model_ToVIM(469) == VIM:(469 - 399));
	ASSERT(Model_ToVIM(470) == VIM:(470 - 399));
	ASSERT(Model_ToVIM(471) == VIM:(471 - 399));
	ASSERT(Model_ToVIM(472) == VIM:(472 - 399));
	ASSERT(Model_ToVIM(473) == VIM:(473 - 399));
	ASSERT(Model_ToVIM(474) == VIM:(474 - 399));
	ASSERT(Model_ToVIM(475) == VIM:(475 - 399));
	ASSERT(Model_ToVIM(476) == VIM:(476 - 399));
	ASSERT(Model_ToVIM(477) == VIM:(477 - 399));
	ASSERT(Model_ToVIM(478) == VIM:(478 - 399));
	ASSERT(Model_ToVIM(479) == VIM:(479 - 399));
	ASSERT(Model_ToVIM(480) == VIM:(480 - 399));
	ASSERT(Model_ToVIM(481) == VIM:(481 - 399));
	ASSERT(Model_ToVIM(482) == VIM:(482 - 399));
	ASSERT(Model_ToVIM(483) == VIM:(483 - 399));
	ASSERT(Model_ToVIM(484) == VIM:(484 - 399));
	ASSERT(Model_ToVIM(485) == VIM:(485 - 399));
	ASSERT(Model_ToVIM(486) == VIM:(486 - 399));
	ASSERT(Model_ToVIM(487) == VIM:(487 - 399));
	ASSERT(Model_ToVIM(488) == VIM:(488 - 399));
	ASSERT(Model_ToVIM(489) == VIM:(489 - 399));
	ASSERT(Model_ToVIM(490) == VIM:(490 - 399));
	ASSERT(Model_ToVIM(491) == VIM:(491 - 399));
	ASSERT(Model_ToVIM(492) == VIM:(492 - 399));
	ASSERT(Model_ToVIM(493) == VIM:(493 - 399));
	ASSERT(Model_ToVIM(494) == VIM:(494 - 399));
	ASSERT(Model_ToVIM(495) == VIM:(495 - 399));
	ASSERT(Model_ToVIM(496) == VIM:(496 - 399));
	ASSERT(Model_ToVIM(497) == VIM:(497 - 399));
	ASSERT(Model_ToVIM(498) == VIM:(498 - 399));
	ASSERT(Model_ToVIM(499) == VIM:(499 - 399));
	ASSERT(Model_ToVIM(500) == VIM:(500 - 399));
	ASSERT(Model_ToVIM(501) == VIM:(501 - 399));
	ASSERT(Model_ToVIM(502) == VIM:(502 - 399));
	ASSERT(Model_ToVIM(503) == VIM:(503 - 399));
	ASSERT(Model_ToVIM(504) == VIM:(504 - 399));
	ASSERT(Model_ToVIM(505) == VIM:(505 - 399));
	ASSERT(Model_ToVIM(506) == VIM:(506 - 399));
	ASSERT(Model_ToVIM(507) == VIM:(507 - 399));
	ASSERT(Model_ToVIM(508) == VIM:(508 - 399));
	ASSERT(Model_ToVIM(509) == VIM:(509 - 399));
	ASSERT(Model_ToVIM(510) == VIM:(510 - 399));
	ASSERT(Model_ToVIM(511) == VIM:(511 - 399));
	ASSERT(Model_ToVIM(512) == VIM:(512 - 399));
	ASSERT(Model_ToVIM(513) == VIM:(513 - 399));
	ASSERT(Model_ToVIM(514) == VIM:(514 - 399));
	ASSERT(Model_ToVIM(515) == VIM:(515 - 399));
	ASSERT(Model_ToVIM(516) == VIM:(516 - 399));
	ASSERT(Model_ToVIM(517) == VIM:(517 - 399));
	ASSERT(Model_ToVIM(518) == VIM:(518 - 399));
	ASSERT(Model_ToVIM(519) == VIM:(519 - 399));
	ASSERT(Model_ToVIM(520) == VIM:(520 - 399));
	ASSERT(Model_ToVIM(521) == VIM:(521 - 399));
	ASSERT(Model_ToVIM(522) == VIM:(522 - 399));
	ASSERT(Model_ToVIM(523) == VIM:(523 - 399));
	ASSERT(Model_ToVIM(524) == VIM:(524 - 399));
	ASSERT(Model_ToVIM(525) == VIM:(525 - 399));
	ASSERT(Model_ToVIM(526) == VIM:(526 - 399));
	ASSERT(Model_ToVIM(527) == VIM:(527 - 399));
	ASSERT(Model_ToVIM(528) == VIM:(528 - 399));
	ASSERT(Model_ToVIM(529) == VIM:(529 - 399));
	ASSERT(Model_ToVIM(530) == VIM:(530 - 399));
	ASSERT(Model_ToVIM(531) == VIM:(531 - 399));
	ASSERT(Model_ToVIM(532) == VIM:(532 - 399));
	ASSERT(Model_ToVIM(533) == VIM:(533 - 399));
	ASSERT(Model_ToVIM(534) == VIM:(534 - 399));
	ASSERT(Model_ToVIM(535) == VIM:(535 - 399));
	ASSERT(Model_ToVIM(536) == VIM:(536 - 399));
	ASSERT(Model_ToVIM(537) == VIM:(537 - 399));
	ASSERT(Model_ToVIM(538) == VIM:(538 - 399));
	ASSERT(Model_ToVIM(539) == VIM:(539 - 399));
	ASSERT(Model_ToVIM(540) == VIM:(540 - 399));
	ASSERT(Model_ToVIM(541) == VIM:(541 - 399));
	ASSERT(Model_ToVIM(542) == VIM:(542 - 399));
	ASSERT(Model_ToVIM(543) == VIM:(543 - 399));
	ASSERT(Model_ToVIM(544) == VIM:(544 - 399));
	ASSERT(Model_ToVIM(545) == VIM:(545 - 399));
	ASSERT(Model_ToVIM(546) == VIM:(546 - 399));
	ASSERT(Model_ToVIM(547) == VIM:(547 - 399));
	ASSERT(Model_ToVIM(548) == VIM:(548 - 399));
	ASSERT(Model_ToVIM(549) == VIM:(549 - 399));
	ASSERT(Model_ToVIM(550) == VIM:(550 - 399));
	ASSERT(Model_ToVIM(551) == VIM:(551 - 399));
	ASSERT(Model_ToVIM(552) == VIM:(552 - 399));
	ASSERT(Model_ToVIM(553) == VIM:(553 - 399));
	ASSERT(Model_ToVIM(554) == VIM:(554 - 399));
	ASSERT(Model_ToVIM(555) == VIM:(555 - 399));
	ASSERT(Model_ToVIM(556) == VIM:(556 - 399));
	ASSERT(Model_ToVIM(557) == VIM:(557 - 399));
	ASSERT(Model_ToVIM(558) == VIM:(558 - 399));
	ASSERT(Model_ToVIM(559) == VIM:(559 - 399));
	ASSERT(Model_ToVIM(560) == VIM:(560 - 399));
	ASSERT(Model_ToVIM(561) == VIM:(561 - 399));
	ASSERT(Model_ToVIM(562) == VIM:(562 - 399));
	ASSERT(Model_ToVIM(563) == VIM:(563 - 399));
	ASSERT(Model_ToVIM(564) == VIM:(564 - 399));
	ASSERT(Model_ToVIM(565) == VIM:(565 - 399));
	ASSERT(Model_ToVIM(566) == VIM:(566 - 399));
	ASSERT(Model_ToVIM(567) == VIM:(567 - 399));
	ASSERT(Model_ToVIM(568) == VIM:(568 - 399));
	ASSERT(Model_ToVIM(569) == VIM:(569 - 399));
	ASSERT(Model_ToVIM(570) == VIM:(570 - 399));
	ASSERT(Model_ToVIM(571) == VIM:(571 - 399));
	ASSERT(Model_ToVIM(572) == VIM:(572 - 399));
	ASSERT(Model_ToVIM(573) == VIM:(573 - 399));
	ASSERT(Model_ToVIM(574) == VIM:(574 - 399));
	ASSERT(Model_ToVIM(575) == VIM:(575 - 399));
	ASSERT(Model_ToVIM(576) == VIM:(576 - 399));
	ASSERT(Model_ToVIM(577) == VIM:(577 - 399));
	ASSERT(Model_ToVIM(578) == VIM:(578 - 399));
	ASSERT(Model_ToVIM(579) == VIM:(579 - 399));
	ASSERT(Model_ToVIM(580) == VIM:(580 - 399));
	ASSERT(Model_ToVIM(581) == VIM:(581 - 399));
	ASSERT(Model_ToVIM(582) == VIM:(582 - 399));
	ASSERT(Model_ToVIM(583) == VIM:(583 - 399));
	ASSERT(Model_ToVIM(584) == VIM:(584 - 399));
	ASSERT(Model_ToVIM(585) == VIM:(585 - 399));
	ASSERT(Model_ToVIM(586) == VIM:(586 - 399));
	ASSERT(Model_ToVIM(587) == VIM:(587 - 399));
	ASSERT(Model_ToVIM(588) == VIM:(588 - 399));
	ASSERT(Model_ToVIM(589) == VIM:(589 - 399));
	ASSERT(Model_ToVIM(590) == VIM:(590 - 399));
	ASSERT(Model_ToVIM(591) == VIM:(591 - 399));
	ASSERT(Model_ToVIM(592) == VIM:(592 - 399));
	ASSERT(Model_ToVIM(593) == VIM:(593 - 399));
	ASSERT(Model_ToVIM(594) == VIM:(594 - 399));
	ASSERT(Model_ToVIM(595) == VIM:(595 - 399));
	ASSERT(Model_ToVIM(596) == VIM:(596 - 399));
	ASSERT(Model_ToVIM(597) == VIM:(597 - 399));
	ASSERT(Model_ToVIM(598) == VIM:(598 - 399));
	ASSERT(Model_ToVIM(599) == VIM:(599 - 399));
	ASSERT(Model_ToVIM(600) == VIM:(600 - 399));
	ASSERT(Model_ToVIM(601) == VIM:(601 - 399));
	ASSERT(Model_ToVIM(602) == VIM:(602 - 399));
	ASSERT(Model_ToVIM(603) == VIM:(603 - 399));
	ASSERT(Model_ToVIM(604) == VIM:(604 - 399));
	ASSERT(Model_ToVIM(605) == VIM:(605 - 399));
	ASSERT(Model_ToVIM(606) == VIM:(606 - 399));
	ASSERT(Model_ToVIM(607) == VIM:(607 - 399));
	ASSERT(Model_ToVIM(608) == VIM:(608 - 399));
	ASSERT(Model_ToVIM(609) == VIM:(609 - 399));
	ASSERT(Model_ToVIM(610) == VIM:(610 - 399));
	ASSERT(Model_ToVIM(611) == VIM:(611 - 399));
	ASSERT(Model_ToVIM(612) == VIM:(612 - 399));
	ASSERT(Model_ToVIM(613) == VIM:(612 - 399));
	ASSERT(Model_ToVIM(614) == VIM:(612 - 399));
	ASSERT(Model_ToVIM(1000) == VIM:(612 - 399));
	ASSERT(Model_ToVIM(654684) == VIM:(612 - 399));
}

Test:VIM_IsValid()
{
	ASSERT(!Model_IsValid(-12));
	ASSERT(!Model_IsValid(0));
	ASSERT(!Model_IsValid(100));
	ASSERT(!Model_IsValid(397));
	ASSERT(!Model_IsValid(398));
	ASSERT(!Model_IsValid(399));
	ASSERT(Model_IsValid(400));
	ASSERT(Model_IsValid(401));
	ASSERT(Model_IsValid(402));
	ASSERT(Model_IsValid(403));
	ASSERT(Model_IsValid(404));
	ASSERT(Model_IsValid(405));
	ASSERT(Model_IsValid(406));
	ASSERT(Model_IsValid(407));
	ASSERT(Model_IsValid(408));
	ASSERT(Model_IsValid(409));
	ASSERT(Model_IsValid(410));
	ASSERT(Model_IsValid(411));
	ASSERT(Model_IsValid(412));
	ASSERT(Model_IsValid(413));
	ASSERT(Model_IsValid(414));
	ASSERT(Model_IsValid(415));
	ASSERT(Model_IsValid(416));
	ASSERT(Model_IsValid(417));
	ASSERT(Model_IsValid(418));
	ASSERT(Model_IsValid(419));
	ASSERT(Model_IsValid(420));
	ASSERT(Model_IsValid(421));
	ASSERT(Model_IsValid(422));
	ASSERT(Model_IsValid(423));
	ASSERT(Model_IsValid(424));
	ASSERT(Model_IsValid(425));
	ASSERT(Model_IsValid(426));
	ASSERT(Model_IsValid(427));
	ASSERT(Model_IsValid(428));
	ASSERT(Model_IsValid(429));
	ASSERT(Model_IsValid(430));
	ASSERT(Model_IsValid(431));
	ASSERT(Model_IsValid(432));
	ASSERT(Model_IsValid(433));
	ASSERT(Model_IsValid(434));
	ASSERT(Model_IsValid(435));
	ASSERT(Model_IsValid(436));
	ASSERT(Model_IsValid(437));
	ASSERT(Model_IsValid(438));
	ASSERT(Model_IsValid(439));
	ASSERT(Model_IsValid(440));
	ASSERT(Model_IsValid(441));
	ASSERT(Model_IsValid(442));
	ASSERT(Model_IsValid(443));
	ASSERT(Model_IsValid(444));
	ASSERT(Model_IsValid(445));
	ASSERT(Model_IsValid(446));
	ASSERT(Model_IsValid(447));
	ASSERT(Model_IsValid(448));
	ASSERT(Model_IsValid(449));
	ASSERT(Model_IsValid(450));
	ASSERT(Model_IsValid(451));
	ASSERT(Model_IsValid(452));
	ASSERT(Model_IsValid(453));
	ASSERT(Model_IsValid(454));
	ASSERT(Model_IsValid(455));
	ASSERT(Model_IsValid(456));
	ASSERT(Model_IsValid(457));
	ASSERT(Model_IsValid(458));
	ASSERT(Model_IsValid(459));
	ASSERT(Model_IsValid(460));
	ASSERT(Model_IsValid(461));
	ASSERT(Model_IsValid(462));
	ASSERT(Model_IsValid(463));
	ASSERT(Model_IsValid(464));
	ASSERT(Model_IsValid(465));
	ASSERT(Model_IsValid(466));
	ASSERT(Model_IsValid(467));
	ASSERT(Model_IsValid(468));
	ASSERT(Model_IsValid(469));
	ASSERT(Model_IsValid(470));
	ASSERT(Model_IsValid(471));
	ASSERT(Model_IsValid(472));
	ASSERT(Model_IsValid(473));
	ASSERT(Model_IsValid(474));
	ASSERT(Model_IsValid(475));
	ASSERT(Model_IsValid(476));
	ASSERT(Model_IsValid(477));
	ASSERT(Model_IsValid(478));
	ASSERT(Model_IsValid(479));
	ASSERT(Model_IsValid(480));
	ASSERT(Model_IsValid(481));
	ASSERT(Model_IsValid(482));
	ASSERT(Model_IsValid(483));
	ASSERT(Model_IsValid(484));
	ASSERT(Model_IsValid(485));
	ASSERT(Model_IsValid(486));
	ASSERT(Model_IsValid(487));
	ASSERT(Model_IsValid(488));
	ASSERT(Model_IsValid(489));
	ASSERT(Model_IsValid(490));
	ASSERT(Model_IsValid(491));
	ASSERT(Model_IsValid(492));
	ASSERT(Model_IsValid(493));
	ASSERT(Model_IsValid(494));
	ASSERT(Model_IsValid(495));
	ASSERT(Model_IsValid(496));
	ASSERT(Model_IsValid(497));
	ASSERT(Model_IsValid(498));
	ASSERT(Model_IsValid(499));
	ASSERT(Model_IsValid(500));
	ASSERT(Model_IsValid(501));
	ASSERT(Model_IsValid(502));
	ASSERT(Model_IsValid(503));
	ASSERT(Model_IsValid(504));
	ASSERT(Model_IsValid(505));
	ASSERT(Model_IsValid(506));
	ASSERT(Model_IsValid(507));
	ASSERT(Model_IsValid(508));
	ASSERT(Model_IsValid(509));
	ASSERT(Model_IsValid(510));
	ASSERT(Model_IsValid(511));
	ASSERT(Model_IsValid(512));
	ASSERT(Model_IsValid(513));
	ASSERT(Model_IsValid(514));
	ASSERT(Model_IsValid(515));
	ASSERT(Model_IsValid(516));
	ASSERT(Model_IsValid(517));
	ASSERT(Model_IsValid(518));
	ASSERT(Model_IsValid(519));
	ASSERT(Model_IsValid(520));
	ASSERT(Model_IsValid(521));
	ASSERT(Model_IsValid(522));
	ASSERT(Model_IsValid(523));
	ASSERT(Model_IsValid(524));
	ASSERT(Model_IsValid(525));
	ASSERT(Model_IsValid(526));
	ASSERT(Model_IsValid(527));
	ASSERT(Model_IsValid(528));
	ASSERT(Model_IsValid(529));
	ASSERT(Model_IsValid(530));
	ASSERT(Model_IsValid(531));
	ASSERT(Model_IsValid(532));
	ASSERT(Model_IsValid(533));
	ASSERT(Model_IsValid(534));
	ASSERT(Model_IsValid(535));
	ASSERT(Model_IsValid(536));
	ASSERT(Model_IsValid(537));
	ASSERT(Model_IsValid(538));
	ASSERT(Model_IsValid(539));
	ASSERT(Model_IsValid(540));
	ASSERT(Model_IsValid(541));
	ASSERT(Model_IsValid(542));
	ASSERT(Model_IsValid(543));
	ASSERT(Model_IsValid(544));
	ASSERT(Model_IsValid(545));
	ASSERT(Model_IsValid(546));
	ASSERT(Model_IsValid(547));
	ASSERT(Model_IsValid(548));
	ASSERT(Model_IsValid(549));
	ASSERT(Model_IsValid(550));
	ASSERT(Model_IsValid(551));
	ASSERT(Model_IsValid(552));
	ASSERT(Model_IsValid(553));
	ASSERT(Model_IsValid(554));
	ASSERT(Model_IsValid(555));
	ASSERT(Model_IsValid(556));
	ASSERT(Model_IsValid(557));
	ASSERT(Model_IsValid(558));
	ASSERT(Model_IsValid(559));
	ASSERT(Model_IsValid(560));
	ASSERT(Model_IsValid(561));
	ASSERT(Model_IsValid(562));
	ASSERT(Model_IsValid(563));
	ASSERT(Model_IsValid(564));
	ASSERT(Model_IsValid(565));
	ASSERT(Model_IsValid(566));
	ASSERT(Model_IsValid(567));
	ASSERT(Model_IsValid(568));
	ASSERT(Model_IsValid(569));
	ASSERT(Model_IsValid(570));
	ASSERT(Model_IsValid(571));
	ASSERT(Model_IsValid(572));
	ASSERT(Model_IsValid(573));
	ASSERT(Model_IsValid(574));
	ASSERT(Model_IsValid(575));
	ASSERT(Model_IsValid(576));
	ASSERT(Model_IsValid(577));
	ASSERT(Model_IsValid(578));
	ASSERT(Model_IsValid(579));
	ASSERT(Model_IsValid(580));
	ASSERT(Model_IsValid(581));
	ASSERT(Model_IsValid(582));
	ASSERT(Model_IsValid(583));
	ASSERT(Model_IsValid(584));
	ASSERT(Model_IsValid(585));
	ASSERT(Model_IsValid(586));
	ASSERT(Model_IsValid(587));
	ASSERT(Model_IsValid(588));
	ASSERT(Model_IsValid(589));
	ASSERT(Model_IsValid(590));
	ASSERT(Model_IsValid(591));
	ASSERT(Model_IsValid(592));
	ASSERT(Model_IsValid(593));
	ASSERT(Model_IsValid(594));
	ASSERT(Model_IsValid(595));
	ASSERT(Model_IsValid(596));
	ASSERT(Model_IsValid(597));
	ASSERT(Model_IsValid(598));
	ASSERT(Model_IsValid(599));
	ASSERT(Model_IsValid(600));
	ASSERT(Model_IsValid(601));
	ASSERT(Model_IsValid(602));
	ASSERT(Model_IsValid(603));
	ASSERT(Model_IsValid(604));
	ASSERT(Model_IsValid(605));
	ASSERT(Model_IsValid(606));
	ASSERT(Model_IsValid(607));
	ASSERT(Model_IsValid(608));
	ASSERT(Model_IsValid(609));
	ASSERT(Model_IsValid(610));
	ASSERT(Model_IsValid(611));
	ASSERT(!Model_IsValid(612));
	ASSERT(!Model_IsValid(613));
	ASSERT(!Model_IsValid(614));
	ASSERT(!Model_IsValid(1000));
	ASSERT(!Model_IsValid(654684));
}

Test:VIM_NamesRange()
{
	ASSERT(VIM_LocalEmpty(Model_Name(-8)));
	ASSERT(VIM_LocalEmpty(Model_Name(10)));
	ASSERT(VIM_LocalEmpty(Model_Name(397)));
	ASSERT(VIM_LocalEmpty(Model_Name(398)));
	ASSERT(VIM_LocalEmpty(Model_Name(399)));
	ASSERT(strcmp(Model_Name(400), "Landstalker") == 0);
	ASSERT(strcmp(Model_Name(401), "Bravura") == 0);
	ASSERT(strcmp(Model_Name(402), "Buffalo") == 0);
	ASSERT(strcmp(Model_Name(403), "Linerunner") == 0);
	ASSERT(strcmp(Model_Name(404), "Perenniel") == 0);
	ASSERT(strcmp(Model_Name(405), "Sentinel") == 0);
	ASSERT(strcmp(Model_Name(406), "Dumper") == 0);
	ASSERT(strcmp(Model_Name(407), "Firetruck") == 0);
	ASSERT(strcmp(Model_Name(408), "Trashmaster") == 0);
	ASSERT(strcmp(Model_Name(409), "Stretch") == 0);
	ASSERT(strcmp(Model_Name(410), "Manana") == 0);
	ASSERT(strcmp(Model_Name(411), "Infernus") == 0);
	ASSERT(strcmp(Model_Name(412), "Voodoo") == 0);
	ASSERT(strcmp(Model_Name(413), "Pony") == 0);
	ASSERT(strcmp(Model_Name(414), "Mule") == 0);
	ASSERT(strcmp(Model_Name(415), "Cheetah") == 0);
	ASSERT(strcmp(Model_Name(416), "Ambulance") == 0);
	ASSERT(strcmp(Model_Name(417), "Leviathan") == 0);
	ASSERT(strcmp(Model_Name(418), "Moonbeam") == 0);
	ASSERT(strcmp(Model_Name(419), "Esperanto") == 0);
	ASSERT(strcmp(Model_Name(420), "Taxi") == 0);
	ASSERT(strcmp(Model_Name(421), "Washington") == 0);
	ASSERT(strcmp(Model_Name(422), "Bobcat") == 0);
	ASSERT(strcmp(Model_Name(423), "Mr Whoopee") == 0);
	ASSERT(strcmp(Model_Name(424), "BF Injection") == 0);
	ASSERT(strcmp(Model_Name(425), "Hunter") == 0);
	ASSERT(strcmp(Model_Name(426), "Premier") == 0);
	ASSERT(strcmp(Model_Name(427), "Enforcer") == 0);
	ASSERT(strcmp(Model_Name(428), "Securicar") == 0);
	ASSERT(strcmp(Model_Name(429), "Banshee") == 0);
	ASSERT(strcmp(Model_Name(430), "Predator") == 0);
	ASSERT(strcmp(Model_Name(431), "Bus") == 0);
	ASSERT(strcmp(Model_Name(432), "Rhino") == 0);
	ASSERT(strcmp(Model_Name(433), "Barracks") == 0);
	ASSERT(strcmp(Model_Name(434), "Hotknife") == 0);
	ASSERT(strcmp(Model_Name(435), "Article Trailer") == 0);
	ASSERT(strcmp(Model_Name(436), "Previon") == 0);
	ASSERT(strcmp(Model_Name(437), "Coach") == 0);
	ASSERT(strcmp(Model_Name(438), "Cabbie") == 0);
	ASSERT(strcmp(Model_Name(439), "Stallion") == 0);
	ASSERT(strcmp(Model_Name(440), "Rumpo") == 0);
	ASSERT(strcmp(Model_Name(441), "RC Bandit") == 0);
	ASSERT(strcmp(Model_Name(442), "Romero") == 0);
	ASSERT(strcmp(Model_Name(443), "Packer") == 0);
	ASSERT(strcmp(Model_Name(444), "Monster") == 0);
	ASSERT(strcmp(Model_Name(445), "Admiral") == 0);
	ASSERT(strcmp(Model_Name(446), "Squallo") == 0);
	ASSERT(strcmp(Model_Name(447), "Seasparrow") == 0);
	ASSERT(strcmp(Model_Name(448), "Pizzaboy") == 0);
	ASSERT(strcmp(Model_Name(449), "Tram") == 0);
	ASSERT(strcmp(Model_Name(450), "Article Trailer 2") == 0);
	ASSERT(strcmp(Model_Name(451), "Turismo") == 0);
	ASSERT(strcmp(Model_Name(452), "Speeder") == 0);
	ASSERT(strcmp(Model_Name(453), "Reefer") == 0);
	ASSERT(strcmp(Model_Name(454), "Tropic") == 0);
	ASSERT(strcmp(Model_Name(455), "Flatbed") == 0);
	ASSERT(strcmp(Model_Name(456), "Yankee") == 0);
	ASSERT(strcmp(Model_Name(457), "Caddy") == 0);
	ASSERT(strcmp(Model_Name(458), "Solair") == 0);
	ASSERT(strcmp(Model_Name(459), "Topfun Van", false, 10) == 0);
	ASSERT(strcmp(Model_Name(460), "Skimmer") == 0);
	ASSERT(strcmp(Model_Name(461), "PCJ-600") == 0);
	ASSERT(strcmp(Model_Name(462), "Faggio") == 0);
	ASSERT(strcmp(Model_Name(463), "Freeway") == 0);
	ASSERT(strcmp(Model_Name(464), "RC Baron") == 0);
	ASSERT(strcmp(Model_Name(465), "RC Raider") == 0);
	ASSERT(strcmp(Model_Name(466), "Glendale") == 0);
	ASSERT(strcmp(Model_Name(467), "Oceanic") == 0);
	ASSERT(strcmp(Model_Name(468), "Sanchez") == 0);
	ASSERT(strcmp(Model_Name(469), "Sparrow") == 0);
	ASSERT(strcmp(Model_Name(470), "Patriot") == 0);
	ASSERT(strcmp(Model_Name(471), "Quad") == 0);
	ASSERT(strcmp(Model_Name(472), "Coastguard") == 0);
	ASSERT(strcmp(Model_Name(473), "Dinghy") == 0);
	ASSERT(strcmp(Model_Name(474), "Hermes") == 0);
	ASSERT(strcmp(Model_Name(475), "Sabre") == 0);
	ASSERT(strcmp(Model_Name(476), "Rustler") == 0);
	ASSERT(strcmp(Model_Name(477), "ZR-350") == 0);
	ASSERT(strcmp(Model_Name(478), "Walton") == 0);
	ASSERT(strcmp(Model_Name(479), "Regina") == 0);
	ASSERT(strcmp(Model_Name(480), "Comet") == 0);
	ASSERT(strcmp(Model_Name(481), "BMX") == 0);
	ASSERT(strcmp(Model_Name(482), "Burrito") == 0);
	ASSERT(strcmp(Model_Name(483), "Camper") == 0);
	ASSERT(strcmp(Model_Name(484), "Marquis") == 0);
	ASSERT(strcmp(Model_Name(485), "Baggage") == 0);
	ASSERT(strcmp(Model_Name(486), "Dozer") == 0);
	ASSERT(strcmp(Model_Name(487), "Maverick") == 0);
	ASSERT(strcmp(Model_Name(488), "SAN News Maverick") == 0);
	ASSERT(strcmp(Model_Name(489), "Rancher") == 0);
	ASSERT(strcmp(Model_Name(490), "FBI Rancher") == 0);
	ASSERT(strcmp(Model_Name(491), "Virgo") == 0);
	ASSERT(strcmp(Model_Name(492), "Greenwood") == 0);
	ASSERT(strcmp(Model_Name(493), "Jetmax") == 0);
	ASSERT(strcmp(Model_Name(494), "Hotring Racer") == 0);
	ASSERT(strcmp(Model_Name(495), "Sandking") == 0);
	ASSERT(strcmp(Model_Name(496), "Blista Compact") == 0);
	ASSERT(strcmp(Model_Name(497), "Police Maverick") == 0);
	ASSERT(strcmp(Model_Name(498), "Boxville") == 0);
	ASSERT(strcmp(Model_Name(499), "Benson") == 0);
	ASSERT(strcmp(Model_Name(500), "Mesa") == 0);
	ASSERT(strcmp(Model_Name(501), "RC Goblin") == 0);
	ASSERT(strcmp(Model_Name(502), "Hotring Racer") == 0);
	ASSERT(strcmp(Model_Name(503), "Hotring Racer") == 0);
	ASSERT(strcmp(Model_Name(504), "Bloodring Banger") == 0);
	ASSERT(strcmp(Model_Name(505), "Rancher") == 0);
	ASSERT(strcmp(Model_Name(506), "Super GT") == 0);
	ASSERT(strcmp(Model_Name(507), "Elegant") == 0);
	ASSERT(strcmp(Model_Name(508), "Journey") == 0);
	ASSERT(strcmp(Model_Name(509), "Bike") == 0);
	ASSERT(strcmp(Model_Name(510), "Mountain Bike") == 0);
	ASSERT(strcmp(Model_Name(511), "Beagle") == 0);
	ASSERT(strcmp(Model_Name(512), "Cropduster") == 0);
	ASSERT(strcmp(Model_Name(513), "Stuntplane") == 0);
	ASSERT(strcmp(Model_Name(514), "Tanker") == 0);
	ASSERT(strcmp(Model_Name(515), "Roadtrain") == 0);
	ASSERT(strcmp(Model_Name(516), "Nebula") == 0);
	ASSERT(strcmp(Model_Name(517), "Majestic") == 0);
	ASSERT(strcmp(Model_Name(518), "Buccaneer") == 0);
	ASSERT(strcmp(Model_Name(519), "Shamal") == 0);
	ASSERT(strcmp(Model_Name(520), "Hydra") == 0);
	ASSERT(strcmp(Model_Name(521), "FCR-900") == 0);
	ASSERT(strcmp(Model_Name(522), "NRG-500") == 0);
	ASSERT(strcmp(Model_Name(523), "HPV1000") == 0);
	ASSERT(strcmp(Model_Name(524), "Cement Truck") == 0);
	ASSERT(strcmp(Model_Name(525), "Towtruck") == 0);
	ASSERT(strcmp(Model_Name(526), "Fortune") == 0);
	ASSERT(strcmp(Model_Name(527), "Cadrona") == 0);
	ASSERT(strcmp(Model_Name(528), "FBI Truck") == 0);
	ASSERT(strcmp(Model_Name(529), "Willard") == 0);
	ASSERT(strcmp(Model_Name(530), "Forklift") == 0);
	ASSERT(strcmp(Model_Name(531), "Tractor") == 0);
	ASSERT(strcmp(Model_Name(532), "Combine Harvester") == 0);
	ASSERT(strcmp(Model_Name(533), "Feltzer") == 0);
	ASSERT(strcmp(Model_Name(534), "Remington") == 0);
	ASSERT(strcmp(Model_Name(535), "Slamvan") == 0);
	ASSERT(strcmp(Model_Name(536), "Blade") == 0);
	ASSERT(strcmp(Model_Name(537), "Freight", false, 7) == 0);
	ASSERT(strcmp(Model_Name(538), "Brownstreak", false, 11) == 0);
	ASSERT(strcmp(Model_Name(539), "Vortex") == 0);
	ASSERT(strcmp(Model_Name(540), "Vincent") == 0);
	ASSERT(strcmp(Model_Name(541), "Bullet") == 0);
	ASSERT(strcmp(Model_Name(542), "Clover") == 0);
	ASSERT(strcmp(Model_Name(543), "Sadler") == 0);
	ASSERT(strcmp(Model_Name(544), "Firetruck LA") == 0);
	ASSERT(strcmp(Model_Name(545), "Hustler") == 0);
	ASSERT(strcmp(Model_Name(546), "Intruder") == 0);
	ASSERT(strcmp(Model_Name(547), "Primo") == 0);
	ASSERT(strcmp(Model_Name(548), "Cargobob") == 0);
	ASSERT(strcmp(Model_Name(549), "Tampa") == 0);
	ASSERT(strcmp(Model_Name(550), "Sunrise") == 0);
	ASSERT(strcmp(Model_Name(551), "Merit") == 0);
	ASSERT(strcmp(Model_Name(552), "Utility Van") == 0);
	ASSERT(strcmp(Model_Name(553), "Nevada") == 0);
	ASSERT(strcmp(Model_Name(554), "Yosemite") == 0);
	ASSERT(strcmp(Model_Name(555), "Windsor") == 0);
	ASSERT(strcmp(Model_Name(556), "Monster", false, 7) == 0);
	ASSERT(strcmp(Model_Name(557), "Monster", false, 7) == 0);
	ASSERT(strcmp(Model_Name(558), "Uranus") == 0);
	ASSERT(strcmp(Model_Name(559), "Jester") == 0);
	ASSERT(strcmp(Model_Name(560), "Sultan") == 0);
	ASSERT(strcmp(Model_Name(561), "Stratum") == 0);
	ASSERT(strcmp(Model_Name(562), "Elegy") == 0);
	ASSERT(strcmp(Model_Name(563), "Raindance") == 0);
	ASSERT(strcmp(Model_Name(564), "RC Tiger") == 0);
	ASSERT(strcmp(Model_Name(565), "Flash") == 0);
	ASSERT(strcmp(Model_Name(566), "Tahoma") == 0);
	ASSERT(strcmp(Model_Name(567), "Savanna") == 0);
	ASSERT(strcmp(Model_Name(568), "Bandito") == 0);
	ASSERT(strcmp(Model_Name(569), "Freight Flat Trailer", false, 20) == 0);
	ASSERT(strcmp(Model_Name(570), "Streak Trailer", false, 14) == 0);
	ASSERT(strcmp(Model_Name(571), "Kart") == 0);
	ASSERT(strcmp(Model_Name(572), "Mower") == 0);
	ASSERT(strcmp(Model_Name(573), "Dune") == 0);
	ASSERT(strcmp(Model_Name(574), "Sweeper") == 0);
	ASSERT(strcmp(Model_Name(575), "Broadway") == 0);
	ASSERT(strcmp(Model_Name(576), "Tornado") == 0);
	ASSERT(strcmp(Model_Name(577), "AT400") == 0);
	ASSERT(strcmp(Model_Name(578), "DFT-30") == 0);
	ASSERT(strcmp(Model_Name(579), "Huntley") == 0);
	ASSERT(strcmp(Model_Name(580), "Stafford") == 0);
	ASSERT(strcmp(Model_Name(581), "BF-400") == 0);
	ASSERT(strcmp(Model_Name(582), "Newsvan") == 0);
	ASSERT(strcmp(Model_Name(583), "Tug") == 0);
	ASSERT(strcmp(Model_Name(584), "Petrol Trailer") == 0);
	ASSERT(strcmp(Model_Name(585), "Emperor") == 0);
	ASSERT(strcmp(Model_Name(586), "Wayfarer") == 0);
	ASSERT(strcmp(Model_Name(587), "Euros") == 0);
	ASSERT(strcmp(Model_Name(588), "Hotdog") == 0);
	ASSERT(strcmp(Model_Name(589), "Club") == 0);
	ASSERT(strcmp(Model_Name(590), "Freight Box Trailer", false, 19) == 0);
	ASSERT(strcmp(Model_Name(591), "Article Trailer 3") == 0);
	ASSERT(strcmp(Model_Name(592), "Andromada") == 0);
	ASSERT(strcmp(Model_Name(593), "Dodo") == 0);
	ASSERT(strcmp(Model_Name(594), "RC Cam") == 0);
	ASSERT(strcmp(Model_Name(595), "Launch") == 0);
	ASSERT(strcmp(Model_Name(596), "Police Car", false, 10) == 0);
	ASSERT(strcmp(Model_Name(597), "Police Car", false, 10) == 0);
	ASSERT(strcmp(Model_Name(598), "Police Car", false, 10) == 0);
	ASSERT(strcmp(Model_Name(599), "Police Ranger") == 0);
	ASSERT(strcmp(Model_Name(600), "Picador") == 0);
	ASSERT(strcmp(Model_Name(601), "S.W.A.T.") == 0);
	ASSERT(strcmp(Model_Name(602), "Alpha") == 0);
	ASSERT(strcmp(Model_Name(603), "Phoenix") == 0);
	ASSERT(strcmp(Model_Name(604), "Glendale Shit") == 0);
	ASSERT(strcmp(Model_Name(605), "Sadler Shit") == 0);
	ASSERT(strcmp(Model_Name(606), "Baggage Trailer", false, 15) == 0);
	ASSERT(strcmp(Model_Name(607), "Baggage Trailer", false, 15) == 0);
	ASSERT(strcmp(Model_Name(608), "Tug Stairs Trailer") == 0);
	ASSERT(strcmp(Model_Name(609), "Boxville") == 0);
	ASSERT(strcmp(Model_Name(610), "Farm Trailer") == 0);
	ASSERT(strcmp(Model_Name(611), "Utility Trailer") == 0);
	ASSERT(VIM_LocalEmpty(Model_Name(612)));
	ASSERT(VIM_LocalEmpty(Model_Name(613)));
	ASSERT(VIM_LocalEmpty(Model_Name(614)));
	ASSERT(VIM_LocalEmpty(Model_Name(1000)));
	ASSERT(VIM_LocalEmpty(Model_Name(987654)));
}

