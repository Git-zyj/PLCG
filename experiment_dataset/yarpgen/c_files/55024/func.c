/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55024
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
    var_18 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (3818339699U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_1 + 1])))), (((((/* implicit */unsigned long long int) var_15)) * (var_13))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) ^ (var_13)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) | (7916850468939351465LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))))));
                arr_6 [17U] [(unsigned short)18] [i_1] = ((/* implicit */long long int) (((+(var_13))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((+(arr_4 [i_1 - 1] [i_1]))) >= (min((var_9), (var_0))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_14))));
}
