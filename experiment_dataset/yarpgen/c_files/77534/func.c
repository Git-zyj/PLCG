/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77534
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = max((((/* implicit */unsigned long long int) ((int) (unsigned short)23258))), (min((arr_3 [i_0]), (arr_3 [i_0]))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) var_4);
}
