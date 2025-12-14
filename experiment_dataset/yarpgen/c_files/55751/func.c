/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55751
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            arr_4 [i_0] [i_1 + 2] = ((/* implicit */int) (unsigned short)26353);
            var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)11885))))) + (((arr_1 [i_1]) ? (arr_2 [i_0]) : (var_10))))))));
            var_12 |= ((/* implicit */long long int) arr_0 [i_1 + 2] [i_1 + 2]);
            var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4982965817256150492LL)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (max((((/* implicit */unsigned long long int) 0U)), (var_10))))) : (14932814205530999292ULL)));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [(short)6])) : (((/* implicit */int) arr_9 [17LL] [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((arr_3 [i_4] [i_2]) ? (((unsigned int) arr_0 [i_0] [i_2])) : (((arr_1 [i_0]) ? (((/* implicit */unsigned int) var_3)) : (arr_7 [i_0] [i_2] [i_0]))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)74)) - ((+(((/* implicit */int) arr_10 [i_0] [i_2] [i_4]))))));
                    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)13246)) ? (((((/* implicit */_Bool) var_7)) ? (3448863440U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (var_8)));
                    var_18 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4))))));
                }
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] = ((((/* implicit */long long int) 1653770965)) <= (-1951338130854709990LL));
                var_19 -= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_5] [6] [6] [i_0])) / (((/* implicit */int) arr_11 [i_0] [8U] [i_2] [i_5]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 232207069U))));
                var_21 -= ((/* implicit */int) var_5);
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) * (var_10)));
            }
            arr_22 [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) 4294967295U)) & (var_10))));
        }
        var_23 ^= ((/* implicit */unsigned char) ((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))) ? (max((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [19] [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [i_0])))), (arr_17 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0]))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_35 [i_8] [1] [1] [i_7] = ((/* implicit */unsigned int) arr_30 [i_7]);
                        arr_36 [i_7] [i_7] [i_8] [i_7] [(short)1] [i_10] = ((/* implicit */signed char) var_5);
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_7 + 2])) ? (arr_24 [i_7 - 1]) : (((/* implicit */long long int) var_2)))) - ((((_Bool)1) ? (arr_24 [i_7 + 2]) : (arr_24 [i_7 - 1])))));
                            arr_39 [i_7] [i_7] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) max((arr_5 [i_8]), (((/* implicit */unsigned int) var_0))))))));
                            var_25 += ((/* implicit */short) (!((!(((/* implicit */_Bool) var_8))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((arr_0 [i_7] [(short)3]), (((/* implicit */short) (unsigned char)15))))), (((((/* implicit */_Bool) (short)-1813)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_9 [(short)4] [i_8] [i_10] [i_8]))))))) ? (((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) arr_40 [i_7] [13ULL] [i_7] [i_10] [i_10] [13U])))) : (((/* implicit */int) (signed char)-3)))) : (((/* implicit */int) var_1))));
                            var_27 = ((/* implicit */int) arr_5 [i_7 + 3]);
                        }
                        arr_43 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) var_9)) ? (arr_42 [i_7] [i_10] [i_9] [i_10] [i_7 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((unsigned char) (short)127))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_7] [i_7]))))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = (-(((((/* implicit */_Bool) 1950094973)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) : (13692357U))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (2138033746)))) : (arr_46 [i_7] [i_8] [i_13] [i_13] [i_13] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_3)))) ? (((/* implicit */int) arr_38 [i_13] [1] [i_13] [i_9] [i_8] [i_8] [i_7])) : (max((((/* implicit */int) var_1)), (var_3))))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_42 [i_7] [i_8] [i_9] [i_13] [i_14]))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_7 - 1])), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_7] [i_9] [i_7])))));
                            var_31 ^= ((/* implicit */unsigned int) ((((_Bool) 3990061693U)) ? (((((/* implicit */_Bool) arr_41 [i_7] [i_7 - 3] [i_7 - 2] [i_7 - 3] [i_7 + 3])) ? (((/* implicit */long long int) (~(var_9)))) : (arr_47 [i_7 - 3] [i_7] [i_9] [i_8] [i_7 - 1] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)178)))))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) var_2))));
                            arr_51 [i_7] [i_7] [i_7] [i_13] [i_15] = ((/* implicit */unsigned char) (~(max((arr_23 [i_7 + 3]), (((/* implicit */int) arr_6 [i_7]))))));
                            arr_52 [i_7] [(signed char)0] [i_9] [i_9] [(unsigned char)11] = ((/* implicit */unsigned int) 6821239885258311295ULL);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (max((max((arr_13 [i_7 + 3] [i_8] [i_7]), (((/* implicit */unsigned long long int) arr_9 [i_7 + 1] [i_8] [i_9] [i_13])))), (((/* implicit */unsigned long long int) (!(var_0))))))));
                            var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (arr_53 [i_7] [i_8] [i_9] [i_13] [i_13])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)27869))) : (arr_24 [i_7 - 3])));
                        }
                    }
                    var_35 = var_9;
                }
            } 
        } 
    } 
}
