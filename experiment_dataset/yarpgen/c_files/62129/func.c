/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62129
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
    var_18 = (!((!(((/* implicit */_Bool) min((1575803417U), (1575803445U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_1] [5] [5] [i_1 - 2] = ((unsigned int) (_Bool)1);
                    arr_8 [i_2] = ((/* implicit */int) var_3);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_11 [6] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */unsigned int) 1064017374)) == (1575803418U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 22U))))) : (((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) 2719163871U))))));
                        arr_12 [2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) var_3);
                    }
                    for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        arr_15 [(signed char)11] [i_4] [i_1] [(unsigned char)7] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1064017392)) && (((/* implicit */_Bool) ((1575803445U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        arr_16 [i_2] [i_4] [i_2] [i_4] [11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1462995754876887942LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) 1575803450U)) ^ (var_13)))));
                    }
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_21 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((3094060438U) % (4294967281U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -1)) != (9U)))))))) - (min((((((/* implicit */_Bool) -685599983)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                    arr_22 [i_0] [i_0] [6U] [i_0] = ((/* implicit */int) (unsigned char)245);
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) (short)29810)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((short)32752), (var_11))))))));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(min((((/* implicit */int) max((((/* implicit */short) var_16)), ((short)28803)))), ((~(2147483623)))))));
                    arr_27 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) 4291049034U)) ^ (((long long int) -1)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)29799))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((1993894245U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))))))));
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((short)9666), ((short)32755)))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (694404317U)))))) == (((min((((/* implicit */unsigned long long int) (_Bool)1)), (5883342159728513478ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967261U)) ? (((/* implicit */unsigned int) 1526387890)) : (2719163896U))))))));
                }
                /* LoopSeq 3 */
                for (int i_7 = 3; i_7 < 8; i_7 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) (signed char)101);
                    /* LoopNest 2 */
                    for (short i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        for (int i_9 = 2; i_9 < 10; i_9 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_4))))))) * (min((((((/* implicit */_Bool) var_15)) ? (1575803446U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) (!(var_16))))))));
                                arr_38 [i_7 + 3] [i_7] [i_7] [0LL] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)19)))), (9223372036854775791LL)))) ? (((((/* implicit */_Bool) 2069339400)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (348720006U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((15ULL) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)207)), (1575803417U))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 8; i_10 += 3) /* same iter space */
                {
                    var_22 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2719163909U) != (1575803399U))))) + (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (930668758U)))));
                    arr_41 [10] [i_1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) 2227584746U))));
                    arr_42 [i_10] [i_10] [i_0] [i_0] = (~(3866167915U));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)14)))))));
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 8; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 2; i_12 < 8; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (4807860171480908381ULL)))) ? (var_10) : (((/* implicit */int) (!((_Bool)0))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) (signed char)107))) : (((/* implicit */int) var_0))));
                        var_26 = ((var_3) >> (((var_3) - (3745985202U))));
                    }
                    for (long long int i_13 = 3; i_13 < 11; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_13] [i_0] [7LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-27)) ? (var_7) : (((/* implicit */long long int) var_8))));
                        var_27 += ((/* implicit */unsigned long long int) (-((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32738))) : (var_9)))));
                    }
                    arr_52 [i_1] [i_1 + 4] [i_1 + 4] [i_1 + 4] = ((/* implicit */unsigned int) ((int) 2748450056471638365LL));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-567532102) : (((/* implicit */int) (signed char)16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29810))) : (var_3))))));
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_57 [i_14] [7LL] [7LL] [i_14 + 1] [i_14] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_58 [i_14] [(short)2] [i_1] |= ((((/* implicit */_Bool) 3357506657U)) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */long long int) 1816365919)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)29810)))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1597354810470583149LL)) ? (((/* implicit */unsigned long long int) -7961033669722685918LL)) : (10308537764848860360ULL)));
                                arr_59 [i_0] [i_1] [i_11] [i_14 + 1] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)32767))))))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)-14422)) / (((/* implicit */int) (_Bool)1))))))) : (((var_13) / (((/* implicit */long long int) var_10))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        arr_66 [(signed char)3] [(signed char)3] [(signed char)3] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 12580324546605651105ULL)))))) * (((0U) >> (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            var_32 |= ((/* implicit */unsigned int) ((36028797018963967LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29814)) / (((/* implicit */int) var_4))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6814123520485544733LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_70 [10LL] [0LL] [i_18] [(_Bool)0] [i_18] [i_1] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((5517741187327375603LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_71 [i_0] [(_Bool)1] [(_Bool)1] [i_17] [i_18] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) & (((/* implicit */int) (_Bool)1))));
                            var_35 = ((((/* implicit */_Bool) 16383)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1108913653U));
                            arr_74 [i_19] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)39)) % (((/* implicit */int) (_Bool)1))))));
                            arr_75 [i_17] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                            var_36 = ((/* implicit */unsigned char) ((unsigned int) var_7));
                        }
                    }
                    for (int i_20 = 3; i_20 < 11; i_20 += 1) 
                    {
                        arr_80 [8] [i_16] = ((/* implicit */int) ((long long int) 1327146003U));
                        /* LoopSeq 1 */
                        for (int i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            arr_83 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)1))))) : (((8138206308860691259ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_84 [3] [0ULL] [i_21] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                            arr_85 [i_1 + 4] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (170554481U) : (1327145999U)));
                            var_37 = ((/* implicit */unsigned long long int) ((((-1573966468) + (2147483647))) >> (((var_17) - (350381854U)))));
                        }
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1216479617)) || (((/* implicit */_Bool) -7747301241681187873LL)))))) | (((unsigned int) var_11)))))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        arr_90 [i_0] [0U] [i_16] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 163654161U)))))) : (var_5));
                        arr_91 [i_0] [i_0] [i_16] [i_22] = ((/* implicit */short) ((((/* implicit */unsigned int) -1583349666)) * (1327145991U)));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        arr_94 [4] [4] &= ((/* implicit */_Bool) ((4233722941415019753LL) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255)))))));
                        arr_95 [0] [i_1] [i_23] [i_23] = ((/* implicit */_Bool) ((short) 1197062449U));
                        var_39 = ((((/* implicit */int) var_2)) << (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (8388607U))));
                        var_40 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 1197062433U)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_12)));
                    }
                    for (long long int i_24 = 1; i_24 < 11; i_24 += 1) 
                    {
                        var_41 = var_8;
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1197062449U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_9))))));
                    }
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((unsigned int) var_16))));
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29813)))))));
                    arr_99 [i_1 + 3] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (short)29810)) ? ((((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29813))) : (9223372036854775797LL)))));
                }
                arr_100 [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (127) : (2147483647)))) ? ((((_Bool)1) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */long long int) 463024673U)) : (var_13))))));
            }
        } 
    } 
}
