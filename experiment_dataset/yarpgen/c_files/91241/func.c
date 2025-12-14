/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91241
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-791218841)))) & ((~(var_4)))))) ? ((+((-(2147483632))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [8ULL] [i_0 - 1] [8ULL] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 - 1])))), (((var_12) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) var_3))))));
                var_14 = ((/* implicit */unsigned char) ((signed char) arr_3 [i_1]));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (var_9) : (arr_5 [i_0 - 1] [4ULL] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) : (((arr_2 [i_0 - 1]) / (((/* implicit */unsigned long long int) var_3))))));
                arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(min((-2147483632), (1651663472)))))) % (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -2147483643)) & (var_5)))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((-2147483610) - (-595617384))))))));
            }
        } 
    } 
}
