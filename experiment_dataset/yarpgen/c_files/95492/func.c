/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95492
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_1 - 2]) >> (((3423809447U) - (3423809433U))))))));
                arr_9 [i_1] [i_1] = min((((unsigned int) arr_0 [i_1 + 2])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 99400226U)) ? (595622447) : (((/* implicit */int) ((3227967737U) == (((/* implicit */unsigned int) 1842622149)))))))));
            }
        } 
    } 
    var_19 = ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) ((min((63U), (4195567061U))) <= (max((var_4), (2029021878U))))))));
    var_20 *= ((/* implicit */unsigned long long int) (~(var_15)));
    var_21 = (~(4195567061U));
}
