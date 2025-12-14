/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73389
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
    var_19 = ((((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-9))))))) * (((var_11) / (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 1] [17U] [14U] &= (~(((((/* implicit */int) (signed char)9)) >> (((int) (signed char)28)))));
                var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((469762048) != (469762048)))), (min((arr_4 [4U] [(signed char)5]), (((/* implicit */long long int) var_8))))))));
            }
        } 
    } 
}
