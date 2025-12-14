/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73233
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)27550))))) ? (var_7) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)30))))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_16))));
                    var_22 = ((/* implicit */unsigned char) (-((-(arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
