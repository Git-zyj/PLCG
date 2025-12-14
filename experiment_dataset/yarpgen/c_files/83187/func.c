/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83187
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
    var_13 = ((/* implicit */unsigned char) ((unsigned short) min(((~(((/* implicit */int) (unsigned short)10895)))), (((/* implicit */int) var_6)))));
    var_14 = ((/* implicit */_Bool) (+(((var_0) / (max((var_2), (1114204720621498494LL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = arr_0 [i_0] [i_0];
                    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) min((-1114204720621498505LL), (((/* implicit */long long int) arr_3 [i_0]))))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_1))));
                }
            } 
        } 
    } 
}
