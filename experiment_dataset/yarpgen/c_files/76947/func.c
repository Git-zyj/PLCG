/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76947
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((unsigned long long int) arr_0 [i_1 - 1] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)242)) << (((/* implicit */int) (signed char)5))));
    var_22 = var_3;
}
