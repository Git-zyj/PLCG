/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55046
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((int) 1879749639)) : (((/* implicit */int) ((870649780U) == (67076096U))))))) <= (max((4LL), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1])))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) + (2271019860U)));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) 256596753U)) + (-1872085970811575263LL))))) ? (((unsigned int) 3176816133102849839LL)) : (((/* implicit */unsigned int) var_12)));
}
