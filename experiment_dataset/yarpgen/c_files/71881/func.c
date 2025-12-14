/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71881
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [(unsigned char)0] [i_1] [(unsigned char)0] = ((/* implicit */int) max((arr_6 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]), (((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (arr_4 [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)27452))))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_8 [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])))))))))));
                arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((arr_1 [i_1 + 1] [i_1 + 1]), ((_Bool)1)))) : (((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) * (var_4)))));
                var_20 = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_17);
    var_22 = ((/* implicit */unsigned char) var_0);
}
