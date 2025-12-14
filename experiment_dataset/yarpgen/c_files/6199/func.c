/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6199
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
    var_18 &= ((/* implicit */unsigned int) (unsigned short)23479);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) (~(max(((-(1967886240U))), (((/* implicit */unsigned int) var_14))))));
                    arr_11 [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)8)) ? (16283118867147523753ULL) : (((/* implicit */unsigned long long int) 2113929216)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_16))))));
}
