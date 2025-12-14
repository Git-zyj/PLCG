/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94214
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
    var_15 = var_10;
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 1])) ? (arr_1 [i_1 - 1]) : (arr_2 [i_1 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_2 [i_1 - 1] [i_0 - 1]) : (arr_1 [i_1 - 1])))) : (((unsigned long long int) arr_2 [i_1 - 1] [i_0 + 1]))));
                arr_4 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_3 [i_0] [i_1 - 1]) : (arr_1 [i_1 - 1]))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((arr_1 [i_0]) >= (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))))))));
                var_19 = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_1]), (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(-1LL)))) ? (((((/* implicit */_Bool) 344042802)) ? (var_5) : (((/* implicit */int) var_4)))) : (var_8))) >= (((((/* implicit */_Bool) max((var_14), (var_0)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) var_0)))))));
}
