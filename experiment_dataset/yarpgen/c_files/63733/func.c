/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63733
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)23254)) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42281)))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_14 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)23254))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))), (min((arr_2 [i_0 - 1] [i_3]), (((/* implicit */unsigned long long int) arr_1 [i_3]))))))));
                        var_15 ^= ((/* implicit */unsigned long long int) ((signed char) (unsigned char)0));
                        arr_9 [i_0] [i_0] [(unsigned short)5] [i_0] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) ((unsigned char) (short)-5285));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)23254);
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        var_16 = (unsigned char)255;
                        var_17 = ((/* implicit */long long int) (!(((_Bool) var_4))));
                        arr_14 [i_0] [i_0] [i_0] [i_4] [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_4 + 2])) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) min(((unsigned short)42282), (((/* implicit */unsigned short) (unsigned char)0)))))));
                        arr_15 [i_0] [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */int) 15204651123154710125ULL);
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((0ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)110))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42282)))));
                        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)145))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)146)) || (((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) (unsigned char)226))))))));
                        var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-27225))))))), (((unsigned int) arr_8 [i_0] [i_1] [i_2] [i_5] [i_5]))));
                    }
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */long long int) (-(1554490186)));
                        var_23 ^= ((short) (!(((/* implicit */_Bool) arr_5 [i_2 + 1]))));
                    }
                    for (short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 3] [i_2 - 1]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)146))))) ? (arr_19 [i_0] [2LL] [i_2] [2LL]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42281))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-9)), ((unsigned char)110)))) ? (arr_13 [i_0 + 2] [i_1] [i_1] [i_2] [i_7] [i_0 + 2]) : (((/* implicit */int) arr_16 [i_0 + 4])))))));
                        var_25 = ((/* implicit */short) min((var_8), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                        arr_24 [i_0] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)12984);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_2] [i_2] [i_9] = ((/* implicit */signed char) (~(var_8)));
                                arr_31 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((15668402817431184326ULL) < (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_8] [i_9])))))))));
                                var_26 = ((/* implicit */unsigned long long int) (unsigned short)52551);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 2; i_10 < 9; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 4; i_11 < 9; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 2; i_13 < 8; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */signed char) (~((+(117778510)))));
                                var_28 = ((/* implicit */unsigned short) 2778341256278367289ULL);
                            }
                        } 
                    } 
                    var_29 ^= ((/* implicit */_Bool) max((var_11), (((/* implicit */short) max(((unsigned char)183), (var_12))))));
                    arr_44 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2778341256278367290ULL), (((/* implicit */unsigned long long int) (short)-26373))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23253)) / (((/* implicit */int) (unsigned short)28008))))) : (((2778341256278367289ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44991)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-27))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)58))))), (max((((/* implicit */unsigned long long int) 1735945417)), (18446744073709551615ULL)))))));
                    var_30 ^= ((/* implicit */_Bool) var_5);
                }
            } 
        } 
    } 
}
