/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83197
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 + 1] [i_1 - 1]))))));
                var_16 = max((((/* implicit */long long int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11))))), (max((arr_3 [i_0]), (var_10))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4 - 1])) ? (var_12) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((+(arr_12 [i_2] [i_3] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((((/* implicit */_Bool) (((((_Bool)0) ? (arr_6 [i_2]) : (9223372036854775807LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_2] [i_2])))))))) ? ((~(arr_6 [i_4 - 1]))) : ((((!(arr_10 [i_2] [i_3]))) ? ((+(-3590318190539276344LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_2]))))));
                }
                for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    var_19 = max((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL))), (((long long int) (-(9223372036854775807LL)))));
                    var_20 *= ((/* implicit */_Bool) (~(((long long int) max((((/* implicit */long long int) arr_10 [i_3] [i_3])), (var_6))))));
                    var_21 += ((/* implicit */_Bool) (~(max((arr_11 [i_5 - 2] [i_5 + 2] [i_5 - 1]), (arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 2])))));
                    arr_16 [i_2] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_15 [i_5 - 1] [(_Bool)1] [i_5 - 2]))))));
                }
                /* LoopSeq 3 */
                for (long long int i_6 = 3; i_6 < 18; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2]))))) ? (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))) ? ((~(var_5))) : (((arr_8 [i_6 - 3] [i_6] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_8) ? (8848744986544209374LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_7 [i_2] [i_2])))) ? ((~(((/* implicit */int) arr_8 [i_2] [i_6 - 3] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((arr_19 [15LL] [i_2] [i_6 - 1] [i_6 - 3]) ? ((((_Bool)1) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6 - 3] [i_6])))));
                        var_25 = ((-7106122002628236710LL) & (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))));
                    }
                    arr_25 [i_2] = ((/* implicit */long long int) arr_8 [i_6 - 1] [i_6 - 1] [i_2]);
                    var_26 &= ((/* implicit */long long int) (((+(arr_20 [i_6 + 1] [i_6 - 2] [2LL] [i_6] [i_6] [i_6]))) > (max(((+(7476718295517453623LL))), (((/* implicit */long long int) ((arr_24 [i_2] [i_2] [i_3] [i_3] [i_2] [i_6]) || (var_14))))))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(max((((/* implicit */long long int) var_1)), (var_9))))) : (var_9))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */long long int) (_Bool)1);
                    arr_28 [i_2] [i_3] [i_3] [i_9] = max((((/* implicit */long long int) max((((/* implicit */int) arr_23 [i_2] [i_3] [i_9] [i_9])), (((arr_14 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_22 [i_2] [i_3] [i_3] [i_9]))))))), (((arr_17 [i_2] [i_2] [i_9]) - (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_2] [i_2] [i_3] [i_9]))))))));
                    arr_29 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((max((arr_20 [i_2] [i_2] [i_2] [i_9] [i_9] [i_9]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_2] [i_2] [(_Bool)1] [i_3] [(_Bool)1] [(_Bool)1])))))));
                }
                for (long long int i_10 = 2; i_10 < 15; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 ^= ((/* implicit */_Bool) max((-9223372036854775807LL), (((/* implicit */long long int) ((_Bool) arr_18 [i_10] [i_10 + 3] [i_10 - 1])))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            arr_37 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_18 [i_2] [i_10] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_2] [i_2] [i_3] [i_10] [i_11] [i_12])) != (((/* implicit */int) arr_8 [i_2] [i_11] [i_2]))))) >= (((/* implicit */int) (_Bool)0))))))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~((~(((var_13) % (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
                            arr_38 [i_11] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_10 + 2] [i_12] [i_12])))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */_Bool) (+(max((arr_20 [i_10 + 1] [i_11] [i_2] [i_11] [i_13 - 1] [i_13 - 1]), (arr_26 [i_10 + 4] [i_10 + 4] [i_13])))));
                            var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (max((((var_15) ^ (arr_17 [i_3] [i_10 + 1] [18LL]))), (-2880840909757359345LL))) : (4212998170937219448LL)));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (-((~(arr_30 [i_10 + 2] [i_10 + 1]))));
                            var_33 ^= (!(var_11));
                            arr_44 [i_2] [i_3] [i_10 + 1] [i_2] [i_14] = ((/* implicit */long long int) max((((((/* implicit */int) arr_27 [i_10] [i_10] [i_10 + 2] [i_10 + 4])) & (((/* implicit */int) arr_27 [i_10] [i_10 + 1] [i_10 + 4] [i_10 + 3])))), ((-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_50 [i_10] [i_3] [i_3] [i_3] [8LL] |= ((((/* implicit */_Bool) (~(((long long int) arr_45 [i_2] [i_2] [(_Bool)1] [i_2] [i_2] [i_10]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (4967192464101372751LL))) : (arr_26 [i_2] [i_10 + 4] [i_2]));
                                arr_51 [i_2] [i_3] [i_2] [i_15] [i_16] = ((/* implicit */_Bool) ((long long int) ((arr_47 [(_Bool)1] [i_10 + 2] [i_10 + 4] [i_16] [i_16] [10LL]) >> (((arr_47 [i_10] [i_10 - 1] [i_10 - 1] [0LL] [i_10] [i_15]) - (8700800648162452765LL))))));
                            }
                        } 
                    } 
                    arr_52 [i_2] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_5)))) ? (max((((/* implicit */long long int) arr_23 [i_2] [i_2] [i_2] [i_2])), (108086391056891904LL))) : (arr_17 [i_2] [i_3] [i_2]))));
                    var_34 = arr_11 [i_2] [i_3] [i_3];
                }
                var_35 = ((((/* implicit */_Bool) -2222489080465552040LL)) ? (max((((arr_21 [i_2] [i_2] [i_3] [i_3] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_2] [i_3]))))), (max((((/* implicit */long long int) var_11)), (arr_18 [i_2] [i_2] [i_3]))))) : (((((/* implicit */_Bool) (~(arr_20 [i_2] [i_2] [0LL] [i_3] [0LL] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((arr_19 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))) : (8620548164385595241LL))))));
            }
        } 
    } 
}
