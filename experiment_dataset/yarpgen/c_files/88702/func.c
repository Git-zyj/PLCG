/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88702
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((unsigned char) max((((((((/* implicit */int) var_8)) + (2147483647))) >> (((arr_0 [i_0]) - (16643860967030002285ULL))))), (((int) arr_2 [i_0] [i_0] [i_1 + 2])))))) : (((/* implicit */signed char) ((unsigned char) max((((((((/* implicit */int) var_8)) + (2147483647))) >> (((((arr_0 [i_0]) - (16643860967030002285ULL))) - (15405522193913725759ULL))))), (((int) arr_2 [i_0] [i_0] [i_1 + 2]))))));
                var_13 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                var_14 = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_2);
    var_16 = ((/* implicit */int) var_1);
}
