/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62104
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
    var_11 = ((/* implicit */long long int) var_3);
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_4))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 18446744073709551610ULL)))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)448)) : (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((signed char) ((max((-904620963), (-904620973))) < (((/* implicit */int) (_Bool)1))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */int) ((signed char) var_4))) >> (((((/* implicit */int) arr_1 [i_0])) - (28373)))))));
                arr_5 [i_0] [i_1] = arr_4 [17];
            }
        } 
    } 
    var_15 *= ((/* implicit */int) ((max((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) var_6)), (var_7))))) > (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))))))));
}
