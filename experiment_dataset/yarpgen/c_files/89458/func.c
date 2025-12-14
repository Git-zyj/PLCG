/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89458
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
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-27689)))))));
    var_13 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((unsigned int) min((((-6474192593850551132LL) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (max((0LL), (((/* implicit */long long int) arr_2 [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) min(((unsigned short)0), (var_5))))))));
                                var_15 = ((/* implicit */unsigned short) ((long long int) arr_2 [i_2]));
                                var_16 *= ((/* implicit */short) (-(((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_10)))) ? (((int) var_6)) : (((/* implicit */int) ((short) var_6)))))));
                                arr_13 [i_4] [i_4] [i_2] [i_3] = ((/* implicit */short) ((var_9) >= (((/* implicit */long long int) max(((~(((/* implicit */int) var_10)))), (var_4))))));
                                var_17 = ((/* implicit */long long int) (unsigned short)13044);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))))) + (((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))) - (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_19 = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned long long int) var_10))));
}
