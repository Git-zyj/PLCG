/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72354
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned int) min((var_12), ((-(max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])), (var_12)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) arr_11 [i_2] [i_3] [i_2 + 1] [(_Bool)1])) / (var_5)))))));
                                arr_16 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) arr_8 [i_4] [i_2 + 1] [i_0] [i_0]);
                                var_14 = ((((/* implicit */_Bool) 625338323U)) ? (var_6) : (-3763178244101424591LL));
                                var_15 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_2 - 2] [4LL] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((var_0) - (((/* implicit */unsigned long long int) var_9)))) : (min((var_1), (((/* implicit */unsigned long long int) var_11)))))) : (var_0))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (min((((/* implicit */unsigned long long int) var_6)), (var_0)))))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_4))))))) : (((/* implicit */int) var_10))));
}
