/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71664
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
    var_19 = var_4;
    var_20 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) var_14)))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (((var_13) | (((/* implicit */long long int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_1])))) ? ((-(((((/* implicit */_Bool) 6822093445721046742LL)) ? (((/* implicit */long long int) 268427264U)) : (-4412725173017944010LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(arr_3 [i_0]))) >= ((-(4412725173017944009LL)))))))));
                var_21 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (arr_4 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0 - 1]) != (4412725173017943993LL))))) : ((~(((1375889852U) << (((arr_0 [i_1]) - (1123372777152739792LL)))))))));
            }
        } 
    } 
}
