/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77361
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
    var_11 &= ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_0))))))) : ((~((~(var_4)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) min(((-(var_1))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_7)))))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((max((7968408662710000800LL), (-7968408662710000798LL))) >> (((((((/* implicit */long long int) arr_2 [i_0])) % (-7968408662710000822LL))) - (1741932354LL)))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : ((-(arr_2 [i_0 - 1]))))))));
                }
            } 
        } 
    } 
}
