/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77690
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        arr_8 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) var_0))));
                        /* LoopSeq 3 */
                        for (int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)8160)))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_4] &= ((/* implicit */unsigned int) var_1);
                            var_14 = ((/* implicit */unsigned char) 12260819370015261969ULL);
                            arr_12 [i_0] [i_2] = (-(((/* implicit */int) ((short) var_2))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [(unsigned short)2] = (unsigned char)213;
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_16 [(unsigned char)6] [i_5 + 1] [i_3] [4U] [i_1] [(_Bool)1] [(unsigned char)6] |= ((/* implicit */int) ((((/* implicit */_Bool) 6185924703694289647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (12260819370015261987ULL)));
                            var_15 &= ((/* implicit */int) ((6185924703694289632ULL) - (((/* implicit */unsigned long long int) -7727684886365864968LL))));
                            arr_17 [i_0] [i_0] [i_0] [i_2 - 2] [i_3] [i_0] [i_5] = var_5;
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)198))));
                            var_17 = ((/* implicit */_Bool) (short)-8154);
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (short)-8153))));
                            var_19 ^= ((/* implicit */int) (unsigned char)43);
                        }
                        arr_22 [14] [i_1] [14] [11] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (short)-8154))))));
                    }
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)200)), (var_4)))) ? (max((26080921U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                        arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)202);
                    }
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        arr_28 [i_0] [i_2 - 3] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1375466274U)))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned char) (unsigned char)67)))));
                        arr_29 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        var_22 ^= ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 4268886358U)))));
                    }
                    arr_30 [i_1] [i_0] [i_2 - 2] = ((/* implicit */unsigned char) ((((min((26080921U), (4294967295U))) >= (((/* implicit */unsigned int) 2147483647)))) ? ((((+(var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))) : ((((!(((/* implicit */_Bool) -6314523467500736240LL)))) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12ULL)) && (((/* implicit */_Bool) 4294967295U))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            {
                                arr_38 [i_0] [i_2] [i_0] [i_2] [i_10] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(13936285136238351143ULL)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (2147483635)));
                                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 ^= ((/* implicit */_Bool) min((((-8699427609405651699LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))))), (((/* implicit */long long int) ((unsigned int) var_8)))));
    }
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                arr_45 [(short)8] |= ((/* implicit */long long int) (((~(((unsigned long long int) var_11)))) >> (((var_7) + (4761947182742026774LL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 4; i_14 < 17; i_14 += 2) 
                    {
                        arr_51 [i_11] [i_12] [i_13] [i_12] |= 2231932615U;
                        arr_52 [i_14 - 4] [(_Bool)1] [i_14 + 1] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_1)), (-2147483636))), (((((/* implicit */_Bool) 16004927699197900166ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (262143) : (((/* implicit */int) var_1)))))))) : (((/* implicit */int) (unsigned short)20370))));
                        var_25 = ((/* implicit */signed char) (-(((972940865) << (((((-2147483623) + (2147483632))) - (8)))))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (14649297556309782651ULL) : (((/* implicit */unsigned long long int) 168839217U))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (26U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)252)))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) (~(((int) var_2))));
                        var_28 = ((/* implicit */unsigned char) 14649297556309782651ULL);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_11))));
                        arr_56 [i_13] [i_12] [2] [i_15] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 8755574715527260471ULL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) < (((/* implicit */int) (short)12976))))) : (((/* implicit */int) var_10)))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) 13936285136238351143ULL)) ? (13936285136238351116ULL) : (9691169358182291145ULL))))) << (((((/* implicit */int) (short)-12976)) + (12988))))))));
                        arr_59 [i_11] [i_11] = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) (short)12990)))) ? (4510458937471200473ULL) : ((+(var_4)))))));
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 18; i_17 += 3) /* same iter space */
                    {
                        arr_62 [i_11] [i_12] [i_17] [i_17] [(signed char)5] = ((/* implicit */_Bool) ((long long int) ((((var_11) ? (2147483647) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max((var_2), ((_Bool)0)))))));
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (13936285136238351143ULL))) ^ (4510458937471200457ULL))));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 18; i_18 += 3) /* same iter space */
                    {
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13936285136238351158ULL)))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (2147483640)))));
                        arr_65 [i_11] [i_12] [i_11] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)43)) ? (((3687451566307992601ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 18; i_19 += 3) /* same iter space */
                    {
                        arr_70 [i_11] [i_12] [i_19 - 1] = ((/* implicit */signed char) (~(min((((/* implicit */int) (unsigned char)225)), (-2147483640)))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) 2147483640))));
                        arr_71 [i_11] [i_19 + 1] [i_13] [i_19] [i_19] = ((/* implicit */unsigned short) -2147483640);
                    }
                }
                for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                {
                    arr_76 [i_11] [i_11] [i_12] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)8))) ? (((int) var_8)) : (((/* implicit */int) ((unsigned short) (unsigned short)43506)))));
                    var_34 = ((/* implicit */short) ((int) (-(((/* implicit */int) var_3)))));
                }
                arr_77 [9ULL] [17U] [i_11] = ((/* implicit */int) ((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) (-(-2147483640)))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)32767))))))))));
                arr_78 [i_12] = min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)209)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483640)) ? (2904043981141885969ULL) : (((/* implicit */unsigned long long int) 2147483611))))) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) (~(((unsigned int) (_Bool)0))))) : ((~((-(var_6)))))));
    var_37 ^= 18446744073709551615ULL;
    /* LoopSeq 1 */
    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
        {
            arr_85 [(short)6] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)12976)), (-5994546093890780314LL)))) ? (((((/* implicit */_Bool) (signed char)18)) ? (1420297082U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((int) (short)-1024)))));
            var_38 += var_8;
            arr_86 [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned char)146);
            arr_87 [i_21] [(unsigned short)10] [(unsigned char)1] = ((/* implicit */unsigned long long int) max(((+((+(2147483621))))), (((/* implicit */int) var_3))));
        }
        for (short i_23 = 0; i_23 < 15; i_23 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_24 = 0; i_24 < 15; i_24 += 2) /* same iter space */
            {
                arr_92 [i_21] [i_23] [0ULL] [(unsigned short)2] = ((/* implicit */unsigned char) (-(max((var_7), (((/* implicit */long long int) min(((short)1024), (((/* implicit */short) (signed char)94)))))))));
                arr_93 [i_23] [i_23] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 314291720U)) ? (2904043981141885969ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))))) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)213)))));
            }
            for (unsigned char i_25 = 0; i_25 < 15; i_25 += 2) /* same iter space */
            {
                arr_97 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)110))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (short)1024)) | (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 11781612366625828383ULL)))) : (((15542700092567665650ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                var_39 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) > (((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17310991864890967542ULL)) ? (65970697666560LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                /* LoopSeq 1 */
                for (signed char i_26 = 0; i_26 < 15; i_26 += 3) 
                {
                    arr_102 [i_21] [i_23] [i_25] [i_23] [14U] [i_26] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-32)), ((~(((/* implicit */int) (unsigned char)7))))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8127)) ? ((+(((/* implicit */int) (unsigned char)18)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)12)) || (((/* implicit */_Bool) (short)1239))))) : (((/* implicit */int) min((var_2), (var_1)))))))));
                    arr_103 [i_21] [i_25] [i_23] [i_26] [(signed char)1] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1497956859U)))))) : (((17310991864890967522ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((6526691645621172118LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63005)))))) ? ((-(((/* implicit */int) (signed char)16)))) : (((((/* implicit */int) (signed char)118)) * (((/* implicit */int) (unsigned char)7)))))) : (-2125451408)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_27 = 1; i_27 < 14; i_27 += 2) 
                    {
                        var_41 = var_7;
                        var_42 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_3));
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((unsigned long long int) 1135752208818584097ULL)))));
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)22))) || (((/* implicit */_Bool) 8556375190573392400LL)))))));
                        arr_107 [i_21] [i_23] [7LL] [8ULL] [8ULL] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))));
                    }
                }
            }
            for (unsigned short i_28 = 1; i_28 < 14; i_28 += 3) 
            {
                arr_112 [i_28 + 1] [(signed char)14] [i_21] |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))));
                var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (_Bool)1))));
            }
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) -8556375190573392400LL)) ? (max((((/* implicit */int) (short)32767)), (2125451408))) : (((/* implicit */int) var_0))))))));
            arr_113 [(signed char)0] [(signed char)0] |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)49424)))))));
        }
        /* vectorizable */
        for (signed char i_29 = 0; i_29 < 15; i_29 += 2) 
        {
            var_47 = ((/* implicit */_Bool) max((var_47), ((!(((/* implicit */_Bool) 2628678876U))))));
            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8)))))));
            arr_117 [11U] [11U] [i_29] = ((/* implicit */unsigned char) var_11);
            /* LoopSeq 2 */
            for (short i_30 = 0; i_30 < 15; i_30 += 3) 
            {
                arr_120 [i_21] [i_30] = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                arr_121 [i_30] = ((/* implicit */short) var_1);
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_126 [i_31] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-59))));
                var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)-16392))));
                arr_127 [i_31] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)49427))));
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 15; i_32 += 1) 
                {
                    for (unsigned long long int i_33 = 4; i_33 < 14; i_33 += 2) 
                    {
                        {
                            var_50 ^= (~(((((/* implicit */_Bool) (unsigned short)49440)) ? (-1022520323) : (((/* implicit */int) var_2)))));
                            arr_133 [i_31] = ((/* implicit */unsigned char) (signed char)59);
                            var_51 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-16392))));
                            arr_134 [i_21] [i_31] [i_31] [i_32] [i_33] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)59))));
                        }
                    } 
                } 
                arr_135 [i_21] [1U] [i_31] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
            }
            arr_136 [i_29] [i_29] [i_21] = ((/* implicit */unsigned short) (signed char)59);
        }
        for (signed char i_34 = 0; i_34 < 15; i_34 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_35 = 1; i_35 < 14; i_35 += 1) 
            {
                for (signed char i_36 = 1; i_36 < 13; i_36 += 3) 
                {
                    {
                        arr_144 [i_21] [i_34] [(unsigned char)4] [(unsigned char)4] [i_21] [i_21] &= ((/* implicit */unsigned short) 10006643680736127467ULL);
                        arr_145 [3U] [i_21] [14ULL] [14ULL] [(signed char)3] [i_36] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2125451415)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned short)49424))))));
                    }
                } 
            } 
            var_52 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16096)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)49440))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-53))))) : (((var_6) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            arr_146 [i_34] [(unsigned short)1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
            arr_147 [i_21] [i_34] [i_34] |= ((/* implicit */short) (signed char)54);
        }
        arr_148 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)46431), ((unsigned short)2)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4714058135537624802LL)))))));
    }
}
