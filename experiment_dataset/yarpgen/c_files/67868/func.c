/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67868
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
    var_13 = ((signed char) var_11);
    var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-10123)), (var_9)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) arr_1 [0U] [i_1]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(10854663047865855358ULL)))) ? ((~(2718552876U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [11LL] [i_3])) || (var_3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) != (var_1)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_4 [i_3] [i_0])))))))) : (((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [(short)6] [i_2] [2ULL]) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                                var_17 = ((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_2] [i_0] [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = var_2;
    var_19 = ((/* implicit */long long int) var_8);
}
