/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6328
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
    var_20 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (2199023255551ULL) : (10605322052185653211ULL))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_1)), (min((((/* implicit */unsigned short) var_14)), (var_2)))))), (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_10)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_5))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6020)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (6641882342687018678ULL)));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [(signed char)2] = ((/* implicit */long long int) (+(((arr_3 [i_2 - 1] [i_3]) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_2])) : (min((((/* implicit */int) arr_9 [i_0] [i_0])), (2147483647)))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_5 [i_0])))) : (((/* implicit */int) max((arr_10 [i_0] [i_1 + 1] [i_0] [i_0] [i_0] [i_1] [i_2 - 1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 + 1] [i_2]))))))) == (((/* implicit */int) arr_8 [i_0] [7LL] [i_1 + 1] [i_1 + 1] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_2] = ((/* implicit */short) arr_13 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_6 - 1]);
                                arr_22 [i_6 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_7 [i_5 + 1]))))));
                                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_19 [i_6 + 1] [i_2] [i_2 - 1] [i_2] [i_0]), (arr_19 [i_6 + 1] [i_2] [i_2 - 1] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((_Bool) 14623180925770034485ULL)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) var_3);
}
