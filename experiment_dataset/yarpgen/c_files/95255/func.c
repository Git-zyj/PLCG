/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95255
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))));
    var_19 = ((/* implicit */short) (~((~(((/* implicit */int) var_6))))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */signed char) min((max((((((/* implicit */int) var_1)) << (((((((/* implicit */int) (signed char)-78)) + (109))) - (28))))), (((/* implicit */int) arr_1 [i_0 - 4])))), (((((/* implicit */int) arr_1 [i_0 + 1])) & (1681518923)))));
                arr_5 [12LL] [i_1] [3] = ((/* implicit */long long int) min(((+(arr_0 [i_0 + 1] [i_0 + 2]))), (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned int) var_2);
}
