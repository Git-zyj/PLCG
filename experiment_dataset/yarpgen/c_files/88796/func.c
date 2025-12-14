/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88796
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+((+(arr_0 [i_0]))))))));
                var_14 = ((/* implicit */short) max((max((((/* implicit */int) (signed char)-75)), (((((/* implicit */_Bool) (short)-4253)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)30)))))), (((/* implicit */int) var_1))));
                arr_4 [i_1] [i_1] [4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), (var_1))))) / (((unsigned int) 3145502388U)))));
                arr_5 [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((signed char) (unsigned char)154));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) var_1))))))));
    var_16 ^= ((/* implicit */unsigned long long int) (unsigned short)21051);
    var_17 = ((/* implicit */unsigned char) var_0);
}
