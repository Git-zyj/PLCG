/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88159
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((((unsigned int) var_8)) * (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)15)))) <= (max((2147483647), (arr_0 [i_0] [(signed char)6]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [i_4] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((arr_10 [(short)3] [i_1] [i_2] [i_2] [i_4]) / (((/* implicit */long long int) var_6)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (max((arr_10 [i_4] [i_2] [i_2] [i_2] [i_0]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)113)), (arr_8 [i_2] [i_3] [i_2] [i_1] [i_2]))))));
                                arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((min(((+(arr_5 [i_0] [i_0] [i_2] [i_2]))), (min((arr_6 [i_0]), (((/* implicit */unsigned int) (short)(-32767 - 1))))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1))))))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) var_3);
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_10 = ((/* implicit */int) var_3);
    var_11 &= ((/* implicit */signed char) max((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_3))))), ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) (unsigned short)62584)))))))));
    var_12 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min(((short)-32750), (((/* implicit */short) (unsigned char)223))))) : (((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */signed char) min((var_6), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1949))) <= (4063664991U))))));
}
