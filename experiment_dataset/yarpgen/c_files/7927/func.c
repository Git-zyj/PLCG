/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7927
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (135928679U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)37687)))))));
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_4 [i_0 - 1] [i_1 + 2]), (arr_4 [i_0 - 3] [i_1 + 3]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_5))));
}
