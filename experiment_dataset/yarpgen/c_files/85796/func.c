/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85796
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [8U] [8U] |= min((min((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (var_6))), (((/* implicit */unsigned int) arr_5 [6] [(signed char)8])));
                var_19 -= ((/* implicit */signed char) ((unsigned int) var_18));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 2])))), ((-(((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 1]))))));
                var_21 = ((/* implicit */signed char) (((~(min((-5725642455810046134LL), (((/* implicit */long long int) arr_12 [i_3])))))) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_12 [i_3 - 1]), (((signed char) arr_12 [i_2])))))));
                var_23 = ((/* implicit */short) min((min((arr_9 [i_3 - 2]), (arr_9 [i_3 + 1]))), (min((arr_9 [i_3 + 1]), (((/* implicit */unsigned short) arr_10 [i_3 - 1] [i_3] [i_3 - 1]))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned long long int) var_3);
}
