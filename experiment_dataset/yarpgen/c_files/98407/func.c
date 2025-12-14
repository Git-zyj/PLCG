/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98407
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) >= (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (((((/* implicit */_Bool) 5LL)) ? (987160716485493784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))))));
                    arr_10 [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_2)) > (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((17459583357224057832ULL) > (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) > (((((/* implicit */_Bool) -2639092137486945899LL)) ? (5862630688885194076LL) : (((/* implicit */long long int) 2024720418U)))))))));
    var_12 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((6960950615232286979LL) / (-9223372036854775803LL)))) ^ (max((17459583357224057803ULL), (17459583357224057810ULL)))))));
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) ? (((/* implicit */int) ((_Bool) min((var_4), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */int) var_9))));
    var_14 = ((/* implicit */unsigned int) var_6);
}
