/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80435
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(6098780094234519671ULL)));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [(signed char)12])))) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0] [i_0])), (var_6)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)19693))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */short) ((max((var_7), (((/* implicit */unsigned long long int) var_11)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~(max((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_1)))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_3) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)2209)) : (((/* implicit */int) arr_9 [i_2 + 1])))))))));
                                var_15 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9879))) - (var_7))), (((/* implicit */unsigned long long int) var_4)))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) 2016624033))), (min((((/* implicit */unsigned int) (signed char)-18)), (152105967U))))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_3 - 1]))))) ? ((~(9ULL))) : (((/* implicit */unsigned long long int) ((long long int) 3106268699121209755ULL)))));
                            }
                        } 
                    } 
                    arr_21 [i_4] [i_2 - 1] |= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (short)11367)) - (((/* implicit */int) max((arr_20 [i_3]), ((unsigned short)59719)))))));
                }
            } 
        } 
    } 
}
