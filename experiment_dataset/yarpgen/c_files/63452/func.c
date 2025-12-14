/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63452
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
    for (long long int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 3] [6ULL] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_4 [i_0 - 2] [(signed char)7] [i_0] [i_0]))))));
                    var_15 = (-(min((arr_2 [i_2] [i_2 - 3] [(signed char)4]), (arr_2 [i_2] [i_2 - 3] [i_2]))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4756231839721889752LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25821))) : (2233785415175766016LL)))) ? ((-(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_5 [i_0] [i_0] [i_0]))) != (min((-5578616593326278410LL), (((/* implicit */long long int) var_11))))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((var_5) >> (((((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) arr_1 [i_1] [i_1])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_5 [(unsigned short)3] [(unsigned short)3] [i_0 + 3])) : (arr_2 [i_0] [i_1] [i_2]))))) - (18446744073702556621ULL))))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned int) var_9)))), (((unsigned int) var_1))))) ? (((((/* implicit */_Bool) ((int) 18116328782135871050ULL))) ? (((/* implicit */long long int) var_8)) : (max((((/* implicit */long long int) (short)25821)), (-5578616593326278410LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)25821)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */short) (~((~(-2233785415175766017LL)))));
                                arr_23 [i_5] [i_5] = ((/* implicit */int) ((unsigned int) max((max((var_5), (((/* implicit */unsigned long long int) arr_21 [i_5])))), (((/* implicit */unsigned long long int) var_10)))));
                                var_19 = ((/* implicit */short) arr_15 [0ULL] [i_5]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (min((min((((/* implicit */unsigned int) arr_13 [i_4] [6U] [i_3] [i_3])), (283871901U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((((((-181151486) + (2147483647))) << (((((-5578616593326278410LL) + (5578616593326278427LL))) - (17LL))))) | ((~(((/* implicit */int) var_12))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_12);
}
