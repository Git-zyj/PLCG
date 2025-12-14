/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77381
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((signed char) (unsigned char)255)))));
    var_18 = ((/* implicit */signed char) min((var_18), (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [(short)4] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (signed char)118))));
            }
        } 
    } 
}
