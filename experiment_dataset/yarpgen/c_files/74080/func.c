/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74080
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((long long int) arr_2 [i_2] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_2 [i_0] [i_0] [12U]))), (((/* implicit */unsigned int) arr_4 [(unsigned short)8] [i_2] [(unsigned char)1] [(unsigned short)8]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [17U] [(short)5] [6LL])) * (((/* implicit */int) arr_1 [13ULL] [8]))));
                                arr_11 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) arr_0 [i_1] [i_4 - 1])) ^ (((/* implicit */int) var_13)))), (((/* implicit */int) arr_0 [(short)0] [i_1])))), (((/* implicit */int) max((arr_10 [i_1] [i_1]), (arr_10 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_2] [9ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_15)) > (var_5)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_5);
}
