/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66037
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1]);
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) max(((+((~(((/* implicit */int) arr_2 [i_0])))))), (max((((/* implicit */int) arr_2 [i_0])), (((295086289) >> (((9223372036854775807LL) - (9223372036854775780LL)))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 + 1])) % (((/* implicit */int) arr_1 [i_1 + 1]))))), ((~((~(9223372036854775804LL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_9))) + (((var_9) | (((/* implicit */unsigned int) max((-672925841), (((/* implicit */int) var_16))))))))))));
    var_21 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) var_17))))), (((max((var_13), (((/* implicit */long long int) var_1)))) << (((/* implicit */int) var_11))))));
}
