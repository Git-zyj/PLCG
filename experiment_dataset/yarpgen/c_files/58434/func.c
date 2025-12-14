/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58434
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) ((2976737915U) << (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0]) : (var_16))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))) + (1012223400)))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(1073741824U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-24136)))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_14 [(unsigned char)6] [i_3 - 1] [i_3 - 1] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_2 + 1])), (var_14)))) ? (((/* implicit */int) ((var_1) == (((/* implicit */int) arr_13 [i_2 - 1]))))) : (((/* implicit */int) max((arr_13 [i_2 + 2]), (arr_13 [i_2 - 1]))))));
                    var_22 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
}
