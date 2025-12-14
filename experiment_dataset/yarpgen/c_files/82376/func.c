/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82376
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
    var_12 = ((/* implicit */unsigned int) (unsigned short)8192);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [5] [5] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) < (((/* implicit */long long int) (+(((/* implicit */int) (short)2)))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1] [i_1 + 2]))))));
                var_13 = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_3 [i_0])) / (-1078594357))) - (((/* implicit */int) arr_3 [i_0]))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
            }
        } 
    } 
}
