/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85887
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-801572416)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 2])) ? (((/* implicit */long long int) arr_0 [i_1])) : (min((arr_4 [i_1] [i_1] [i_0]), (arr_2 [i_0]))))), (((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_1]), (arr_1 [i_0] [i_1])))) ? (((((/* implicit */_Bool) 856501842)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)38))) : (6611107601340873784LL))) : (((/* implicit */long long int) (-(arr_0 [i_0]))))))));
                var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_1 + 1])), (arr_2 [16]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((arr_3 [i_0 + 1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(signed char)19]))) : (arr_4 [i_0] [(unsigned char)8] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)4] [(_Bool)1])))))))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_1 + 1]) ? (arr_4 [i_0 + 1] [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_4 [i_0] [i_0] [i_0])))) ? (((((arr_4 [i_0] [i_1] [9LL]) + (9223372036854775807LL))) << (((arr_0 [8LL]) - (3943227108U))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0])) << (((((/* implicit */int) arr_5 [i_1] [i_0 - 1])) - (17)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [(short)0] [(_Bool)1])))) <= (((((/* implicit */_Bool) arr_0 [(signed char)10])) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_1 + 1]))))))))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((_Bool) max((min((arr_1 [i_0] [i_1]), (((/* implicit */long long int) arr_0 [i_1])))), (((/* implicit */long long int) arr_3 [i_0] [i_0 - 1]))))))));
            }
        } 
    } 
}
