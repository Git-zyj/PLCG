/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6904
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
    var_17 = ((/* implicit */signed char) var_9);
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 391943114U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_4), (((/* implicit */long long int) 3903024195U)))), (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) (+(391943124U)))), (var_0)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_15);
                arr_7 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) != (3903024191U)))), (min((var_0), (((/* implicit */long long int) arr_0 [i_0])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                        arr_13 [i_3] [i_0] = ((/* implicit */unsigned short) (-((+(3903024206U)))));
                        var_20 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_3] [i_3 - 4]))));
                        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (var_15) : (var_4)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_21 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3749087136077834871LL))) >> (((arr_8 [i_0] [i_0] [i_0] [i_0]) + (7125742716816834276LL))));
                        var_22 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0]) : (((/* implicit */int) var_12))))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_2] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(391943107U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_5])) ? (((/* implicit */unsigned int) var_8)) : (2074801215U)))));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) -4502209751601707141LL);
                    }
                    for (long long int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6 - 2] [i_6 + 3])))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */int) (signed char)56))))) | (arr_15 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 2]))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(var_3))))));
                        var_27 = ((/* implicit */long long int) var_5);
                    }
                    arr_24 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                }
            }
        } 
    } 
}
