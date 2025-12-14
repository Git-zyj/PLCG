/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87964
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
    var_10 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_2] = ((((/* implicit */_Bool) 163325876)) ? (arr_5 [(signed char)4] [15U] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    arr_10 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                    arr_11 [0U] [i_2] = ((/* implicit */unsigned char) var_1);
                }
                for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    arr_14 [i_3] [(short)6] [4] [i_0] = ((/* implicit */unsigned int) var_4);
                    arr_15 [i_0] [i_1] [14ULL] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1]))))));
                    arr_16 [i_0 + 1] [i_1 - 4] [i_1] = ((/* implicit */unsigned char) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            {
                                arr_22 [i_3 - 1] [i_3 - 1] [i_3] [i_4] = ((max(((-(var_4))), (((/* implicit */unsigned long long int) (unsigned short)1008)))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0]))))));
                                arr_23 [7U] [i_1] [i_3 + 2] [i_4] [i_5 - 1] [i_1 - 4] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_7 [i_0 + 1] [i_3 + 1] [i_5 - 1]), (((/* implicit */unsigned char) arr_8 [i_0 - 2] [i_0] [i_3 + 2] [i_4 + 2]))))) >= (((((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_3 - 1] [i_4 - 2])) - (((/* implicit */int) arr_7 [i_0 + 1] [i_3 + 2] [i_5 - 1]))))));
                                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)196))))) <= (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) : (var_9)));
                                var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-31)), (((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned int) var_0)) : (min((((/* implicit */unsigned int) var_0)), (2897728990U)))))));
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    arr_26 [i_0] [i_1] [(unsigned char)16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) (unsigned short)1008)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_6 - 1] [i_0 + 1] [i_0 - 1] [i_6])))))) ? (((((((/* implicit */_Bool) (unsigned short)62706)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31))) : (var_8))) % (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65519), (((/* implicit */unsigned short) arr_7 [i_6] [i_1] [i_0 - 2])))))))) : (((/* implicit */long long int) var_0))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_32 [i_6] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_24 [i_1] [3ULL] [i_1] [i_7 - 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_24 [i_0 - 1] [i_7] [i_7] [i_7 - 1])))), (((((/* implicit */int) (signed char)14)) & (((/* implicit */int) arr_24 [(unsigned short)11] [i_6] [i_6] [i_7 - 1]))))));
                                arr_33 [i_6] [i_8] = (unsigned short)52437;
                                arr_34 [i_0 - 1] [i_8] [i_0] [i_0] [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16806)) ? (arr_13 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(var_9))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) <= (arr_25 [i_0] [i_1] [i_6] [i_8]))))))))));
                                arr_35 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */short) (((+(((/* implicit */int) arr_4 [i_0])))) - ((-(((((/* implicit */_Bool) -1670839095846127439LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)22284))))))));
                            }
                        } 
                    } 
                    arr_36 [i_1] [1] [i_6 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))) % (min((min((((/* implicit */unsigned long long int) var_7)), (16140901064495857664ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [0ULL] [i_0]))) % (var_8))))))));
                    var_14 |= ((/* implicit */signed char) 268434432U);
                    arr_37 [i_0] = ((/* implicit */unsigned long long int) ((((-1) ^ (((/* implicit */int) arr_2 [i_1 - 4])))) * (((/* implicit */int) ((min((var_2), (((/* implicit */int) var_1)))) == (((/* implicit */int) (unsigned short)21479)))))));
                }
                arr_38 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((((2305843009213693973ULL) % (((/* implicit */unsigned long long int) 49152U)))) * (((/* implicit */unsigned long long int) (-(var_3)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2954705738U))))))));
            }
        } 
    } 
}
