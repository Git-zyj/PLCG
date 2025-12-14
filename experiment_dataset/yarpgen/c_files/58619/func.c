/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58619
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : (-2388260438698628579LL))))));
    var_14 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [7U])) ? (arr_5 [i_1 - 2] [10LL]) : (arr_8 [i_1 - 1] [(_Bool)0] [(unsigned char)8]))))));
                    var_16 &= ((/* implicit */int) 4503599627370495ULL);
                    arr_9 [i_0] [i_0 - 3] [i_2] = ((/* implicit */unsigned int) var_7);
                    var_17 &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((1073610752U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1]))))))))) - (1073610727U)))));
                    arr_10 [i_2] [0LL] = ((/* implicit */unsigned int) (-(arr_8 [i_0] [i_2] [i_0])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (12033619804614360730ULL)))));
}
