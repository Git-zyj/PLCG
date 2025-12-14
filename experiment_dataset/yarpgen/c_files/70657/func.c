/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70657
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((min((var_11), (((/* implicit */long long int) arr_0 [16] [16])))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [16U] [16U]), (arr_0 [(unsigned short)16] [(unsigned short)16]))))))))));
                var_15 -= ((/* implicit */_Bool) arr_3 [(short)6] [(short)6] [i_1]);
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) min((var_1), (var_1)))), (((unsigned short) arr_5 [i_0] [i_0] [i_1]))))) : (((int) arr_5 [i_0] [i_1 - 1] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_1);
}
