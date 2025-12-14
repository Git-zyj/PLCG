/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70880
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = min((min((var_0), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_4)))) || (arr_4 [i_0 - 1])))));
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((265018490), (((-265018489) | (1258091961))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) -265018490))), (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_10))))));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])) / (((/* implicit */int) ((unsigned short) var_10)))))) > (max((min((arr_6 [i_2]), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) arr_3 [i_2])))))))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))), (var_10)));
    var_16 = ((/* implicit */signed char) var_9);
}
