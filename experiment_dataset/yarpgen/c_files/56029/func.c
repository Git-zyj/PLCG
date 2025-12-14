/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56029
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 9693486833910863966ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1 + 3] [i_0] |= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0]);
                    var_18 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (arr_4 [i_0]))))) & (((unsigned long long int) var_11)))) | ((+((((_Bool)1) ? (9693486833910863964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20977))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_3] |= ((/* implicit */long long int) ((((((/* implicit */int) var_15)) ^ (((((/* implicit */int) var_13)) - (((/* implicit */int) (_Bool)1)))))) % (((/* implicit */int) var_15))));
                                var_19 -= ((/* implicit */_Bool) arr_14 [i_5] [i_1] [(_Bool)1] [i_4] [i_5] [i_3] [i_0]);
                                arr_17 [i_0] [2LL] [i_0] |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 3])) == (((/* implicit */int) var_4)))));
                                arr_18 [i_0] [i_1 + 4] [i_0] [(_Bool)0] [(unsigned short)4] [i_0] |= ((/* implicit */unsigned long long int) ((((arr_14 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_5] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1]))))) && (((arr_14 [i_0] [i_1] [i_1 + 4] [i_1] [i_1 + 1] [i_3] [i_4]) == (arr_14 [i_1 + 3] [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_5] [i_5])))));
                                var_20 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)65535))))), (((((arr_1 [i_3] [i_4]) - (var_14))) << (((/* implicit */int) ((-6LL) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [0ULL] [i_0] [i_0] [i_5]))))))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */long long int) arr_10 [i_1 + 2] [i_1] [i_0] [i_0] [i_1]);
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 15667749704045377472ULL)) || ((_Bool)1))))));
                    arr_19 [i_0] [i_0] [i_1] [i_3] |= ((/* implicit */unsigned short) ((((((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)0)))))) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0]))) : (9693486833910863964ULL)))));
                }
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_6)))))) * (((/* implicit */int) (unsigned short)0)))))));
                var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14183519963359762382ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))))))));
                var_25 += ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_1 + 4] [i_1 + 3]);
            }
        } 
    } 
}
