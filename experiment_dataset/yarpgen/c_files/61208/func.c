/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61208
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
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [(signed char)4])), (arr_4 [11U] [i_0] [i_0])))) >> (((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1])) ? (arr_3 [(short)24] [(short)24]) : (arr_3 [i_1] [(short)2]))) - (3753920282495725342LL))))));
                var_12 = ((/* implicit */unsigned int) 8388607LL);
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((max((8388602LL), (((/* implicit */long long int) arr_1 [(short)1])))) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [7] [i_0 - 2]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            {
                arr_10 [i_2] [i_2] = ((arr_6 [i_2 - 1] [i_3 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))));
                var_14 = ((/* implicit */short) min((((((/* implicit */int) arr_2 [(_Bool)1] [(short)20])) * (((/* implicit */int) ((unsigned char) (signed char)119))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [0] [i_2] [i_2 - 1])) ? (var_4) : (((/* implicit */int) arr_4 [(short)2] [i_2] [i_2]))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)141)), (arr_2 [i_2] [5ULL])))) : ((+(((/* implicit */int) (unsigned char)51))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned long long int) var_7))));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), (var_6)));
}
