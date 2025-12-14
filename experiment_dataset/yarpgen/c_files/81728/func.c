/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81728
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((arr_3 [i_0]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_2 + 1]))))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), ((~(var_16)))));
                    }
                    var_20 *= ((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 2] [i_2]);
                    arr_10 [5ULL] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 -= arr_13 [i_6];
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) << (((arr_14 [i_4]) - (8808148547558965166ULL)))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_14 [i_4]))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_5])))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) * (arr_11 [(unsigned char)6] [i_5])));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) arr_17 [i_4] [i_5] [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            arr_27 [(_Bool)1] [i_5] [i_4] [i_5] [6ULL] = ((/* implicit */signed char) ((arr_21 [i_9] [i_5] [i_9 + 1] [i_5]) ? (((/* implicit */int) arr_21 [i_9] [i_9] [i_9 + 1] [i_8])) : (((/* implicit */int) arr_26 [i_9] [i_4] [i_9 + 2] [i_4] [i_9 + 1]))));
                            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_9 + 1] [i_4] [i_9] [i_9] [i_9]))));
                        }
                        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 4) 
                        {
                            var_29 = ((unsigned int) ((unsigned short) -3616086698758005818LL));
                            var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_26 [i_10 - 1] [i_4] [i_10 - 1] [i_4] [i_10 + 1]))));
                        }
                        arr_31 [i_4] [i_4] [i_6] [(short)12] = ((/* implicit */signed char) arr_19 [6] [i_4] [i_6] [i_8] [i_8] [i_8]);
                        var_31 = ((/* implicit */unsigned int) (+(arr_17 [i_4] [i_8] [(signed char)13])));
                        var_32 = (+(((/* implicit */int) (unsigned char)181)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_33 -= ((/* implicit */short) ((arr_21 [i_4] [i_5] [i_6] [i_11]) ? (((unsigned long long int) (unsigned char)72)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_11] [i_11]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11])))))))));
                        var_34 = ((/* implicit */_Bool) arr_13 [i_11]);
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_12] [i_11] [i_6] [i_4] [i_4])) >= ((~(((/* implicit */int) arr_19 [i_11] [i_4] [i_11] [i_11] [i_11] [i_11]))))));
                            arr_38 [i_4] [i_5] [i_6] [i_4] [i_12] = ((/* implicit */short) var_10);
                        }
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (signed char)108)) > (((/* implicit */int) (signed char)-49)))));
                            var_37 -= ((/* implicit */unsigned char) ((unsigned int) arr_22 [i_4] [i_5] [i_13] [i_11]));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 3; i_14 < 17; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_38 -= ((/* implicit */unsigned char) (-(arr_14 [i_15])));
                                arr_47 [i_4] [i_4] [i_5] [i_5] [i_6] [(short)16] [13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_4] [i_6] [i_14 - 3] [i_14 + 1] [i_15])) ? (((((/* implicit */_Bool) (short)8527)) ? (((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_4] [(_Bool)1])) : (((/* implicit */int) (unsigned char)183)))) : (((/* implicit */int) var_8))));
                                var_39 = ((/* implicit */int) ((unsigned char) arr_43 [i_14 + 1] [i_14 - 2] [i_14] [i_14 + 1]));
                                var_40 = (~(((/* implicit */int) arr_42 [i_4] [i_14 - 1] [i_14] [i_14])));
                                var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_5] [i_14 - 1] [i_14 - 1] [i_14 - 3] [i_14 - 3])) && (((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                    var_42 ^= ((/* implicit */unsigned char) (!(arr_21 [i_4] [i_5] [i_6] [i_6])));
                }
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 1; i_18 < 16; i_18 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned int) arr_14 [i_18]);
                                var_44 = ((/* implicit */int) min((var_44), (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-70))))))));
                                var_45 -= ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [17ULL] [i_5] [(unsigned char)17] [i_17] [i_18]))) <= (arr_40 [i_18 + 1] [i_17] [0] [i_5] [i_4])))), (arr_55 [i_18 + 1] [i_18] [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2] [i_18]))));
                                var_46 = ((/* implicit */_Bool) (signed char)37);
                                var_47 = ((/* implicit */signed char) (~((-(var_5)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 2) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
                        {
                            {
                                var_48 *= ((/* implicit */short) arr_12 [(short)10]);
                                arr_63 [(short)7] [i_5] [i_16] [(short)7] [i_4] [i_20] = ((/* implicit */int) min((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_4] [i_5] [i_19 + 2] [8LL] [i_20])))))));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */unsigned int) arr_59 [i_4] [(unsigned char)5] [i_4] [i_5] [i_5] [i_16] [i_16]);
                }
                var_50 *= ((/* implicit */unsigned long long int) arr_20 [i_4] [0U] [i_4]);
                arr_64 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_51 [(unsigned char)6] [i_5] [i_5] [i_5])) != (((/* implicit */int) arr_51 [i_4] [i_5] [i_5] [i_4])))));
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned long long int) (-(((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) var_8)))))));
}
