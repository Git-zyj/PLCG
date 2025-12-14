/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74200
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_0] [i_4 - 2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) * ((~(((/* implicit */int) (signed char)74))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((min(((~(((/* implicit */int) (signed char)-90)))), (((((/* implicit */int) (unsigned char)4)) | (((/* implicit */int) (signed char)89)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((short) (_Bool)1))))))));
                                arr_15 [i_0] [i_0] [2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (unsigned char)254))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (arr_7 [i_0] [9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)8191))))));
                                arr_16 [i_0 + 1] [i_3] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_9 [i_4 + 1])))) <= (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)511))))))));
                                arr_17 [i_0] [i_1] [i_4 + 2] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) var_13)))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                            }
                            arr_18 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 16490061729877630619ULL)) && (((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (var_4))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 3; i_5 < 16; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0 - 2] [i_0] [i_5 - 1] [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) ^ (9223372036854775808ULL)))))));
                                arr_28 [i_0] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) -675866115))) ? (((/* implicit */unsigned int) 0)) : (2598955955U))) == (4294967293U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) min((((var_5) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-1)))), (min((-675866126), (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_9)) : (var_13)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))));
}
