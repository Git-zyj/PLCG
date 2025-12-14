/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78274
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) var_16))), (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_19 = ((unsigned short) (+(((((/* implicit */_Bool) 8782925443002397334LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (10188739936433603599ULL)))));
            }
        } 
    } 
}
