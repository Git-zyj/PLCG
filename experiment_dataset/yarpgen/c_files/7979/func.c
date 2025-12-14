/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7979
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
    var_15 = ((/* implicit */int) (((!(((((/* implicit */_Bool) (short)8192)) && (((/* implicit */_Bool) (unsigned char)25)))))) && (((/* implicit */_Bool) var_11))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) ? (min((((/* implicit */long long int) (short)-13694)), (3464693103480100257LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) (+((-(((/* implicit */int) arr_3 [i_0]))))));
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3 - 1] [i_4])) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_2] [i_3 - 1] [i_3 - 2])), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1]))))))))) ? (((((((/* implicit */int) (short)-13675)) >= (((/* implicit */int) (short)-3819)))) ? (((/* implicit */long long int) var_2)) : ((+(arr_7 [i_2] [i_2] [i_2 + 4] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1] [i_2 + 1] [i_3 - 2])) || (((/* implicit */_Bool) (short)-13668))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) (((~(var_2))) > ((+(var_10)))))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) * (((((/* implicit */long long int) min((-837873019), (-837873019)))) / (var_6)))))));
            }
        } 
    } 
}
