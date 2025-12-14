/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92025
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (((~(((/* implicit */int) arr_0 [i_0] [i_0])))) & (((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [(unsigned short)1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_0)))) ? (((/* implicit */unsigned int) min((var_8), (var_8)))) : (1302308037U))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            {
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 - 1])) * (((/* implicit */int) arr_7 [i_1 + 1]))))) ? (min((((/* implicit */unsigned int) ((unsigned short) var_10))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (261632U))))) : ((+(4294705655U)))));
                arr_12 [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) (unsigned short)17520);
                arr_13 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) 4294967282U)) ? (6003951818824201958ULL) : (((/* implicit */unsigned long long int) 251658240)))), (((/* implicit */unsigned long long int) var_3)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = var_6;
}
