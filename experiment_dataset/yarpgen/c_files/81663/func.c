/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81663
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */int) (_Bool)1)) >> (((var_14) + (1433326596))))) << (((arr_2 [i_0 - 1]) - (1686820246))))) : ((+(arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_1)) & ((-2147483647 - 1)))) | ((~(arr_2 [i_0]))))), (((var_16) | (((/* implicit */int) (_Bool)0))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_9))))))) <= (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_1 [i_0])))) ? (arr_2 [i_0 + 1]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (275469679)))))))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) var_13)) * (((/* implicit */int) var_6)))) + (((/* implicit */int) var_8))))) / (var_2)));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            {
                arr_11 [5] [i_2] [i_2] = var_16;
                var_21 = ((/* implicit */_Bool) max((var_21), (((((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1])) && (((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2])) ? (arr_6 [i_2 - 2] [i_2]) : (arr_6 [i_2 - 2] [i_1]))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_20 [i_1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_7))))))));
                            arr_21 [i_3] [i_4] = var_7;
                            var_22 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_17)))) * (((((/* implicit */_Bool) arr_0 [i_2 - 2] [i_2 - 2])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
