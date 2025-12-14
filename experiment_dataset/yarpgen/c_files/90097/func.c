/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90097
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
    var_17 *= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_16)), (min((((/* implicit */long long int) (_Bool)0)), (33550336LL))))), (((long long int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_1 [i_0]))));
                    var_19 -= min((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])), (min((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])), (arr_7 [i_1 + 1] [i_1 + 1]))));
                    arr_10 [i_1 + 1] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0])), (arr_2 [i_0])))) >= (min((arr_7 [i_1 + 1] [i_2]), (((/* implicit */unsigned int) (unsigned short)65525)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_0])), ((-(((/* implicit */int) arr_4 [i_0]))))))) : (((arr_1 [i_0]) / (((/* implicit */unsigned int) min((-2043350250), (((/* implicit */int) arr_8 [i_0] [0LL] [9ULL] [i_0])))))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_16 [i_0] [22] [i_3 - 3] [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned short)60139)) : (((((/* implicit */_Bool) 65535U)) ? (((/* implicit */int) ((signed char) -33550337LL))) : (((/* implicit */int) arr_3 [(short)0]))))));
                        var_20 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_3] [(unsigned char)12])) ? (((/* implicit */unsigned long long int) arr_13 [i_3 - 1] [(unsigned char)16])) : (arr_12 [i_1 + 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_1 + 1])), (arr_13 [(unsigned char)14] [4U]))))));
                        arr_17 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_0])) ? (arr_13 [i_3 + 3] [i_0]) : (arr_13 [i_3 + 1] [i_0]))));
                    }
                    var_21 = ((/* implicit */long long int) arr_6 [i_0] [15LL]);
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_22 = arr_5 [i_1] [i_1 + 1] [i_3 - 4];
                        /* LoopSeq 4 */
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            arr_25 [(unsigned short)6] [i_3] [5LL] [i_0] = ((/* implicit */unsigned int) (unsigned short)10);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1 + 1] [(short)10] [i_0])) ? (((/* implicit */unsigned long long int) max((((long long int) arr_20 [i_6] [i_5] [i_3])), (((/* implicit */long long int) arr_5 [7] [i_6 - 1] [i_6 - 1]))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_5] [i_5] [i_0])), (260046848LL)))), (min((((/* implicit */unsigned long long int) 2482124159U)), (18446744073709551615ULL)))))));
                            arr_26 [i_3] [i_3] [i_3 - 4] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_19 [i_1 + 1] [i_1 + 1]))));
                            var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) min((arr_20 [i_3] [i_3] [i_5]), (arr_9 [i_0] [i_1] [i_3]))))))), (min((((/* implicit */long long int) 2147483624)), (33550337LL)))));
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_29 [i_0] [23ULL] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_9 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */_Bool) arr_19 [i_0] [i_7])) ? (((/* implicit */int) arr_9 [i_0] [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0]))))))) : ((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2482124159U))))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [19] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_7]);
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_0] [i_0]))) ? (6295430462346418825LL) : (((/* implicit */long long int) (+(arr_2 [i_0]))))));
                            arr_34 [i_0] [i_0] [i_0] [6ULL] = ((((/* implicit */unsigned int) arr_22 [17LL] [i_0] [i_1 + 1] [9U] [i_8] [i_1 + 1] [i_8])) > (((((/* implicit */_Bool) arr_11 [(short)2])) ? (2172101517U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_37 [i_0] [19] [19] [i_5] [i_0] [i_1] = min((((/* implicit */unsigned int) arr_31 [i_1 + 1] [i_5] [i_5])), (((((/* implicit */_Bool) arr_22 [i_3] [i_5] [i_5] [i_3] [i_1] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_3])) : (max((arr_13 [i_1 + 1] [i_0]), (((/* implicit */unsigned int) arr_20 [i_9] [i_1] [10ULL])))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1] [18] [i_3 - 3])) ? (min((4293053932009636945LL), (((/* implicit */long long int) 1738200479)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_0]), (((/* implicit */short) arr_3 [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10)))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */long long int) arr_40 [i_1 + 1] [i_1 + 1] [i_3] [i_3 - 4] [i_3 + 3] [i_3 - 1])) ^ (min((((arr_4 [i_0]) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_38 [i_10] [i_10] [i_10] [i_10] [i_10]))), (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [i_0])), (arr_31 [i_0] [i_0] [i_10]))))))));
                            var_28 = ((/* implicit */unsigned char) min((arr_39 [i_0] [i_0] [i_0] [i_10]), (arr_39 [i_0] [i_1 + 1] [i_0] [i_11])));
                        }
                        for (long long int i_12 = 1; i_12 < 21; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((((/* implicit */long long int) ((int) arr_12 [i_0]))), (min((arr_14 [i_3 - 3] [i_10] [i_3 - 3]), (((/* implicit */long long int) -1985215305)))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_41 [9LL] [(signed char)1] [i_3 + 3] [9LL] [i_0])) ? (arr_7 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0])))))))));
                            var_30 = ((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0] [i_3 + 2] [i_3] [i_0] [i_12]);
                            var_31 = ((/* implicit */signed char) max((arr_28 [i_0] [i_1 + 1] [(unsigned short)2] [i_10] [4]), (2147479552)));
                            arr_45 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
                        }
                        arr_46 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned int) -746255872)), (1440079419U))), (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1])) ? (arr_7 [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 + 1] [i_1 + 1])))));
                        arr_47 [i_0] [i_1] [i_1] [i_0] [i_10] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-84)) ? (arr_32 [i_0] [i_1 + 1] [i_3] [i_1 + 1] [i_3 + 1] [i_3] [i_10]) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3 - 2] [i_0])) ? (max((arr_39 [i_0] [i_1] [i_0] [i_10]), (((/* implicit */unsigned long long int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((arr_0 [i_10]) ? (arr_39 [i_0] [i_0] [i_0] [i_10]) : (((/* implicit */unsigned long long int) arr_38 [i_10] [i_10] [i_3] [i_1] [i_0]))))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_35 [10U] [0ULL] [i_3] [i_0] [0] [i_0] [10U]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_55 [i_3] [i_3 + 2] [17] [i_3] [i_0] [i_3 + 3] [i_3] = ((/* implicit */unsigned long long int) arr_40 [i_1 + 1] [i_1 + 1] [6ULL] [i_1 + 1] [i_0] [i_13]);
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (unsigned short)2677))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_51 [i_0] [i_0] [12U] [i_3] [i_13] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [(signed char)4]))) : (arr_51 [i_0] [i_1] [19ULL] [i_3 - 3] [i_3 + 3] [i_13] [(unsigned short)11]))))))));
                            arr_56 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_28 [i_14] [i_13] [(unsigned short)14] [(short)22] [i_0]);
                        }
                        arr_57 [i_0] [i_1] [19U] [i_0] [i_1] [(signed char)12] = ((/* implicit */unsigned int) arr_54 [(signed char)18] [i_3 + 2] [i_1 + 1] [i_1] [i_0] [(_Bool)0]);
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_8 [10LL] [10LL] [i_3] [8U]))))) ? (7834080549955347252ULL) : (((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_3 + 2] [i_13])))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_1 + 1] [i_1 + 1] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */long long int) ((int) arr_1 [i_3 - 4]))) : (arr_51 [i_0] [i_0] [9U] [i_0] [i_0] [9U] [i_0]))))));
                    }
                }
                var_37 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-50))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [18] [14]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_0] [i_0]) : (arr_19 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (unsigned short i_15 = 3; i_15 < 23; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_38 -= ((/* implicit */unsigned short) min((min((arr_31 [i_1 + 1] [i_15 - 1] [i_17 - 1]), (arr_31 [i_1 + 1] [i_15 - 1] [i_17 - 1]))), (arr_31 [i_1 + 1] [i_15 - 2] [i_17 - 1])));
                                arr_65 [i_0] [(_Bool)0] [i_0] [i_0] [i_16] [(short)2] [i_17] = ((/* implicit */_Bool) ((int) -1287207527));
                            }
                        } 
                    } 
                } 
                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_0])) & (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_0]))))) ? ((~(((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_0])))) : (((((/* implicit */_Bool) 1812843136U)) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [1U])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
    {
        for (int i_19 = 2; i_19 < 15; i_19 += 1) 
        {
            {
                arr_72 [i_18] [i_19] [i_19] = ((/* implicit */signed char) (-(33550347LL)));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_44 [i_19] [i_18] [i_19] [i_18] [i_18] [i_18]) > (((/* implicit */unsigned long long int) -739308165)))))) == (arr_52 [i_19] [i_18])));
                arr_73 [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_22 [5] [i_19 - 1] [5] [i_18] [i_18] [23ULL] [i_18]) + (min((arr_41 [i_18] [i_18] [i_18] [i_19] [i_19]), (((/* implicit */int) (_Bool)1))))))), (((arr_12 [i_19]) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_18] [i_18] [i_18] [i_18]))) / (2482124160U))))))));
                var_41 = ((/* implicit */unsigned short) arr_53 [4] [4]);
                var_42 = ((/* implicit */unsigned long long int) ((signed char) min((max((((/* implicit */long long int) (-2147483647 - 1))), (arr_35 [i_18] [i_18] [i_18] [i_18] [i_19] [i_19] [i_19]))), (((((/* implicit */_Bool) 2147483647)) ? (arr_59 [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_18] [i_18]))))))));
            }
        } 
    } 
}
