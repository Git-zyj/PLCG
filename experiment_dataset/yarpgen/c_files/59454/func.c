/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59454
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) (-2147483647 - 1))), (17592186044415LL)));
    var_16 = var_10;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((((arr_0 [1LL] [i_0]) ? (var_14) : (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_0 + 1])))))));
                var_18 &= ((/* implicit */unsigned int) (~(min((arr_1 [i_0] [i_0 - 2]), (arr_1 [1ULL] [i_0 - 2])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_11);
}
