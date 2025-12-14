/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63717
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
    var_15 = ((/* implicit */short) var_10);
    var_16 = ((/* implicit */unsigned long long int) var_10);
    var_17 += ((/* implicit */_Bool) -325162403);
    var_18 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] &= ((/* implicit */_Bool) arr_3 [i_1]);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_1 + 2] [i_2])) : (((/* implicit */int) (signed char)-40)))) : (-325162403)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_0 - 1] [14LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 - 2] [i_3 - 1])) >> (((((/* implicit */int) arr_8 [i_0 + 3] [i_3 - 1])) - (53)))))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 3] [i_3 - 1]))) : (2059070286U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0 - 2] [i_3 - 1]), (arr_8 [i_0 - 2] [i_3 - 1])))))));
            arr_11 [(unsigned char)15] [9U] [i_0 + 3] = arr_3 [i_3];
            arr_12 [i_0] = ((/* implicit */long long int) var_13);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */signed char) var_14);
            var_21 = ((/* implicit */int) arr_1 [i_4]);
            arr_16 [i_4] [i_4] = ((/* implicit */long long int) arr_2 [i_0]);
        }
        var_22 = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */long long int) arr_18 [3]);
        var_23 = ((/* implicit */long long int) arr_18 [i_5]);
        var_24 = ((/* implicit */short) -5801162194981412217LL);
    }
}
