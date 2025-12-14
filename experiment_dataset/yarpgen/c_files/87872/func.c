/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87872
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = (~((-(((/* implicit */int) (unsigned short)65533)))));
                arr_6 [i_0] = (-(4211916733U));
                arr_7 [i_0] [7U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_1)) : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])))) ? ((-(((/* implicit */int) arr_1 [i_0 + 1] [i_0])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))));
                var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) - (((((/* implicit */_Bool) (unsigned short)19825)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)45712))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) max((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45708))) / (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))), (((/* implicit */long long int) min((var_10), (((/* implicit */signed char) ((_Bool) var_4))))))));
}
