/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72997
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
    var_16 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) (unsigned short)4382)), (var_2))) : (min((((/* implicit */unsigned long long int) var_11)), (var_2)))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) var_5)) != (var_11)));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (-((-((-(arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_19 += ((/* implicit */long long int) max(((+(0U))), (((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_0 [(unsigned char)10] [i_0])) <= (((/* implicit */int) (unsigned short)18219))))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_11 [i_1 - 1] [(unsigned short)15] [(unsigned char)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (((var_13) * (4294967290U)))))));
                        arr_13 [i_1] [(unsigned short)2] [(unsigned short)15] [i_2] [i_1] [8LL] = ((/* implicit */unsigned short) ((short) ((unsigned int) 0U)));
                    }
                } 
            } 
        } 
        var_20 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18213)) ? (2U) : (4294967295U)))) : (((((/* implicit */unsigned long long int) var_13)) - (18446744073709551614ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1LL)) & (arr_1 [0])))) ? ((~(-433781303))) : (((/* implicit */int) arr_9 [2LL] [2LL]))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_11 [i_1] [i_1 - 1] [i_1]) + (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) 1073741823U)) : (((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)6]))) : (arr_11 [i_1 - 1] [i_1] [i_1 - 1]))))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))))));
        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >> (((((/* implicit */_Bool) arr_9 [13LL] [i_1])) ? ((~(-2LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned short)47312)) : (((/* implicit */int) var_6)))))))));
    }
    for (int i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) (unsigned short)9))))) ? (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [(unsigned char)7])))))) : (((/* implicit */int) arr_7 [i_5]))))) ? (-20LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11LL)) ? (((/* implicit */unsigned int) -433781285)) : (((((/* implicit */_Bool) 11LL)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440))))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 14LL))) ? (((((/* implicit */_Bool) 7995535155514429641LL)) ? (((/* implicit */int) arr_8 [0])) : (((/* implicit */int) arr_7 [i_5])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5])) > (var_2))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5])))))) > ((-(arr_1 [i_5]))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [14LL])) && (((/* implicit */_Bool) 4294967295U)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            {
                var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) * (((long long int) arr_17 [i_6]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 865468433))) < ((+(arr_23 [i_7])))));
                    arr_27 [i_6 - 1] [i_7] [i_6] = ((/* implicit */signed char) 4294967275U);
                    var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_7] [(unsigned short)3])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [2]))) ^ (4932324134947266120LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7])))));
                    arr_28 [i_6] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) var_3);
                    var_27 += ((/* implicit */long long int) ((2966406051U) >> ((((-(-4932324134947266122LL))) - (4932324134947266095LL)))));
                }
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_28 = (i_6 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) ((signed char) arr_26 [i_6] [i_7] [i_9]))) : (((((/* implicit */int) arr_26 [i_6] [i_6] [i_9])) | (((/* implicit */int) arr_10 [i_6] [i_6] [8LL] [i_6] [1])))))) + (2147483647))) >> (((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), (((_Bool) 142286048)))))))) : (((/* implicit */short) ((((((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) ((signed char) arr_26 [i_6] [i_7] [i_9]))) : (((((/* implicit */int) arr_26 [i_6] [i_6] [i_9])) | (((/* implicit */int) arr_10 [i_6] [i_6] [8LL] [i_6] [1])))))) - (2147483647))) + (2147483647))) >> (((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), (((_Bool) 142286048))))))));
                    var_29 = ((/* implicit */unsigned short) 14312719276078630233ULL);
                    arr_32 [i_9] [i_6 - 1] [i_7] [i_9] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_6] [i_7] [i_9] [i_6])) >= (((/* implicit */int) arr_22 [12LL])))))) & (((((/* implicit */_Bool) arr_11 [i_6] [i_7] [i_9])) ? (1328561227U) : (339395726U))))))));
                    arr_33 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)49)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1LL))));
                    arr_34 [i_9] &= ((/* implicit */unsigned short) ((4788509822797727510LL) | (28LL)));
                }
            }
        } 
    } 
}
