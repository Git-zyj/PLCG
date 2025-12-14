/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78081
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)65535)))));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */int) max(((unsigned short)48426), (((/* implicit */unsigned short) (_Bool)1))))), ((-((-(((/* implicit */int) (unsigned char)255))))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) var_11);
}
