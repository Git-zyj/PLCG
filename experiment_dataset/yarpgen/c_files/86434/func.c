/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86434
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
    var_15 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (signed char)24)) ? (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) var_2)) ? (1735400035U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (2226649631U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */unsigned short) var_5);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [0U] [0U] [i_1] = arr_7 [i_0] [i_0];
                    arr_9 [4U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                }
            }
        } 
    } 
    var_18 = var_2;
}
