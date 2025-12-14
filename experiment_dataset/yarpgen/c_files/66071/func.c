/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66071
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
    var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) >= (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))))) : (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((arr_4 [i_0]) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_10 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 2] [i_1 + 3] [i_3] [i_1 + 3] [i_3 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_1 + 3] [i_3 + 2] [i_1 + 3] [i_2] [i_3]))) : (203194673U)))) ? ((~(67108863U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 - 2] [i_1 - 3] [i_3] [i_4] [i_0] [(unsigned short)0])) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_8 [i_1 + 3] [i_3 - 2] [i_1 - 1] [i_3] [i_1 - 1] [i_1 + 3] [i_2]))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1 + 3] [i_4]) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 3] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 4] [i_4]))))) ? ((-(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_2])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 4] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_4]))))));
                                arr_11 [i_0] [i_4] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_1 [i_1 + 4] [i_1 + 4])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1 - 1]))) ? (((/* implicit */int) max(((_Bool)1), (arr_4 [i_1 - 2])))) : (((arr_4 [i_1 - 3]) ? (((/* implicit */int) arr_4 [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 + 3]))))));
                                arr_18 [i_5] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))));
                                arr_19 [i_0] [i_5] [(unsigned short)19] [i_5] [i_6] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) 35184372087808ULL);
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))) ? (max((18113850241557896080ULL), (35184372087808ULL))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))) : (((/* implicit */unsigned long long int) min((arr_13 [i_1 - 3] [i_1 + 1]), (arr_13 [i_1 - 3] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                arr_28 [i_7] = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) arr_5 [i_7] [i_7] [i_8])))));
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_24 = (+(((((/* implicit */_Bool) arr_24 [i_8] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_26 [i_7])) ? (arr_32 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (8070450532247928832LL))))))));
                            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215LL)) ? (4227858430U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            /* LoopSeq 2 */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (+((-((+(9223372036854775801LL))))));
                                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) << ((((+(-9223372036854775801LL))) - (-9223372036854775802LL)))));
                                var_27 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 847361668U)) ? ((~(((/* implicit */int) arr_12 [i_7] [i_8] [i_9 - 2] [i_10] [i_11])))) : ((-(((/* implicit */int) arr_5 [i_9] [i_9] [i_9]))))))) | ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (4243045097U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_8] [i_9]))))))));
                                arr_37 [i_7] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_10])))) ? (((((/* implicit */_Bool) arr_33 [i_9 + 1] [i_9 - 1])) ? (15ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_9 - 1] [i_9 + 1] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9] [i_11]))) : (4227858430U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_8] [i_9 + 1] [i_10]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (arr_6 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-12)))))) : (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */unsigned long long int) -1797214702)) : (arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
                                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) == (67108857U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)4273)) && (((/* implicit */_Bool) (short)-1)))))) : (arr_15 [i_7] [i_8] [i_9 - 2] [i_7] [i_11] [i_10] [i_7])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108865U)) ? (arr_24 [i_9 - 2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) (+(9062503273685651946LL)))) : (((18264100556604075337ULL) ^ (((/* implicit */unsigned long long int) arr_13 [i_7] [4LL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((-8070450532247928833LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7]))))))))))))));
                            }
                            for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                            {
                                var_29 = min(((-(-6539406621263011499LL))), (((((/* implicit */_Bool) (signed char)-126)) ? (-618395064331226386LL) : (127LL))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((_Bool) arr_5 [i_9 + 1] [i_9] [i_7])) ? (((((/* implicit */_Bool) 4227858430U)) ? (((/* implicit */int) arr_5 [i_9 - 2] [i_8] [i_8])) : (((/* implicit */int) arr_5 [i_9 - 2] [i_8] [i_8])))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-20159)) : (((/* implicit */int) (unsigned short)62159)))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) var_1);
}
