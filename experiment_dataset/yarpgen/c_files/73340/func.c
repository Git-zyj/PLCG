/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73340
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (+(var_0)));
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) != (12261731130043657559ULL)));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) var_16);
                var_19 = ((/* implicit */long long int) (~(((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 45884123)) : (6185012943665894056ULL))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */long long int) (-(((unsigned long long int) min((((/* implicit */unsigned long long int) var_3)), (var_9))))));
}
