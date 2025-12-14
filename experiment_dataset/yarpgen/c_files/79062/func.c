/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79062
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)16382))));
                    var_16 = ((/* implicit */unsigned int) ((((arr_5 [i_0]) << (((arr_5 [i_2 + 1]) - (3129621652U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0]))))));
                }
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) 408664377)), (arr_5 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_18 = ((288160007407534080ULL) << (((arr_13 [(_Bool)1] [i_3] [i_3 - 1] [(_Bool)1] [i_3 - 1]) - (2584911034U))));
                            arr_15 [2ULL] [i_1] [(short)15] [5LL] [1ULL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4070)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)25581)), (-1336749219)))) : (((((/* implicit */_Bool) (short)7)) ? (((((/* implicit */_Bool) var_8)) ? (arr_6 [(short)14] [i_4] [i_3 - 1] [4LL]) : (var_6))) : (((/* implicit */unsigned long long int) var_15))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (((-5794231668988083707LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63488)))))))) ? (var_13) : (((/* implicit */unsigned long long int) max((var_4), (((((/* implicit */_Bool) 4294967295U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-25589)))))))))))));
    var_20 += ((/* implicit */unsigned short) var_5);
}
