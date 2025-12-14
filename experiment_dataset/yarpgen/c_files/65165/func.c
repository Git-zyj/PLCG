/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65165
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0 - 3] [i_1] = ((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0]);
                            arr_13 [i_0] [i_0] [(unsigned short)17] [i_3] = ((/* implicit */unsigned int) max((4539628424389459968ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 1])))))));
                            arr_14 [i_0] [i_0] [15LL] [i_0 - 2] = ((/* implicit */unsigned int) (+(((var_13) | (((/* implicit */long long int) var_4))))));
                        }
                    } 
                } 
                arr_15 [5LL] [5LL] |= ((/* implicit */unsigned long long int) -6558804782812389462LL);
                arr_16 [i_0] [i_0] [i_0 - 2] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) / (arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_0] [i_0])), (arr_5 [i_0 + 2] [i_0 - 3] [i_0])))));
                arr_17 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 19LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 3]))) : (arr_10 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_1 - 1]))), (((0U) & (2362707264U)))));
                arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) 2362707264U));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        arr_23 [i_4 + 1] &= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_3 [i_4])), (((arr_7 [i_4 - 2] [(short)16]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16583))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_11 [i_4 - 1] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) (signed char)-6)), (64512U))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (int i_6 = 3; i_6 < 11; i_6 += 3) 
            {
                {
                    arr_31 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) 805112996U));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)203)))))));
                }
            } 
        } 
        var_16 ^= ((((/* implicit */_Bool) (~(min((arr_5 [i_4 - 2] [i_4 - 1] [i_4 + 1]), (((/* implicit */unsigned int) 536870904))))))) ? (((arr_7 [i_4] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)62), (((/* implicit */unsigned short) var_5)))))))) : (((/* implicit */unsigned long long int) var_12)));
    }
    for (signed char i_7 = 1; i_7 < 19; i_7 += 1) /* same iter space */
    {
        arr_34 [i_7] = ((/* implicit */unsigned char) var_0);
        arr_35 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | ((-(((/* implicit */int) arr_6 [i_7 + 1] [i_7 + 2] [i_7]))))));
        /* LoopNest 3 */
        for (signed char i_8 = 4; i_8 < 21; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
            {
                for (unsigned char i_10 = 4; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) arr_8 [i_7] [i_9 - 1] [i_8] [i_7]);
                        arr_44 [i_8] = ((/* implicit */unsigned long long int) ((var_6) % ((+(-20LL)))));
                        arr_45 [i_8] [i_10 - 2] [i_10 - 2] = ((/* implicit */unsigned int) (-(((arr_40 [i_9] [i_9 + 2] [i_9 - 1] [i_9 + 3]) * (arr_40 [i_9] [i_9 + 3] [i_9 + 3] [i_9])))));
                        arr_46 [i_8] [i_10 - 3] [i_9] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-7529)), (var_11)))) ? (4294967266U) : (((arr_10 [(unsigned short)11] [i_9 + 1] [i_9 + 1] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_11 = 1; i_11 < 19; i_11 += 1) /* same iter space */
    {
        arr_49 [i_11] [i_11] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_11))))));
        arr_50 [21U] = ((/* implicit */unsigned char) var_0);
        arr_51 [i_11] = ((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((unsigned int) arr_3 [i_11 + 3])))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            for (unsigned char i_13 = 1; i_13 < 19; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 4) 
                        {
                            {
                                arr_63 [i_11 + 2] [i_11 + 2] [i_13] [i_14] [i_15 - 1] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_58 [i_14])) | (arr_56 [i_12] [8LL] [i_13]))));
                                var_18 = ((/* implicit */unsigned short) (((+(0U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (-45LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 3; i_16 < 21; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */long long int) -1);
                                var_21 *= ((/* implicit */unsigned short) 20LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 1; i_18 < 20; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 1; i_19 < 21; i_19 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned int) (-((~(-19LL)))));
                                var_23 ^= ((1152921504069976064ULL) < (((/* implicit */unsigned long long int) ((-3LL) & (var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_20 = 1; i_20 < 19; i_20 += 1) /* same iter space */
    {
        var_24 = (+((+(arr_36 [(unsigned char)8] [i_20]))));
        arr_76 [(unsigned char)6] = ((/* implicit */signed char) ((arr_42 [(_Bool)1] [i_20 + 3] [10U]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) < (arr_39 [i_20] [i_20 - 1] [i_20 + 3])))))));
    }
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), ((+(((int) var_1))))));
}
