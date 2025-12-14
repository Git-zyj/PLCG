/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86014
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(17237882421730399822ULL))))));
    var_16 = ((/* implicit */unsigned long long int) (-(var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */unsigned long long int) var_12);
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(0))))));
                var_19 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_14)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12)))))))));
                            var_21 = ((/* implicit */_Bool) arr_0 [i_0]);
                            arr_11 [i_0 - 1] [i_2] [i_3] &= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_2 [i_3]))))));
                            var_22 = var_10;
                            var_23 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_0 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))));
}
