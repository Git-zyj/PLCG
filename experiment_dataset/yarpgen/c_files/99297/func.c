/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99297
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
                    var_16 -= ((/* implicit */_Bool) 0ULL);
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_10) && (((/* implicit */_Bool) (unsigned short)3848)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (15466525320428091459ULL))) : (((unsigned long long int) 18446744073709551608ULL))))) ? (var_8) : ((~(((((/* implicit */_Bool) (unsigned short)3841)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
}
