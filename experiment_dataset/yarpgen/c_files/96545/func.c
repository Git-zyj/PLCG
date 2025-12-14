/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96545
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_2] [6LL] [(short)1] [i_2] [i_2] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_2] [i_3]);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_3]))));
                        var_18 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */long long int) max((arr_5 [i_0] [i_0] [i_2] [i_0]), (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_2]);
                    }
                    var_19 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            {
                arr_18 [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_5]);
                arr_19 [i_5] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_5])) < (((/* implicit */int) var_4))))) > (((arr_16 [i_5] [(short)4]) | (arr_15 [i_4] [i_5] [i_5])))))), (min((((/* implicit */int) arr_13 [i_4] [i_5])), (((var_12) << (((arr_15 [i_4] [i_4] [i_5]) - (880233340)))))))))) : (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_5])) < (((/* implicit */int) var_4))))) > (((arr_16 [i_5] [(short)4]) | (arr_15 [i_4] [i_5] [i_5])))))), (min((((/* implicit */int) arr_13 [i_4] [i_5])), (((var_12) << (((((((arr_15 [i_4] [i_4] [i_5]) - (880233340))) + (1772822834))) - (23))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (((((/* implicit */_Bool) var_10)) ? (6262268175714394014LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))))))));
}
