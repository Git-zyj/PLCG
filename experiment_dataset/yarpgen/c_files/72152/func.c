/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72152
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (min((var_2), (var_3)))))) ? (max((((/* implicit */int) ((_Bool) var_10))), (min((var_7), (var_5))))) : (((/* implicit */int) var_9))));
    var_14 = min((-657196030542856418LL), (((/* implicit */long long int) (_Bool)1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))), (((/* implicit */long long int) min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_1] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [9LL])) && (((/* implicit */_Bool) arr_2 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 += (((!(((/* implicit */_Bool) arr_4 [i_1] [(short)10])))) || (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_7)))))));
                                arr_13 [(short)5] [(short)5] [(signed char)1] [i_0] [(_Bool)1] [4LL] [9LL] = ((/* implicit */unsigned long long int) arr_2 [i_0] [(short)0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
