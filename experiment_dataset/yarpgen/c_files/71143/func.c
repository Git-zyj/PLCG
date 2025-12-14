/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71143
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
        for (short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max(((_Bool)1), (((((/* implicit */_Bool) ((arr_7 [(signed char)16] [i_1]) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) && (((arr_7 [(short)13] [i_1]) || (((/* implicit */_Bool) arr_1 [i_0])))))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (1425280011U)));
                }
                arr_9 [8ULL] [i_1] [i_1 + 3] = ((/* implicit */signed char) max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)-106)) - (((/* implicit */int) (signed char)124)))), (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_7 [i_0] [i_0])))))))));
                arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_1]))) != (arr_3 [i_1 + 1] [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) var_12)) ? (min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1)))) : (max((((((/* implicit */int) var_3)) >> (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) var_2)))))))));
    var_15 = ((/* implicit */unsigned short) ((((var_12) + (9223372036854775807LL))) >> (((var_6) - (2199049525U)))));
}
