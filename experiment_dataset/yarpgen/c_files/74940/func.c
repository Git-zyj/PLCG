/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74940
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) arr_3 [i_0] [i_1]);
                var_15 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) <= ((+(min((((/* implicit */unsigned long long int) (short)32758)), (4373190082736813628ULL)))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_4) : (arr_4 [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) var_3)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), ((!((((~(14821609409209348570ULL))) >= (arr_2 [i_2 - 2])))))));
        var_17 -= ((/* implicit */unsigned short) arr_8 [i_2]);
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) ((arr_8 [i_2 - 2]) >= (var_1))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_19 -= ((/* implicit */signed char) ((arr_3 [i_3] [i_3]) + (arr_5 [i_3] [i_3])));
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_2] [i_4] [(short)5] = ((/* implicit */_Bool) ((min((((((/* implicit */unsigned long long int) var_1)) / (arr_2 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_4 - 1]))) >= (arr_9 [i_4] [i_3])))))) ^ (arr_4 [i_2] [i_2] [(signed char)19])));
                arr_16 [i_4] [i_4] [i_4 - 1] = ((/* implicit */signed char) (-((~(arr_8 [i_2 - 1])))));
            }
        }
    }
}
