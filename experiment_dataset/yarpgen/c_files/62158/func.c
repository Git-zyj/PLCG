/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62158
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_2 [i_1] [i_1]) <= (arr_2 [i_0] [i_1]))) ? (((arr_5 [i_0] [i_1] [i_1]) >> (((arr_5 [i_1] [i_0] [i_0]) - (17921792037316889761ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((arr_4 [i_1] [i_1]) - (2000633394U)))))))))) : (((arr_2 [i_1 - 2] [i_1 - 1]) - (arr_4 [i_1] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_2 [i_1] [i_1]) <= (arr_2 [i_0] [i_1]))) ? (((arr_5 [i_0] [i_1] [i_1]) >> (((arr_5 [i_1] [i_0] [i_0]) - (17921792037316889761ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((((arr_4 [i_1] [i_1]) - (2000633394U))) - (3351373003U)))))))))) : (((arr_2 [i_1 - 2] [i_1 - 1]) - (arr_4 [i_1] [i_0]))))));
                var_20 *= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1] [i_1 + 1])) ? (arr_5 [i_1 - 3] [i_1] [i_1 - 3]) : (arr_5 [i_1 + 1] [i_1] [i_1 - 3]))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (var_13) : (((/* implicit */int) var_2)))))));
    var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_16))))))) ? ((-(((long long int) var_18)))) : (((/* implicit */long long int) min((((((/* implicit */int) var_15)) << (((((/* implicit */int) var_17)) - (9890))))), (((((/* implicit */int) var_1)) - (var_13))))))));
}
