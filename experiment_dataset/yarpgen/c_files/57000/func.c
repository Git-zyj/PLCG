/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57000
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                    arr_8 [i_1] = ((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(var_11))))));
}
