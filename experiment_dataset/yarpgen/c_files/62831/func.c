/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62831
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (signed char)127);
                    var_19 = ((/* implicit */signed char) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_3);
}
