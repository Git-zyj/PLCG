/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80384
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
    var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_14)) + ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) & (var_11)))))));
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 += 1121458610U;
                    arr_11 [(signed char)2] [2U] [i_2] &= ((/* implicit */signed char) arr_5 [i_0] [i_2]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_0 - 1] [(unsigned char)4]))))) ? (((((_Bool) arr_0 [i_2])) ? (((/* implicit */int) max((arr_7 [i_0] [i_0] [3U]), (((/* implicit */short) arr_1 [9U]))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (signed char)45))))))) : (((((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) var_15)))) & (((/* implicit */int) var_16))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (min((var_14), (((/* implicit */long long int) arr_5 [i_0 + 2] [i_0 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [(unsigned char)6] [i_0 - 1] [i_0 + 2])) ? (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_16)) - (59))))) : (((/* implicit */int) max((((/* implicit */short) var_4)), (arr_7 [(unsigned char)0] [i_1] [i_1]))))))))))));
                }
            } 
        } 
    } 
}
