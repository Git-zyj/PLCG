/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8400
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_1)))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_2)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (((~(var_9))) << (((max((((/* implicit */unsigned long long int) min((arr_2 [i_1]), (((/* implicit */unsigned int) (unsigned char)205))))), (var_5))) - (2805038429108965450ULL)))));
            }
        } 
    } 
    var_12 -= ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (6014707744306917572ULL)))), (var_0))), (var_7)));
    var_13 = ((/* implicit */short) ((var_6) > (var_1)));
}
