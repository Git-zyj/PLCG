/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86803
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_13 += ((/* implicit */unsigned char) (-2147483647 - 1));
                    var_14 *= ((/* implicit */_Bool) ((((((/* implicit */int) (short)-30928)) + (2147483647))) >> (((618954850U) - (618954833U)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (short)30928))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                        {
                            var_16 *= ((/* implicit */int) arr_5 [i_0]);
                            arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_1] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30928))) + (max((((/* implicit */unsigned int) ((unsigned char) (_Bool)1))), (((unsigned int) (short)30927))))));
                            arr_12 [i_0 - 1] [i_1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) var_10);
                            var_17 += ((/* implicit */short) (~(arr_1 [i_0 + 1] [i_0 - 1])));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            arr_15 [(signed char)22] [i_1] [i_3] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((short) (short)-19502)))));
                            var_18 = ((/* implicit */unsigned short) (short)-30950);
                            var_19 ^= ((/* implicit */short) (~(((long long int) arr_0 [i_5 + 1]))));
                            arr_16 [i_0] [i_1] [21LL] [i_1] [1ULL] [24] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) | (4040747501U))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */int) ((3616930498U) >> ((((-(var_2))) - (3778520299U)))));
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_0 + 1]));
                            arr_20 [i_0] [i_1] [i_3] [i_6] = ((/* implicit */short) (((_Bool)1) ? (-1389942232409157090LL) : (((/* implicit */long long int) 254219794U))));
                            arr_21 [i_6] [i_6] [i_1] [i_6] [18U] = ((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]));
                        }
                        for (unsigned char i_7 = 2; i_7 < 24; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 + 1])) || (((/* implicit */_Bool) (signed char)44)))) && (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 - 1])))))));
                            var_22 += ((/* implicit */long long int) ((((/* implicit */int) arr_3 [2U])) >= (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [(short)18]))));
                            var_23 = ((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_2] [i_3] [(unsigned short)21] [i_7]);
                        }
                    }
                }
                /* LoopSeq 4 */
                for (unsigned short i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                arr_34 [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_25 [i_9 + 2] [i_9 + 3] [i_9 - 1] [i_9])) ? (-1478270836) : (((/* implicit */int) arr_4 [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9])))));
                                arr_35 [i_0] [i_1] [i_1] [i_9 + 3] [i_10] [i_10] = (~(((/* implicit */int) min(((short)19502), ((short)-19473)))));
                                arr_36 [i_0] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */int) var_5);
                                var_24 ^= ((/* implicit */unsigned int) max((((/* implicit */short) var_0)), ((short)19502)));
                                var_25 = ((/* implicit */_Bool) 1366660960);
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */int) (short)30928);
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-30948)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) : (((/* implicit */int) (short)-30928))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        arr_43 [i_12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_11])) ? ((+(((/* implicit */int) (short)8050)))) : (((/* implicit */int) ((990327716U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                        /* LoopSeq 3 */
                        for (short i_13 = 1; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            arr_48 [(short)20] [i_11] [i_11] [i_11] [i_0] &= ((/* implicit */short) (~(-1738126638)));
                            var_28 = ((/* implicit */short) 3304639579U);
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                        }
                        for (short i_14 = 1; i_14 < 21; i_14 += 2) /* same iter space */
                        {
                            var_30 *= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) 990327693U))) != (((/* implicit */int) arr_9 [i_14] [i_14] [i_14 + 1] [i_14 - 1] [i_0 + 1] [i_0 + 1]))));
                            arr_52 [i_1] [i_14] = ((/* implicit */short) (+(((/* implicit */int) arr_28 [i_14 + 3] [4ULL] [i_0] [i_0 + 1] [i_0] [i_0]))));
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0 + 1] [i_15 - 1])) ? (((/* implicit */int) arr_33 [(unsigned char)5] [i_0 - 1] [i_15 + 1])) : (((/* implicit */int) arr_33 [i_0 - 1] [i_0 - 1] [i_15 + 1]))));
                            var_32 = ((/* implicit */_Bool) arr_0 [i_11]);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_16 = 1; i_16 < 23; i_16 += 2) /* same iter space */
                        {
                            arr_58 [(short)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (short)-30917))));
                            var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_23 [i_0] [i_1] [i_12] [i_12] [i_16 + 2]))));
                            var_35 = ((/* implicit */_Bool) ((((-1389942232409157090LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_28 [i_0 - 1] [i_1] [i_16] [i_16 - 1] [i_16] [(unsigned char)6])) + (55)))));
                        }
                        for (unsigned short i_17 = 1; i_17 < 23; i_17 += 2) /* same iter space */
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32716)) % (((/* implicit */int) (unsigned short)50542))));
                            arr_62 [i_0] [9LL] [i_1] [i_11] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) arr_13 [i_17 + 1] [i_17] [i_17] [i_17] [i_12] [15U] [i_12]));
                            var_36 = ((/* implicit */unsigned short) var_1);
                        }
                        for (unsigned short i_18 = 4; i_18 < 24; i_18 += 1) 
                        {
                            var_37 ^= ((/* implicit */unsigned long long int) 990327693U);
                            arr_65 [i_0] [i_1] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_55 [i_0 + 1] [4ULL] [i_18 + 1] [(unsigned char)17] [(unsigned short)8] [(unsigned short)8] [i_0 + 1]))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) (short)-3250);
                            var_39 = (~(arr_37 [i_0 + 1] [i_0 + 1] [i_0 - 1]));
                            arr_68 [19ULL] [i_1] [i_1] [21ULL] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (short)30928));
                        }
                    }
                    for (signed char i_20 = 0; i_20 < 25; i_20 += 3) /* same iter space */
                    {
                        arr_71 [2U] [i_11] [i_11] [i_0] &= ((/* implicit */short) (-2147483647 - 1));
                        var_40 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)15))) + (990327688U));
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((signed char) arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                    }
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) (unsigned short)16383);
                        arr_74 [i_11] [17LL] [i_11] [i_1] = (short)15;
                    }
                }
                for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
                {
                    arr_78 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_17 [i_1] [i_0 + 1] [(unsigned char)7] [i_0])) ? (((/* implicit */int) (short)-3250)) : (((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_1] [i_0])))));
                    /* LoopSeq 1 */
                    for (int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)30928))));
                        arr_82 [i_1] = ((/* implicit */short) (unsigned short)0);
                    }
                }
                for (unsigned short i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
                {
                    var_44 -= (+((~(((/* implicit */int) arr_76 [i_24])))));
                    var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31161))) & (3304639579U)))), (((unsigned long long int) var_4))));
                }
            }
        } 
    } 
    var_46 ^= ((/* implicit */unsigned char) var_3);
    var_47 = ((/* implicit */int) (short)-30917);
    var_48 = ((/* implicit */short) (unsigned short)9);
}
