/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93248
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
    var_20 = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
    var_21 = ((/* implicit */int) (((~(2832418506U))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned short) min((min((((/* implicit */unsigned long long int) var_9)), (var_18))), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) var_11);
                var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (-(1907621264U)))));
                var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((long long int) 4183039081U)), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_17)), (var_0))))))), (var_10)));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((int) var_19))))) / (((unsigned int) (-(77079398))))));
            }
        } 
    } 
}
