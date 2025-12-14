/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95384
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
    var_15 = ((int) ((((/* implicit */unsigned int) max((-2047380576), (((/* implicit */int) (unsigned short)50666))))) < (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) var_7))))));
    var_16 = var_6;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((unsigned int) ((((((/* implicit */_Bool) 288230358971842560LL)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_1])) : (arr_0 [i_0 - 1])));
                var_17 += ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(288230358971842548LL))))))), (arr_0 [i_1])));
            }
        } 
    } 
}
