/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66919
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
    var_15 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        arr_14 [i_3] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45290)) * (((((/* implicit */_Bool) 8593607613706861689ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)180)))) | (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_4))))) : (((unsigned long long int) arr_12 [i_2] [i_3 + 1] [i_3 + 1] [i_3])));
                        arr_15 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) + ((-(((/* implicit */int) (_Bool)1))))))) : (((long long int) (signed char)18))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (arr_10 [i_0] [i_1] [i_2] [i_4])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_4] [i_4 + 1] [i_4]))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_4])) ? (11201465447683957949ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    }
                    for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)))) ? (((/* implicit */long long int) min((2752899855U), (((/* implicit */unsigned int) (signed char)-108))))) : (var_5)))) ? (((/* implicit */unsigned long long int) (~(max((2249472418274200603LL), (((/* implicit */long long int) var_6))))))) : (max((((/* implicit */unsigned long long int) (unsigned short)47982)), (var_4)))));
                        var_19 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_0] [i_1]))))) : (var_3))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22696)) ? (((((/* implicit */_Bool) ((2269814212194729984ULL) * (9853136460002689926ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) : (arr_17 [i_0] [i_0] [i_5 - 1] [i_5 + 2] [i_5 - 2]))) : (var_13)));
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_24 [i_6] [i_6] [i_5] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_4 [i_5 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))) : (3986832221988881595LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_6))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 9853136460002689920ULL)) ? (((/* implicit */unsigned long long int) 2120588948U)) : (9853136460002689917ULL))))));
                            var_22 = ((/* implicit */signed char) (unsigned short)0);
                            arr_32 [i_0] [i_7] [i_2] [i_5] [i_7] = ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) > (((/* implicit */int) ((3112154342573498048LL) != (-3986832221988881596LL)))))) && (((/* implicit */_Bool) max((-3112154342573498048LL), (((/* implicit */long long int) 3707219144U)))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)49521))));
                            arr_34 [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (min((var_4), (((/* implicit */unsigned long long int) (short)-28235))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_20 [i_1])));
                        }
                        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            arr_37 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((arr_10 [i_1] [i_5 - 2] [i_8 - 1] [i_8]), (arr_10 [i_2] [i_5 + 2] [i_8 + 3] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8 + 1] [i_5] [i_5 + 2] [i_5])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_5] [i_5] [i_8]))))))));
                            var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8] [i_5] [i_2] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (3112154342573498054LL)))) : (((((/* implicit */_Bool) (unsigned char)235)) ? (arr_36 [i_0] [i_1] [i_2] [i_5] [i_8]) : (var_12)))))));
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_5])) ? (1128182520U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (3707219145U)))) ? (((/* implicit */long long int) 587748152U)) : (min((((/* implicit */long long int) ((unsigned char) arr_0 [i_0]))), (var_5)))));
                            arr_38 [i_0] [i_1] [i_2] [i_5] [i_5] [i_8] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 9853136460002689912ULL)))));
                            arr_39 [i_0] [i_1] [i_2] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_5 - 2])) ? (arr_1 [i_5 - 2]) : (arr_1 [i_5 + 2]))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_12 [i_8 + 1] [i_5 + 2] [i_2] [i_8])), ((short)4665)))))));
                        }
                    }
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_26 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9])))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_42 [i_0] [i_1] [i_2] [i_9])), (var_6))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])) ? (((/* implicit */int) (unsigned short)14428)) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])))) / (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (-1534194604) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_8))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7565808221038573447LL), (((/* implicit */long long int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) arr_12 [i_9] [i_2] [i_1] [i_0])), (arr_25 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_9 - 1] [i_9 - 1])) ? (((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_41 [i_0] [i_1] [i_2] [i_9] [i_9])))) : ((-(((/* implicit */int) (unsigned short)60006))))))) : ((((-(var_3))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1884801958)) ? (587748157U) : (587748165U))))))));
                    }
                    arr_43 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_41 [i_2] [i_2] [i_1] [i_0] [i_0]);
                }
            } 
        } 
    } 
}
