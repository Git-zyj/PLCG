/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81115
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_6))));
                                arr_14 [i_1] [i_2] [(signed char)3] [i_1] = ((/* implicit */long long int) ((_Bool) ((_Bool) ((((/* implicit */_Bool) (signed char)-126)) && (((/* implicit */_Bool) (signed char)-66))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 - 2] [i_1] [i_1] [i_2] = arr_7 [i_1] [i_2];
                    arr_16 [i_1] = ((/* implicit */signed char) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_16 = (!(((/* implicit */_Bool) arr_9 [i_0] [i_1])));
                                var_17 = ((/* implicit */short) var_14);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((int) arr_6 [i_0] [10] [i_1])), (((var_9) ? (((/* implicit */int) arr_4 [(short)2] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_6] [i_1] [i_6]))))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (signed char)122)) / (var_3)))))) : (arr_9 [i_0 - 1] [i_1 - 1])));
                            }
                        } 
                    } 
                    arr_23 [i_0 + 1] [i_1 + 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16383ULL))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_10);
}
