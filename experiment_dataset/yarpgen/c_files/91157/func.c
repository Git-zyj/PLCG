/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91157
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
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */unsigned int) (-((~(((((/* implicit */int) (short)0)) >> (((-1842324420) + (1842324448)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)165)) | (((/* implicit */int) (short)254))));
                var_15 = arr_4 [i_0] [i_0] [i_1];
                var_16 = var_5;
            }
        } 
    } 
}
