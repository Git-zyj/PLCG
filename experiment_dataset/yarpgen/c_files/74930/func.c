/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74930
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_1 + 4] [i_0] [i_0] |= ((/* implicit */long long int) max(((_Bool)0), ((_Bool)1)));
                var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [(short)0])) : (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])))) > (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1 + 2]))))))), (((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
                var_16 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_7)), (arr_4 [i_1 + 2] [i_0]))), (min((arr_4 [i_1 + 1] [i_0]), (arr_4 [i_0] [i_0])))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (max((((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))), (var_5)))));
}
