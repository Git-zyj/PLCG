/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85348
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2098795582170157722LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) var_4))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [1LL] [i_1] [i_1 + 2])) : (((/* implicit */int) var_8)))))))));
                var_12 |= ((/* implicit */signed char) ((((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_1 [i_1] [i_1])))) * (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) arr_2 [(_Bool)1] [0] [i_0]))));
            }
        } 
    } 
    var_13 = (((_Bool)0) ? (((/* implicit */unsigned int) var_0)) : ((+(var_6))));
}
