/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99147
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
    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 23; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((unsigned short) ((((/* implicit */_Bool) (~(var_11)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_5 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (unsigned short)65508)))));
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_0] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(short)21] [(signed char)1] [i_0 + 2])) ? (var_11) : (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 3] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1 - 1] [i_0] [i_2] = ((var_6) / (min(((+(var_11))), (((long long int) (unsigned short)19077)))));
                }
                arr_17 [i_0 - 3] [i_0] [i_0 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_7), (var_7)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_8)));
}
