/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77395
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((8235256232118649852LL) >> (((7106279927201507758LL) - (7106279927201507756LL)))))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (1513336278330549178LL))) : (min((2948367352437087224LL), (((/* implicit */long long int) ((26LL) > (arr_1 [i_0] [i_0]))))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_16 = arr_1 [i_1] [i_1];
        arr_6 [9LL] = (((((((-9223372036854775807LL - 1LL)) % (-1450633722635234516LL))) + (9223372036854775807LL))) << (((1513336278330549178LL) - (1513336278330549178LL))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_2 - 3] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2641846363371634627LL)) ? (arr_3 [i_3]) : (arr_3 [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) || (((/* implicit */_Bool) 6162722416805729575LL))))))))) ? (arr_7 [i_2] [i_1]) : (((((((/* implicit */_Bool) -1513336278330549179LL)) ? (arr_0 [i_1]) : (arr_11 [i_3] [i_2 - 2]))) - (arr_7 [i_1] [i_1]))));
                    arr_13 [i_1] [i_2] = min((((2366034538755934745LL) + ((-9223372036854775807LL - 1LL)))), (arr_9 [i_2 - 1]));
                }
            } 
        } 
    }
    var_17 = var_9;
    var_18 = ((((((/* implicit */_Bool) 1513336278330549178LL)) ? (-9223372036854775807LL) : (2366034538755934734LL))) / (var_7));
}
