/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/680
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
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? ((+(var_7))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (var_0)))))))))));
                arr_4 [i_0] = (~((~(((var_3) ^ (((/* implicit */int) arr_3 [(signed char)7])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] [(short)19] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (((((((/* implicit */_Bool) arr_8 [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) : (arr_9 [i_2] [9ULL] [i_2]))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (3332370059226754237LL))))))));
                var_11 ^= ((/* implicit */unsigned long long int) var_2);
                var_12 = ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
}
