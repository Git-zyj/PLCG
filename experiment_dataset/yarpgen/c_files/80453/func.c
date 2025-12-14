/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80453
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((long long int) ((short) (!(((/* implicit */_Bool) 8241306205219162994LL))))));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 3917951384U)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388607)) ? (((/* implicit */int) (short)-22503)) : (((/* implicit */int) (short)-22506))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) - (8762477050368649716ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)109))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (unsigned short)63405)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22505)) ? (1172433520) : (((/* implicit */int) (unsigned char)139))))))) ? (((/* implicit */int) (short)-20209)) : (((((/* implicit */_Bool) (short)-22503)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)0))))));
                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)7168))) ? ((+(10641677227006843646ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7805066846702707961ULL)))))))))));
            }
        } 
    } 
    var_14 = ((unsigned short) var_10);
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((unsigned char) 1827019466U))))));
        var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-22501))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)22502)))))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13332))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | ((~(3157995987402538848ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 528482304)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)1))) % (4294967277U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34671)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (unsigned char)63))))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (unsigned char)117)))));
                var_19 = ((unsigned short) ((((/* implicit */_Bool) 10641677227006843647ULL)) ? (528482277) : (((/* implicit */int) (short)1))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22521)) ? (824254162) : (((/* implicit */int) (short)22520))));
                arr_14 [0LL] [0LL] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (short)22473)))));
            }
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            arr_24 [i_3] [i_3] [i_5] &= ((/* implicit */_Bool) 1194473527U);
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)2)) ? (10641677227006843646ULL) : (((unsigned long long int) (_Bool)1))));
                            var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5294354655968786120LL)) ? (5294354655968786120LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((int) 65535LL))) : (((((/* implicit */_Bool) (short)-16)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3744)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 9367658784851474724ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4294967294U)));
                            var_24 = (-(10641677227006843667ULL));
                        }
                        for (signed char i_8 = 3; i_8 < 11; i_8 += 4) 
                        {
                            arr_28 [i_2] [i_3] [i_2] [i_6] [i_2] |= ((/* implicit */unsigned char) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (short)3744))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-1))) ? (((((/* implicit */_Bool) (unsigned short)59104)) ? (65532LL) : (((/* implicit */long long int) -1760136348)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4928004737391837840LL)) || (((/* implicit */_Bool) 17102247515161114924ULL))))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 9; i_9 += 3) 
                        {
                            arr_31 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 10641677227006843667ULL)))))));
                            var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8392352463667348927LL)) ? (((/* implicit */long long int) 133693440)) : (-7870220449086578540LL)))) ? (((/* implicit */unsigned long long int) ((int) 7805066846702707969ULL))) : (((((/* implicit */_Bool) 33554432)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16)))))));
                        }
                        var_28 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32768)) : (261209730)))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 2; i_11 < 10; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (((_Bool)1) ? (((/* implicit */int) (short)-22521)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7926152126211281965ULL)) ? (((((/* implicit */_Bool) 7926152126211281949ULL)) ? (((/* implicit */int) (signed char)17)) : (167427073))) : ((+(((/* implicit */int) (unsigned short)31633))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */int) (_Bool)1)) : (611890368)))) ? ((~(12292547643520997753ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44142))))))))));
                arr_38 [i_10] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13555339042219025285ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54517))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1364401984)) && (((/* implicit */_Bool) (unsigned short)65524)))))) : (((long long int) (signed char)93))))) : ((~(16077181727095032046ULL)))));
            }
            for (short i_13 = 3; i_13 < 10; i_13 += 3) 
            {
                arr_41 [i_13] [i_10] [i_10] = (+(5348156406997940857ULL));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 1760136348)) ? (((2860840972728723326ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1234946201813541305LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16636594797830348551ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1550431803888453260ULL)))) ? (((((/* implicit */_Bool) -713425608)) ? (((/* implicit */unsigned long long int) 736693487U)) : (3227682417080722432ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52611)) / (536167901))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    arr_44 [i_14] [(unsigned short)12] [i_10] [i_10] [i_11 + 4] [i_10] = (((!(((/* implicit */_Bool) (unsigned short)52611)))) ? (((/* implicit */long long int) (+(1802131384U)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36739))) : (5733301906642854198LL))));
                    arr_45 [i_10] = (-(((((/* implicit */_Bool) 13948890841999399583ULL)) ? (((/* implicit */int) (short)1984)) : (2147483647))));
                }
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (((!(((/* implicit */_Bool) (short)-1985)))) ? (((-8590436088223917028LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))))) : (((/* implicit */long long int) ((int) (unsigned char)255))))))));
                    var_32 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 1802131384U))) ? (((/* implicit */int) ((unsigned char) (unsigned char)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1923212085)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) (short)63)) ? (4671483479092017797ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                    arr_49 [i_10 + 1] [i_11 + 4] [i_13 - 1] [i_10] = (+(((((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) (unsigned char)38)))) ? ((-(((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) (unsigned short)41889)))));
                }
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    var_33 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)7168))))) ? (((((/* implicit */_Bool) (unsigned short)21330)) ? (1802131384U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        arr_54 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_10] = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(1378817978)))))) ? (((((/* implicit */unsigned long long int) ((long long int) (unsigned short)13023))) % (((((/* implicit */_Bool) 2536053246U)) ? (16961739462133207365ULL) : (((/* implicit */unsigned long long int) -572674738)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 32256))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)6894)) ? (-1656315019) : (580271265)))) > (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (131071LL)))));
                        arr_55 [i_10] [i_11 + 3] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 713062152176452790ULL)) ? (2517095834603736917ULL) : (((/* implicit */unsigned long long int) 3676333303U))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-1275037370816161748LL) : (((/* implicit */long long int) -1760136348))))))));
                    }
                }
                for (short i_18 = 1; i_18 < 11; i_18 += 3) 
                {
                    var_35 = ((/* implicit */unsigned char) ((int) (-9223372036854775807LL - 1LL)));
                    arr_59 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-15435)) ? (((((/* implicit */int) ((signed char) (unsigned char)16))) ^ (((((/* implicit */_Bool) 618634016U)) ? (318903926) : (((/* implicit */int) (unsigned short)9565)))))) : (((/* implicit */int) (unsigned short)33565))));
                    arr_60 [i_18] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (unsigned char)241);
                }
                arr_61 [i_13] [(unsigned short)6] [(unsigned short)6] [6] |= ((/* implicit */unsigned int) ((((1311089227) <= (1370834662))) ? (((/* implicit */int) (short)25024)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */unsigned int) 0)) : (3322430961U)))))));
            }
            arr_62 [i_10] [i_11] [(signed char)9] = ((/* implicit */long long int) ((int) ((int) (~(1596004609)))));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((-6374295) <= (((/* implicit */int) (unsigned char)255)))))) ? (((long long int) ((((/* implicit */_Bool) 972536330U)) ? (-3649020606011929984LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) : (3972743121509029410LL)));
        }
        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                for (unsigned long long int i_21 = 4; i_21 < 11; i_21 += 1) 
                {
                    {
                        arr_75 [i_10] [i_10] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1596004609)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)-31687))))))) ? (((/* implicit */int) ((signed char) 4294967295U))) : (((/* implicit */int) ((unsigned char) 63)))));
                        var_37 = ((/* implicit */unsigned short) (signed char)-61);
                        var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -77)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)31))))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 137438953471ULL)) && (((/* implicit */_Bool) -116506454)))))) : (((((/* implicit */_Bool) 281474976710655ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (15571791197581353681ULL)))))));
        }
        arr_76 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (-3649020606011929984LL) : (((/* implicit */long long int) -1596004609))))) ? (3649020606011929984LL) : (((((/* implicit */_Bool) 3649020606011929989LL)) ? (4148197512156851681LL) : (-9198553460951014617LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5301)) ? (4148197512156851681LL) : (4148197512156851694LL)))) ? ((+(((/* implicit */int) (unsigned char)76)))) : ((+(((/* implicit */int) (short)-31064)))))))));
        var_40 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35629)) ? (11222997025460118497ULL) : (((/* implicit */unsigned long long int) 58010065796432633LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8128))) : ((-(3649020606011929984LL)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -58010065796432634LL)) ? (((/* implicit */int) (short)-8129)) : (((/* implicit */int) (unsigned char)17))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)31064)))))));
        arr_79 [i_22] [i_22] = ((/* implicit */unsigned short) 511ULL);
    }
    for (unsigned char i_23 = 3; i_23 < 21; i_23 += 2) 
    {
        arr_84 [i_23] [(unsigned short)21] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4828358059456488649LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1968962725)) ? (-1) : (32640)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 58010065796432633LL))) ? (-1707413426) : (((/* implicit */int) (short)-26305)))))));
        arr_85 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (0) : (32624)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)36627)) ? (-3445083158775753254LL) : (-3607712489782566775LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)8129))))) ? (((((/* implicit */_Bool) 2874952876128197935ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5150))) : (851483964U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)833)) ? (-225710773) : (((/* implicit */int) (unsigned char)15))))) ? ((((_Bool)1) ? (-3522187560232848160LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_24 = 3; i_24 < 23; i_24 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 13997441924760558309ULL))) ? (((((((/* implicit */_Bool) (unsigned short)31773)) ? (12423369122047205766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))))) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)21655)) : (((/* implicit */int) (unsigned char)60))))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (58010065796432660LL) : (((((/* implicit */_Bool) (unsigned short)19264)) ? (58010065796432649LL) : (((/* implicit */long long int) -32640)))))))));
            var_43 -= ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)145)))) ^ ((~(((/* implicit */int) (unsigned short)55397))))));
        }
        arr_88 [i_23] = ((/* implicit */unsigned char) (-(((((_Bool) (unsigned char)196)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)21903))))));
    }
}
