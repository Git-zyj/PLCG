/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72741
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 2] [i_0] = (short)-13314;
                    var_13 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13323)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0] [(short)10]))))) | (var_9)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) ? (min((((unsigned long long int) -1615362759)), (((/* implicit */unsigned long long int) (-(var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18103)))));
}
