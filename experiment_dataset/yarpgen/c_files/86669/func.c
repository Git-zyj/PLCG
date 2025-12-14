/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86669
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            arr_11 [i_1] [i_4] [i_2] = ((long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_0] [i_0])))))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) var_6)))))));
                        }
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((unsigned long long int) arr_2 [i_0] [i_1] [(unsigned short)13]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_15 [i_5] [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) (short)-21888)))), (var_3)));
                        var_18 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned short) arr_8 [i_5] [i_5] [i_5] [i_5] [2U] [2U])), (arr_4 [i_0] [i_0] [i_5]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [6] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_0])) && ((_Bool)1)));
                        var_19 -= arr_14 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6];
                        arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((int) arr_7 [i_2] [i_1] [i_6] [i_1] [9LL] [i_0]));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
                    {
                        arr_22 [i_1] [i_0] [i_1] [i_1] [9ULL] [i_7] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_20 [i_2] [(_Bool)1]), (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_7 + 1]))))) ? (max((((/* implicit */long long int) 162763514)), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_7 + 2] [i_2] [i_2] [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                        arr_23 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -162763524)) || (((/* implicit */_Bool) -162763524))))), (min((var_7), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_0] [i_2]))))));
                        /* LoopSeq 4 */
                        for (signed char i_8 = 1; i_8 < 13; i_8 += 3) 
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) ((int) (unsigned short)52776)));
                            var_20 -= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (short)-1)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_29 [i_0] [(signed char)6] [i_7 + 1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_7 + 2] [i_7 + 1] [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1]))) : (-6724121481948351835LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_7 - 1] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */int) arr_4 [i_7 + 3] [i_7 + 3] [i_7 + 2])) : (((/* implicit */int) (unsigned char)255)))))));
                            var_21 += ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)52776)) + (((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_7 + 3] [i_1] [i_2] [i_7] [i_2]), (arr_8 [i_1] [i_7 + 3] [i_7 + 3] [i_0] [i_7 + 3] [i_7 + 2]))))) : (min((arr_21 [i_9] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */long long int) ((int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9]))))));
                        }
                        for (short i_10 = 1; i_10 < 14; i_10 += 4) 
                        {
                            arr_32 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_30 [(signed char)9] [(signed char)9] [i_1] [i_1] [i_1])), (arr_21 [i_7 + 1] [i_1] [i_10] [8LL] [i_10 - 1])))) ? (arr_17 [i_0] [i_1] [i_1] [8LL] [i_7 + 3] [i_10]) : (((/* implicit */unsigned int) 162763532)));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_0] [i_10] [i_10 - 1]))))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_20 [i_2] [i_0]))) != (((/* implicit */int) min((arr_14 [i_7 - 1] [i_7 - 1] [i_7] [i_1] [i_7 - 1] [i_10]), (arr_14 [i_7 + 1] [i_10] [i_7 + 1] [i_1] [i_10] [i_10 + 1]))))));
                            var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_17 [i_2] [i_7] [13LL] [i_7 + 2] [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_7 + 1] [i_10 - 1])))))), (min((arr_7 [i_0] [i_7 - 1] [i_7] [i_1] [i_0] [i_10 + 2]), (((/* implicit */unsigned int) arr_24 [i_7 + 3] [i_7 - 1] [i_7] [i_7] [i_7]))))));
                            var_25 = ((/* implicit */int) max((var_25), (max((((((/* implicit */_Bool) arr_8 [i_10 - 1] [i_10 + 2] [i_0] [i_0] [i_7] [i_1])) ? (((/* implicit */int) arr_8 [i_10 + 2] [i_10 + 2] [i_2] [i_2] [i_7] [i_7 + 2])) : (((/* implicit */int) arr_8 [i_10 + 1] [i_10 + 2] [i_0] [i_0] [6LL] [i_1])))), ((+(((/* implicit */int) arr_8 [i_10 + 1] [i_10 + 1] [i_0] [i_0] [8] [i_7]))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */short) arr_34 [i_7] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7] [i_7]))))) ? (min((var_4), (((/* implicit */unsigned long long int) arr_27 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -9223372036854775789LL))) ? ((~(var_13))) : (((((/* implicit */int) arr_8 [i_2] [i_7] [i_2] [i_2] [i_0] [8])) * (((/* implicit */int) var_1))))))))))));
                            var_27 *= ((/* implicit */unsigned char) (+((~(arr_25 [i_0] [i_7 - 1] [i_7 - 1] [i_0])))));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_38 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_8)) : (arr_35 [(signed char)6] [i_1] [8] [i_12] [i_1] [i_0])));
                        arr_39 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */unsigned short) (((!(var_6))) ? (((((/* implicit */_Bool) arr_34 [14] [i_1] [i_1] [i_12] [i_0] [i_1])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12] [i_12] [i_12] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-12170))))), (arr_16 [i_0] [i_1])))))));
                        var_28 = ((/* implicit */unsigned short) var_5);
                    }
                    arr_40 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) 1322705531U);
                    arr_41 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)242);
                }
            } 
        } 
    } 
    var_29 |= ((/* implicit */signed char) (~(var_4)));
    var_30 = ((/* implicit */long long int) var_9);
    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 162763532)), (min((((/* implicit */unsigned int) -790164584)), (1791717790U)))))) ? (max((((/* implicit */unsigned long long int) ((long long int) var_2))), (min((((/* implicit */unsigned long long int) 2097151LL)), (var_4))))) : (((/* implicit */unsigned long long int) var_10))));
}
