/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60315
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = (-((((-(-2204677301164534437LL))) + (min((var_11), (2204677301164534433LL))))));
                    arr_8 [i_0] [i_1 - 4] [i_0] = ((/* implicit */short) max((min((max((var_6), (((/* implicit */unsigned long long int) 2204677301164534436LL)))), (15011457456556808538ULL))), (((/* implicit */unsigned long long int) max((2204677301164534430LL), (((/* implicit */long long int) (unsigned short)44471)))))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), (var_7))), (((/* implicit */long long int) var_13))));
}
