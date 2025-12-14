/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63587
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(signed char)17] [i_1] [i_1] = ((arr_1 [i_0]) / (((/* implicit */int) var_9)));
                arr_7 [i_0] [i_1] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_4 [i_1] [i_1])))), ((~(var_5)))))) : (min((((/* implicit */unsigned int) arr_5 [i_1])), (arr_3 [i_1] [(short)9] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (arr_3 [i_2] [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4080)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_2])))))))) ? (arr_13 [4] [i_3] [i_4] [i_2]) : (((arr_3 [i_2] [i_2] [i_3 - 1]) ^ (arr_3 [i_2] [i_2] [i_3 + 1])))));
                    var_16 ^= ((/* implicit */signed char) 3177687105935472845ULL);
                }
            } 
        } 
    } 
}
