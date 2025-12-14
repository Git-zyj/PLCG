/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91794
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
    var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min(((unsigned short)26767), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_4)))))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (-((((~(arr_3 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_15);
}
