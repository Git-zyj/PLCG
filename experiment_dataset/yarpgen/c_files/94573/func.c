/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94573
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_6))) : (((/* implicit */int) var_10)))) / (404346602))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32615)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [14])) : (((/* implicit */int) (unsigned short)96)))), (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */short) (-((-(((int) var_10))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))) >> (((((arr_4 [i_0 - 2] [i_0 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) - (87561U)))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((arr_4 [i_3] [i_3]), (((/* implicit */unsigned int) var_18))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32750))) / (var_5))) : (((/* implicit */unsigned int) arr_5 [i_3] [i_3]))))));
        var_23 = ((/* implicit */short) (~((+(((((/* implicit */int) (unsigned short)57737)) - (var_6)))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_24 |= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)27597))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_5] [i_6])), (var_15))))) + (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) arr_5 [i_6] [i_6])) : (arr_4 [i_6] [i_4]))))));
                        var_25 -= ((/* implicit */unsigned short) min((((arr_6 [i_4] [i_6]) - (arr_6 [i_6] [i_6]))), (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_6] [i_5]) : (((/* implicit */int) arr_9 [(short)8] [i_6]))))));
                        var_26 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4007342852U)) ? (arr_6 [i_3] [i_3]) : (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_3] [i_3])) : (((/* implicit */int) (signed char)119)))), ((+((-(var_9))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        var_27 = var_4;
        /* LoopSeq 1 */
        for (int i_8 = 3; i_8 < 9; i_8 += 2) 
        {
            arr_23 [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65448)) ? (((/* implicit */int) (signed char)-118)) : (arr_13 [i_7] [i_7])))))) ? (1779069455) : (((/* implicit */int) arr_3 [i_7] [14] [i_7]))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (((/* implicit */int) arr_12 [i_8 + 1] [i_8])) : (((/* implicit */int) (unsigned short)57724))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_2))));
            arr_24 [(short)3] [(short)3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_19 [i_8])) ? ((+(var_0))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8 + 2] [i_8 - 2] [i_7])) ? (((/* implicit */int) (unsigned short)84)) : (arr_16 [i_8 - 3] [i_8 - 3] [i_8]))))));
        }
    }
    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        var_30 ^= ((/* implicit */unsigned short) arr_2 [(unsigned short)1]);
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            arr_29 [i_9] [i_10] = ((arr_5 [i_9] [i_10]) / (max((arr_7 [i_10] [i_9 - 1] [i_9]), (((int) arr_25 [i_10] [i_9])))));
            arr_30 [i_10] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_10]))) ? (max((arr_4 [i_10] [i_9]), (((/* implicit */unsigned int) 2147483643)))) : (((/* implicit */unsigned int) ((arr_7 [(unsigned short)8] [i_9] [(unsigned short)8]) << (((var_4) - (203136201))))))))) ? (arr_4 [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9 + 1] [i_10]))))))));
            var_31 = ((/* implicit */int) ((long long int) (-(arr_5 [i_9] [i_9]))));
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            arr_34 [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned int) 3633732257U));
            arr_35 [i_9] [i_9] = ((unsigned short) arr_2 [i_9 - 1]);
            var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9 + 2]))) : (((4007342852U) << (((((/* implicit */int) arr_3 [i_9] [i_9 - 1] [i_11])) - (169)))))));
        }
        var_33 = ((/* implicit */unsigned short) (~(3376391401U)));
        arr_36 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_9] [i_9 - 1]) & (arr_7 [(short)5] [i_9 + 2] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) arr_1 [i_9] [i_9 + 2]))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((arr_28 [i_9 + 2]) - (((/* implicit */int) ((unsigned char) 9223372036854775807LL))))) ^ (((/* implicit */int) (unsigned short)7798)))))));
    }
    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 4) 
    {
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_11 [(unsigned short)0] [i_12]))));
        var_36 ^= ((/* implicit */signed char) arr_15 [i_12] [i_12] [i_12 + 1] [i_12] [i_12] [0]);
    }
    var_37 = ((/* implicit */unsigned int) var_6);
}
