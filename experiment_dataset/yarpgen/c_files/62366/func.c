/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62366
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
    var_19 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (var_6) : (min((((/* implicit */unsigned long long int) var_17)), (var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */long long int) arr_2 [11ULL] [i_1])) : (max((-9223372036854775807LL), (((/* implicit */long long int) arr_7 [i_0] [i_1] [3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) == (((/* implicit */unsigned int) arr_3 [i_1 + 1])))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_0]))) : (arr_2 [(signed char)11] [i_1 - 1])))) ^ (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)32746))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)7] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (arr_3 [i_0])))), (4294967275U))), (((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) & (var_15)))));
                }
            } 
        } 
    } 
}
