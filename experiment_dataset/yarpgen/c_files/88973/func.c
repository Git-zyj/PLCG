/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88973
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 0))));
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -353252841917427531LL)) ? ((-2147483647 - 1)) : (-299943119)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned char)0] &= ((var_14) ? (((long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_1]) : ((-2147483647 - 1))))) : (var_0));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = max((max((((/* implicit */int) (!(arr_8 [i_3] [i_3])))), (arr_2 [i_1] [i_2]))), ((+(max((arr_0 [i_1]), (-299943107))))));
                                var_18 += ((/* implicit */_Bool) arr_2 [i_1] [i_4]);
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) ((int) 299943119)))))) ? ((-(min((arr_2 [i_3] [i_1]), (((/* implicit */int) var_1)))))) : (-299943119)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((long long int) -8811025907075438160LL)) & (((/* implicit */long long int) var_9))));
}
