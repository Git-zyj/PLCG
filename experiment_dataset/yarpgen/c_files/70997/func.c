/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70997
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
    var_14 = ((/* implicit */int) min((var_14), ((+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)0))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_1 + 2])) & (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) arr_1 [i_0]))))) && (((((/* implicit */_Bool) var_6)) || ((_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 2])) == (((/* implicit */int) ((short) var_0)))))))))));
                arr_6 [i_0] [i_1 - 2] = ((/* implicit */short) min((((((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 2])) >> (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])))), (((/* implicit */int) (!(arr_3 [i_1 + 1] [i_1 - 2]))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((144115188075839488ULL) << (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)27365))))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_0 [i_2]))))))))));
                                arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (_Bool)1;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) arr_3 [i_1 + 2] [i_2]);
                    arr_15 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -6LL)))))))), (((((/* implicit */long long int) ((/* implicit */int) ((var_8) && ((_Bool)1))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_2] [i_1 + 1] [i_0])))))));
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 2]))))) <= (max((arr_11 [i_0] [i_1 - 2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_0))))));
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_1 + 3] [i_5] [i_5] = ((/* implicit */_Bool) ((arr_19 [i_1 + 1] [i_1 - 2] [i_6 - 1] [i_6 + 1]) + (((/* implicit */int) arr_7 [i_6 - 1] [i_5] [i_5] [i_6 - 1]))));
                        arr_22 [i_5] = ((/* implicit */signed char) arr_1 [i_0]);
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0])) / (((/* implicit */int) arr_25 [i_1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) var_11)) - ((((_Bool)1) ? (arr_11 [i_0] [i_1 + 1] [i_5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65373))))))))))));
                        /* LoopSeq 2 */
                        for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_27 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1 + 2]))));
                            arr_28 [i_5] [i_1 + 3] [i_8 + 2] = ((/* implicit */_Bool) arr_24 [i_7] [i_1 - 2] [i_5] [i_7] [i_0] [i_5]);
                            arr_29 [i_0] [i_1 - 1] [i_5] [i_5] [i_8 + 3] [i_8 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26215)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9455334001897727453ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-6539)) & (1980818269)))) : (max((((/* implicit */unsigned int) (_Bool)1)), (241392047U)))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 - 2]))))))));
                            arr_33 [i_5] [i_1 - 2] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 1] [i_1 + 2] [i_1 + 3])) * (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 + 2] [i_5]))))));
                        }
                        arr_34 [i_5] [i_5] = ((/* implicit */_Bool) arr_19 [i_0] [i_1 - 1] [i_5] [i_0]);
                    }
                    var_21 = (i_5 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 + 3] [i_5] [i_5] [i_1 - 1])) >= (((/* implicit */int) arr_7 [i_1 + 3] [i_5] [i_5] [i_0]))))) >> ((((-(((/* implicit */int) arr_7 [i_1 + 3] [i_5] [i_5] [i_1 - 2])))) + (5342)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 + 3] [i_5] [i_5] [i_1 - 1])) >= (((/* implicit */int) arr_7 [i_1 + 3] [i_5] [i_5] [i_0]))))) >> ((((((-(((/* implicit */int) arr_7 [i_1 + 3] [i_5] [i_5] [i_1 - 2])))) + (5342))) + (1008))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 23; i_10 += 1) 
                    {
                        arr_39 [i_10 - 2] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_10 + 2] [i_1 - 1] [i_1 + 2]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_22 = ((((/* implicit */_Bool) arr_11 [i_10 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2])) || (arr_3 [i_10 - 1] [i_10 - 3]));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-95)) <= (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_12 = 2; i_12 < 22; i_12 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [i_1 - 2] [i_1] [i_10 - 1] [i_12 - 1])))))));
                            var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_41 [i_10 + 2] [i_1 + 2] [i_5] [i_1 - 1] [i_12 + 3] [i_12 - 1]))));
                            var_26 ^= ((/* implicit */signed char) (+(arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 1])));
                        }
                        for (short i_13 = 2; i_13 < 22; i_13 += 3) /* same iter space */
                        {
                            arr_48 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_1 + 2] [i_5] [i_10 - 1] [i_13 + 3]));
                            arr_49 [i_5] = ((/* implicit */unsigned int) ((_Bool) 2147483647));
                        }
                        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            arr_53 [i_0] [i_1 + 3] [i_5] = ((/* implicit */_Bool) (-(6795557285374088296LL)));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [i_0] [i_10 - 2] [i_14] [i_14])) < (((/* implicit */int) arr_50 [i_0] [i_10 + 1] [i_14] [i_14])))))));
                        }
                        arr_54 [i_10 + 1] [i_1 + 1] [i_5] [i_5] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 24; i_15 += 2) 
                    {
                        arr_57 [i_0] [i_1 + 3] [i_5] = ((/* implicit */signed char) ((var_12) == (((/* implicit */long long int) -1980818267))));
                        var_28 = ((/* implicit */unsigned short) (((-(arr_44 [i_5] [i_1 + 1] [i_5] [i_15 - 1] [i_0] [i_15 - 2] [i_0]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1980818269)))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    arr_61 [i_16] [i_16] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1980818265)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 3] [i_0])) ? (((/* implicit */int) arr_45 [i_16] [i_16] [i_1 + 2] [i_1 - 1] [i_0] [i_16])) : (((/* implicit */int) var_9)))))));
                    var_29 *= ((/* implicit */short) ((var_12) % (((/* implicit */long long int) ((/* implicit */int) ((arr_35 [i_0] [i_0] [i_1 - 1] [i_16]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-86)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) && ((_Bool)1))) ? (((((/* implicit */int) ((signed char) (short)-1))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)40214)) <= (var_2)))))) : (((/* implicit */int) ((max((770894823), (((/* implicit */int) var_9)))) == (min((-1130718994), (((/* implicit */int) (short)-12231))))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((unsigned int) var_9)) <= (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)79)), (var_7))))))))))));
    var_32 = var_2;
}
