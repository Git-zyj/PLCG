/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82210
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) / (var_4)))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((max((var_5), (var_6))), (arr_3 [i_0] [i_0 + 1] [i_1])));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) * (((/* implicit */int) max((var_3), (((/* implicit */signed char) var_7))))))), ((+(((((/* implicit */int) (unsigned char)201)) | (((/* implicit */int) (signed char)65)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */int) var_9);
        /* LoopNest 3 */
        for (unsigned int i_3 = 3; i_3 < 8; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 7; i_5 += 2) 
                {
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_15 [i_2])))))));
                        var_13 = ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7))))))) / (((((/* implicit */_Bool) min((((/* implicit */short) arr_18 [i_2] [(unsigned short)7] [(unsigned short)7] [i_5] [i_5] [i_5])), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-119))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) ((unsigned int) arr_23 [i_4 + 1] [i_2]));
                            var_15 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_3))))));
                            var_16 = ((/* implicit */short) max((var_16), (var_1)));
                        }
                        for (short i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_4] [i_5] [i_7] = ((/* implicit */long long int) (-((((+(arr_23 [i_2] [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                            arr_28 [i_2] [(_Bool)1] [i_4 + 1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2326799719U)))) ? (((/* implicit */int) min((arr_22 [i_3] [i_5 + 3] [i_7] [i_7] [i_7 + 2] [i_7 - 1]), (arr_22 [i_4] [i_5 + 4] [i_5] [(signed char)10] [i_7 - 1] [i_7])))) : (min((((/* implicit */int) var_6)), (arr_20 [4] [i_5 - 1] [i_5] [i_5 - 1])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned char) (unsigned char)11)))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2009293236148902986ULL)) ? (((((/* implicit */_Bool) 3072U)) ? (arr_29 [i_2 + 2] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 1514057530U))));
            arr_32 [i_2] [i_8] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [9ULL] [i_2])), (arr_14 [i_2] [i_2 - 1] [i_2 + 4]))), (((/* implicit */unsigned long long int) ((arr_25 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 3] [i_2] [i_2]) / (arr_25 [(signed char)9] [i_2] [i_2 - 1] [i_2 + 3] [i_2 - 2] [i_2] [i_2]))))));
            arr_33 [i_2] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */int) (unsigned short)44298)), (1414913569))) / (((((/* implicit */_Bool) arr_2 [i_2 + 4] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_2 + 4] [i_2 + 4])) : (((/* implicit */int) var_1))))));
        }
    }
}
