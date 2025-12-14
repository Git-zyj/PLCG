/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84033
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
    var_12 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((var_4), (var_4))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)31392))))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (max((-1218618447), (((/* implicit */int) (short)-31393)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) ((((/* implicit */int) (short)31393)) == ((~(((/* implicit */int) (short)31393))))))))))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((int) arr_1 [14LL]))) ? (((/* implicit */int) (_Bool)1)) : (var_2))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-31416))))), (((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_0 [i_0])) - (36754)))))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? ((+(((/* implicit */int) (unsigned short)35798)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35798)))))) && (((((/* implicit */_Bool) 4294967274U)) || (((/* implicit */_Bool) arr_2 [i_0] [15LL] [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
}
