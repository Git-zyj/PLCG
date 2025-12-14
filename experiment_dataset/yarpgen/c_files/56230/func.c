/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56230
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (short)7282)) ? (((/* implicit */long long int) var_7)) : (arr_5 [15LL]))) << (((((/* implicit */int) arr_1 [i_0])) - (108))))), (((/* implicit */long long int) (-(((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1])))))))));
                var_20 = ((/* implicit */unsigned char) (((((!(arr_4 [i_0] [i_0] [i_0]))) ? (((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_18)) - (14829))))) : (((/* implicit */int) arr_1 [i_0])))) % ((((~(((/* implicit */int) var_4)))) ^ ((-(((/* implicit */int) var_18))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_14);
}
