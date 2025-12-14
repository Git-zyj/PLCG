/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98271
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_9))));
    var_14 = ((/* implicit */unsigned long long int) 308592908U);
    var_15 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)59690)) ? (2481670861U) : (2481670864U))) + (((/* implicit */unsigned int) ((int) (signed char)1)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((+(max((var_11), (var_7)))))));
        var_16 = ((/* implicit */_Bool) 12U);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2252016532U)) ? (0U) : (((/* implicit */unsigned int) min((((((arr_0 [i_0]) + (2147483647))) >> (((2705597149U) - (2705597120U))))), (arr_4 [i_0] [i_0] [i_2]))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_8)))))) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */int) ((signed char) arr_7 [i_0] [i_2] [i_2] [i_2])))));
                    var_18 = ((/* implicit */short) arr_0 [i_0]);
                }
            } 
        } 
    }
}
