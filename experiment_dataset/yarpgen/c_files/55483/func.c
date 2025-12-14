/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55483
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
    var_18 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [20] [i_0] [i_2] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1491761209U)) ? ((+(4245370527627740488ULL))) : (((/* implicit */unsigned long long int) 0))))));
                    arr_11 [i_0] [(unsigned char)7] [i_1] [i_2] = (!(((_Bool) -1836451670862142051LL)));
                }
            } 
        } 
    } 
}
