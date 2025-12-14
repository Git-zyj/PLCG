/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79459
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_0 [i_1 + 4]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0]);
                    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_2 - 1] [i_2 + 2])) ? (var_8) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_3 [i_1 + 3] [i_2 - 1] [i_2 - 1]), (arr_3 [i_1 - 1] [i_2 - 1] [i_2 - 1]))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_1 + 4] [i_0])) : (((/* implicit */int) var_0))))) % (min((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2]))))), (var_7)))));
                }
                /* LoopSeq 1 */
                for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    var_21 = ((((int) ((arr_4 [i_0] [i_0]) <= (var_7)))) % ((-(((/* implicit */int) var_2)))));
                    arr_11 [i_3] [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((int) var_8))) : (min((((/* implicit */unsigned int) var_14)), (arr_10 [(unsigned char)17])))))) ^ (((arr_4 [i_3 + 1] [i_0]) >> (((arr_4 [i_3 + 1] [i_0]) - (3491874955947059522LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((int) var_8))) : (min((((/* implicit */unsigned int) var_14)), (arr_10 [(unsigned char)17])))))) ^ (((((arr_4 [i_3 + 1] [i_0]) + (9223372036854775807LL))) >> (((((arr_4 [i_3 + 1] [i_0]) + (3491874955947059522LL))) + (3362673294381564210LL))))))));
                    var_22 = ((/* implicit */short) ((signed char) ((unsigned long long int) arr_4 [i_1 - 1] [i_0])));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_4);
    var_24 = ((/* implicit */unsigned int) var_4);
    var_25 = ((/* implicit */short) var_16);
}
