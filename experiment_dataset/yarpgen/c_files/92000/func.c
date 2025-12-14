/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92000
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 4050962947U)))) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    var_22 = ((/* implicit */unsigned char) (~(var_15)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    var_23 -= ((/* implicit */int) ((max((arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 1]), (452125695U))) / (arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 1])));
                    var_24 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_2 - 1] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 2])) > (((/* implicit */int) arr_13 [i_2 - 1] [i_3] [(_Bool)1] [i_1 + 1]))))) * (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_1 - 2]))))));
                                arr_15 [(unsigned char)0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)23146));
                                arr_16 [(short)11] [i_1] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) arr_11 [11] [i_1]);
                                arr_17 [0U] [i_1] [i_1] [0U] [i_1] [0U] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) != (-1840582748)))) == (((/* implicit */int) min((arr_13 [3U] [i_1] [(signed char)3] [(unsigned char)6]), (((/* implicit */unsigned char) arr_8 [i_2] [(unsigned char)11] [i_2] [i_2])))))))) * (min((((arr_5 [i_1 + 4] [i_3]) ? (((/* implicit */int) (unsigned char)19)) : (1072008220))), (((int) arr_10 [i_0] [(unsigned short)3] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    arr_18 [8U] [i_1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48683))) * (12411032323819179187ULL))) : (((/* implicit */unsigned long long int) (~(-1001350599))))));
                }
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)176)) ? (((((/* implicit */_Bool) -1840582748)) ? (arr_11 [i_1 - 2] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25549))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1840582759)) == (var_3))))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_26 [i_5] [(_Bool)1]))));
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] [i_7] = (!(((/* implicit */_Bool) (~(((unsigned int) var_17))))));
                                var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((unsigned int) (unsigned char)73)) : (((/* implicit */unsigned int) (-(min((arr_14 [i_0] [i_1] [i_5] [i_6] [i_5] [i_7 - 2]), (((/* implicit */int) arr_7 [i_1] [i_1] [i_6] [i_7])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
