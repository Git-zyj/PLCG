/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57491
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
    var_16 &= ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)65535)))))))));
                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_4 [i_0 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_14);
}
