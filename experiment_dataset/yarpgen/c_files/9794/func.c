/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9794
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
    var_18 = ((/* implicit */int) min(((+((-(var_17))))), (min((max((((/* implicit */unsigned long long int) var_5)), (8837492245197907511ULL))), (((unsigned long long int) 15313270763427510712ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_1])), ((-(max((arr_3 [i_0] [i_1 + 2]), (((/* implicit */int) arr_1 [i_0]))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_0 + 3]))))) ? (((/* implicit */int) (!(max((arr_0 [i_0] [i_1 + 2]), (arr_1 [i_1])))))) : (((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 + 2])) ? (arr_3 [i_0 + 1] [i_1 - 1]) : ((-2147483647 - 1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) -161717505)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_0] = max((min((15313270763427510712ULL), ((-(15313270763427510712ULL))))), (max((((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_2] [i_2] [i_0] [i_0])) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))), ((-(18446744073709551607ULL))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_0] [i_0 + 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_5 [i_1] [i_2] [i_1])))));
                                var_20 ^= (!(((/* implicit */_Bool) arr_7 [i_2] [20] [i_0] [i_2 - 3] [i_4] [i_4 - 1])));
                                var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_4 - 1] [i_0] [i_0]))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                                arr_19 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_2 + 1] [i_3] [i_5] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1 - 2] [i_2] [i_5]) ? (arr_15 [i_3] [i_3] [i_2] [i_3]) : (arr_8 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) : (arr_5 [i_0] [i_2] [i_2])));
                            }
                            arr_20 [i_2] = (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_2] [i_1 - 1] [i_1 + 2] [i_2 - 1])) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228)))))) : (((((/* implicit */int) (unsigned char)248)) - (16777184))))));
                            var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 3] [i_0 - 1]) ? (((/* implicit */int) arr_16 [i_3] [i_2 - 3] [i_1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)10])))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */short) min(((!(((/* implicit */_Bool) ((short) arr_18 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_1 - 2]))))), ((!(((/* implicit */_Bool) ((int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
}
