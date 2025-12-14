/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57957
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
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [i_0] [i_0] [i_1 + 1] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2565912561U)), (var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [2LL] [i_1 + 1] [i_2 - 1])) ? (arr_5 [i_0] [i_1 + 1] [i_2 + 2]) : (arr_5 [i_0] [i_1 + 1] [i_1 + 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (max((var_11), (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_2])))))))));
                                var_16 = ((/* implicit */unsigned char) min((arr_4 [i_0] [i_1] [i_2 + 1]), (((/* implicit */unsigned long long int) ((((var_11) == (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */_Bool) 966807958519448033LL)) ? (var_11) : (((/* implicit */int) (short)-12147)))))))));
                            }
                        } 
                    } 
                }
                var_17 ^= ((/* implicit */unsigned int) ((((arr_12 [i_1 + 1] [i_1 + 1]) - (((/* implicit */unsigned long long int) 1729054735U)))) / (arr_12 [i_1 + 1] [i_1 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)23371))) ? (((/* implicit */long long int) ((var_0) | (((/* implicit */int) (short)-2785))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1])) ? (-7089750257252495108LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_4)), (arr_6 [i_5] [i_1])))))) : (-1LL))))));
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_2)), (1729054735U)));
                            arr_17 [i_0] [i_1] [i_6] [i_5] [i_6] [i_6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */short) ((long long int) ((unsigned int) max((var_11), (((/* implicit */int) var_1))))));
    var_21 = ((/* implicit */unsigned long long int) 4194303U);
    var_22 = ((/* implicit */short) (((+(var_10))) + ((+(((var_8) - (var_8)))))));
}
