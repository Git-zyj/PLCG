/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63714
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
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */long long int) min((var_13), (var_0)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (max(((unsigned char)45), (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) != (-7279851830498158081LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) >= (var_0))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))) - (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_10)))))));
    }
    for (unsigned char i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (arr_4 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1 - 4] [i_1 - 4])))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) 9513921004537845752ULL);
        arr_7 [(short)6] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [(unsigned char)4] [i_1])), (var_0)))) ? (max((7279851830498158081LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 4] [i_1 - 1]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -7279851830498158088LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_8 [i_2] [i_2])) & (var_7)))) : (max((var_11), (((/* implicit */long long int) arr_8 [11U] [11U]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) 7279851830498158087LL)) * (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [(short)6] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_4] [i_2])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_3 + 3] [i_3] [i_3]))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) (~(arr_12 [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_19 [i_2] [i_3 + 1] [i_4] [i_5] [i_6])) | (((/* implicit */int) (short)0)))))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_2] [i_2])) - (((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_2]))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_3] [8U] = ((/* implicit */long long int) arr_17 [i_3] [i_3 - 3] [i_3 + 3] [i_3 - 2] [i_3 + 1]);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (arr_14 [i_2])))) || ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))));
        arr_24 [i_2] = ((/* implicit */signed char) -7279851830498158082LL);
    }
}
