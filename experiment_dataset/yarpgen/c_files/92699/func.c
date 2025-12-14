/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92699
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
    var_20 = 274875809792ULL;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (arr_8 [i_0] [i_0 + 1] [i_2 - 2])));
                    var_22 = ((/* implicit */short) 225608028U);
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) var_3))));
    var_25 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62923))) >= (18446744073709551593ULL)))));
}
