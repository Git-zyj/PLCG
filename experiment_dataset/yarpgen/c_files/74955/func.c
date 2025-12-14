/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74955
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_1)))))) : (((((/* implicit */_Bool) 1687035596U)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_11 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-26157))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_12 |= ((/* implicit */signed char) (!(((arr_8 [i_2 - 1] [i_4] [i_4]) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))));
                            var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((arr_9 [i_2 + 1] [(_Bool)1] [i_2 + 1] [(_Bool)1] [i_3 - 1]) * (arr_9 [i_2 + 1] [i_2 + 1] [i_3] [i_3] [i_3 + 1]))) : (((arr_9 [i_2 + 1] [i_3] [i_3] [i_3] [i_3 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2] [(short)9] [i_3] [i_3 - 2])))))));
                            arr_14 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) max((var_3), (var_3)))) ^ (((/* implicit */int) var_9))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_18 [i_0] [(unsigned short)5] [i_5] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 36028797018963967LL)) || (((/* implicit */_Bool) 140737488355327ULL)))) ? (960577621U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2607931696U)) || (((/* implicit */_Bool) -536941467))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)26157), (((/* implicit */short) var_3)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3 - 1] [i_1] [i_3 - 1] [(short)5])) && (((/* implicit */_Bool) arr_11 [i_3 - 2] [i_1] [i_2] [i_3] [i_2 - 1])))))));
                            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)-26183)))) - ((+(((/* implicit */int) var_8))))))));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((443750734981971366ULL) & (((/* implicit */unsigned long long int) (~(max((arr_9 [i_0] [i_1] [i_1] [i_3] [i_5]), (((/* implicit */unsigned int) (short)22820))))))))))));
                            var_15 = ((/* implicit */unsigned int) var_1);
                            arr_20 [i_0] [i_0] [i_0] [i_2] [(unsigned char)9] [i_5] |= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) arr_16 [i_1] [i_2 - 1] [i_3 + 1] [(short)9] [i_5])) | (var_7)))));
                        }
                        for (signed char i_6 = 4; i_6 < 19; i_6 += 2) 
                        {
                            arr_24 [i_0] = ((((var_6) || (((/* implicit */_Bool) 2607931698U)))) ? (((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_3 + 1]), (((/* implicit */unsigned int) var_6))))) : (((arr_5 [i_2 + 1]) / (max((var_10), (((/* implicit */unsigned long long int) var_5)))))));
                            var_16 -= ((/* implicit */_Bool) (((~(arr_5 [i_6 - 4]))) / (((((/* implicit */_Bool) arr_5 [i_6 + 3])) ? (arr_5 [i_6 - 3]) : (arr_5 [i_6 - 3])))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [(unsigned short)0] [(unsigned short)0] [i_2] [i_3] [i_7])) ? (465063346U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26156))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : ((+(arr_15 [i_3] [i_2 - 1])))));
                            var_18 = ((/* implicit */unsigned long long int) (~((((_Bool)0) ? (arr_8 [i_2 - 1] [i_2 + 1] [i_3 + 2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_7] [i_7] [i_0] [i_7] [i_7])))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((max((((2147483636) - (((/* implicit */int) arr_12 [i_2 + 1] [i_3] [i_2 + 1] [i_0] [i_0])))), (((/* implicit */int) var_6)))) * ((+(((/* implicit */int) (_Bool)0))))));
                            arr_32 [i_2 - 1] [i_2 - 1] [i_2] [(_Bool)0] [i_2] [i_2] [(short)4] |= ((/* implicit */unsigned long long int) (unsigned short)0);
                            var_20 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35926)) ? (16777215U) : (arr_29 [i_8])))) ? (((/* implicit */int) arr_25 [i_3 + 2] [i_1])) : ((~(((/* implicit */int) var_8))))))) - (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 2] [i_8]));
                            arr_33 [i_0] [i_1] [20U] [i_3] [(_Bool)1] [i_1] |= ((/* implicit */int) (~((+(max((arr_15 [i_0] [i_8]), (((/* implicit */unsigned int) var_8))))))));
                        }
                    }
                } 
            } 
            arr_34 [i_1] = (-(((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) var_0))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            arr_39 [i_0] [i_0] = ((/* implicit */unsigned char) ((var_10) / (max((((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9])) ? (arr_21 [i_0] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) arr_28 [20U] [i_9])))), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_9] [i_9]))))));
            arr_40 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_8 [i_9] [i_9] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) | (var_0))))))) < (((arr_5 [i_0]) >> (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_1)))))))));
        }
        var_21 = ((/* implicit */int) (unsigned char)0);
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 10; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (long long int i_12 = 3; i_12 < 8; i_12 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (~(((int) (~(4294967295U))))));
                    var_23 = ((/* implicit */int) min((var_23), (max((var_0), (((/* implicit */int) ((((/* implicit */int) max((arr_25 [i_11] [i_11]), (((/* implicit */short) var_3))))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)48)) || (((/* implicit */_Bool) (signed char)-89))))))))))));
                    arr_48 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_7);
}
