/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79531
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
    var_18 = ((/* implicit */unsigned short) ((((var_13) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) var_10);
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min(((-(var_0))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)255)))))))))));
                        var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                        var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (1023U) : (((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_2 - 1])) : (((/* implicit */int) var_8))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((63U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) >= (((9223370937343148032ULL) >> (((-6080981988898178952LL) + (6080981988898178961LL)))))));
                        var_24 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) min((4194304U), (((/* implicit */unsigned int) var_13))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (unsigned char)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 18048611681110284232ULL)))))) : (min((var_2), (((/* implicit */unsigned long long int) arr_2 [i_2] [(unsigned char)0]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)1)))))));
        arr_14 [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) min((arr_0 [i_4 - 1]), (arr_0 [i_4 + 1]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_24 [i_5] [i_5] [i_5] [i_8] [i_6]);
                        var_26 = ((/* implicit */short) var_3);
                        arr_26 [i_8 - 1] [i_5] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_15) ? (var_11) : (2592724374636697693LL)))))) / (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_15)), ((unsigned char)8))))) - (((arr_16 [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))))));
                    }
                    arr_27 [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) -361292747)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) - (((/* implicit */int) var_1)))) <= ((-(((((/* implicit */_Bool) arr_19 [i_6])) ? (var_0) : (((/* implicit */int) (unsigned short)65535))))))));
                    var_27 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) arr_20 [i_7] [i_6] [(unsigned short)15] [i_5])) : (arr_16 [i_6])))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)8)) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_14)), (var_4)))) ? (arr_21 [10] [i_6] [10]) : (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) max((var_5), (((/* implicit */short) (unsigned char)8))))) : (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 4; i_9 < 23; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [i_5] [i_5] [i_5] = ((/* implicit */short) var_10);
                        var_29 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)27480)))), ((((~(((/* implicit */int) arr_29 [i_5] [i_6] [i_9] [i_9] [i_7])))) & ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_14))))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((((arr_21 [i_5] [i_6] [i_7]) / (arr_21 [i_5] [i_6] [18LL]))), (((arr_21 [i_5] [i_6] [i_6]) / (arr_21 [i_5] [i_6] [i_9 + 2]))))))));
                        arr_33 [i_9 + 1] [i_5] [i_5] [i_5] [i_5] [i_5] = 536608768;
                    }
                    for (long long int i_10 = 4; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -361292727)) ? (arr_31 [i_5] [i_5] [i_5]) : (min((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_8))))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12))))))));
                        arr_37 [i_6] &= arr_35 [i_6];
                        arr_38 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_14))))));
                    }
                }
            } 
        } 
    } 
}
