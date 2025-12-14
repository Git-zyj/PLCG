/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96621
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
    var_19 = ((/* implicit */int) 140737454800896LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((((-140737454800918LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))), (((/* implicit */long long int) (-2147483647 - 1)))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((max((65504), (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3]))))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [13] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (arr_2 [i_0])));
            }
        } 
    } 
}
