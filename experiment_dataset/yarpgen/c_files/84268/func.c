/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84268
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
    var_13 = var_1;
    var_14 = (+(max((((-190625930757321474LL) + (var_1))), (var_3))));
    var_15 = ((/* implicit */long long int) max((var_15), (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_16 = (i_0 % 2 == zero) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((-6656846744411086272LL) + (arr_0 [i_0]))))))), (max((((/* implicit */long long int) ((6418367182997101380LL) < (arr_0 [i_0])))), ((+(arr_0 [i_0]))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((-6656846744411086272LL) - (arr_0 [i_0]))))))), (max((((/* implicit */long long int) ((6418367182997101380LL) < (arr_0 [i_0])))), ((+(arr_0 [i_0])))))));
                    var_17 = ((long long int) var_0);
                    arr_6 [i_0] = var_2;
                }
                var_18 = ((((/* implicit */_Bool) min((max((6418367182997101392LL), (6418367182997101383LL))), (((-662756345903275504LL) - (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((8652708060406107260LL) >> (((arr_2 [i_0]) + (2449505951267238917LL))))) > ((~(-879893255524090872LL))))))) : (min((((8072711865488080275LL) ^ (var_8))), (((var_9) | (-26LL))))));
                var_19 = max(((~(arr_0 [i_0]))), (((((var_2) + (-1LL))) - (var_8))));
            }
        } 
    } 
}
