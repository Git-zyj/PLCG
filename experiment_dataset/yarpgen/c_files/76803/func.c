/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76803
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
    var_20 = ((/* implicit */short) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) var_17);
                var_23 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_9)))), (((arr_0 [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (60936453)))));
                var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))))));
                arr_6 [i_1] = ((/* implicit */signed char) (~(min((arr_4 [i_0 - 2] [i_1] [i_0 - 3]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)174)) | (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
