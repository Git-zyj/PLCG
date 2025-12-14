/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86197
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) min(((+(((/* implicit */int) (unsigned char)86)))), (((((/* implicit */int) arr_6 [i_0 + 1] [i_3] [i_3])) * (((/* implicit */int) arr_6 [i_0 + 2] [(short)4] [(short)4]))))));
                                var_15 -= ((/* implicit */long long int) max(((+(arr_5 [i_3 - 2]))), (((/* implicit */unsigned int) var_10))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((long long int) var_7))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_14 [i_0 - 4] [i_0 - 4] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4))), (((/* implicit */long long int) ((unsigned char) -5951325000488200974LL)))));
                                var_16 = ((/* implicit */unsigned char) ((arr_5 [i_0]) << ((((-(((/* implicit */int) (short)-16649)))) - (16630)))));
                                arr_20 [i_0] [5ULL] [i_2] [i_2] [8LL] [i_6] = ((/* implicit */short) min((arr_10 [i_0] [i_5] [i_2] [i_5] [i_6]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)4] [i_2]))) : (var_12))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0 - 3] [3LL] [i_0 - 3] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_13)) : (var_6))))))), (((((/* implicit */int) arr_6 [(short)4] [i_0 - 4] [(short)4])) - (((/* implicit */int) arr_6 [(unsigned char)13] [i_0 - 2] [i_1]))))));
                }
                var_17 = ((/* implicit */short) (-(max((((/* implicit */int) max((var_5), (var_2)))), ((+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
}
