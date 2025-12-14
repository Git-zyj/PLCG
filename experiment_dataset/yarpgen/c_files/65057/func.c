/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65057
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
    var_17 = var_12;
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)44567)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))), (((var_6) * (var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)16128))));
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46620)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-16143)), (var_3)))) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))), (var_13)));
            }
        } 
    } 
}
