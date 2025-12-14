/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65086
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 -= ((unsigned char) (+(((/* implicit */int) arr_6 [(unsigned short)10]))));
                                arr_14 [i_0 + 3] [i_1] [i_2 + 1] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_4 - 1]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3])) : (((/* implicit */int) var_11)))) != (((/* implicit */int) arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]))))) : (((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0 + 3])) : (((/* implicit */int) var_0))))));
                                arr_15 [i_0] [i_0 + 2] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_4)))) ? (max((var_6), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) var_5))));
                                arr_16 [i_0] = ((/* implicit */unsigned short) min((((unsigned char) arr_5 [i_2] [i_2 - 2] [i_2 + 1] [i_2 + 1])), (var_9)));
                                var_14 -= ((/* implicit */short) ((unsigned long long int) (((+(var_6))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    var_15 = ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_5 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1])))) > (((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3] [i_1] [i_2])), (var_2)))) ? (((((/* implicit */int) (short)10067)) << (((((((/* implicit */int) (short)-19862)) + (19887))) - (17))))) : (((/* implicit */int) var_5)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((unsigned short) ((((/* implicit */int) arr_18 [i_0] [i_5 - 3] [i_0 + 1])) >= (((/* implicit */int) max((var_1), (((/* implicit */short) arr_9 [i_6] [i_5] [i_2] [i_0]))))))))));
                                var_17 = ((/* implicit */unsigned char) var_11);
                                arr_23 [i_0 + 1] [i_5] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_17 [i_0] [i_1] [i_1] [i_5 + 1] [i_6]))) >= ((-(var_2)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_10)))) ? (((var_10) * (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 + 2])))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) arr_1 [i_1]))))) ? (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)))) : (arr_17 [i_0] [i_0 + 3] [i_2 - 1] [i_2] [i_0]))) * (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
    } 
}
