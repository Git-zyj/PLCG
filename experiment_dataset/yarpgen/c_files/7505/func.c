/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7505
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
    var_14 &= ((/* implicit */long long int) 3895795210U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 6061292499222079685ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1])) : (-1534861634)))) : (((arr_3 [i_0] [i_1 - 1]) ^ (arr_3 [i_0] [i_1 - 1])))));
                var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((~(arr_7 [i_2] [16]))))))));
                arr_8 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) 15384582193344359099ULL);
            }
        } 
    } 
}
