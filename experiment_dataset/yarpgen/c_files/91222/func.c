/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91222
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = ((/* implicit */long long int) arr_4 [i_1]);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_2])) >> ((+(((/* implicit */int) arr_0 [(unsigned short)3]))))));
                }
                arr_8 [6ULL] [6ULL] = ((/* implicit */unsigned short) ((long long int) var_14));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) arr_13 [i_3]);
                    var_20 = ((/* implicit */int) arr_13 [i_3]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 1) 
        {
            for (signed char i_8 = 2; i_8 < 11; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 326440592)), (1477228266U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((long long int) var_17))))) : (((((/* implicit */_Bool) arr_27 [i_7 + 2] [i_8 + 1])) ? (var_10) : (max((18324404792695385597ULL), (arr_11 [i_8 + 1])))))))));
                    arr_28 [i_8 - 1] = ((/* implicit */unsigned char) arr_24 [(signed char)6] [i_7] [i_8 + 1]);
                    arr_29 [i_6] = arr_22 [i_6];
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_14 [i_6]))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_9] [i_6])) ? (arr_27 [i_7 + 2] [i_8 + 1]) : (arr_24 [i_6] [i_8 - 1] [i_8 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_11))))))) : (((((((/* implicit */unsigned int) 148683464)) >= (524287U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_9] [i_9]))) : (arr_26 [i_6] [4] [i_8 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)61577));
                        arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_22 [i_8 - 2]) : (((/* implicit */unsigned long long int) arr_12 [i_7 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned char) arr_19 [i_6] [i_6] [i_6] [i_6]);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_8 + 1])))))));
                            arr_38 [i_6] [i_7 - 3] [i_7] [i_6] [i_11 + 3] [i_7 - 3] [i_8] = arr_33 [i_6] [i_6] [i_6] [i_10] [i_10] [i_11 + 4];
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((arr_32 [i_7 - 2] [i_7 - 3] [i_7 + 1] [i_8 - 2] [i_8 - 1] [i_11 + 3]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63989)) ? (17961732511990276092ULL) : (14549586548439213973ULL)))))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_41 [i_6] [i_7] [i_12] [i_10] [i_12] [i_12] = ((/* implicit */short) arr_35 [i_7] [i_7 - 1] [i_7 - 3] [i_8 - 2] [i_10] [i_12] [i_12]);
                            arr_42 [i_6] [i_6] [2ULL] [i_10] [10] |= ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) (short)-18341))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_23 [i_6] [i_6])))) ? (arr_35 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_7 + 1]))))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 514940754U)) | (31ULL))))));
                        }
                        var_30 ^= ((/* implicit */unsigned long long int) ((unsigned char) (~(arr_21 [i_6] [i_7 - 1]))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        var_31 = (unsigned short)4;
                        arr_45 [i_6] [i_6] [i_8 + 1] [i_7 - 2] [i_8 - 2] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((18446744073709551593ULL) == (arr_27 [i_6] [i_7]))) ? (((/* implicit */int) arr_37 [i_7 + 2])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_6]))))))) ? (max((((/* implicit */long long int) var_13)), (min((9007199254216704LL), (((/* implicit */long long int) 1947552752U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_35 [i_6] [i_7 - 3] [i_7 - 2] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_8 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_35 [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_8 + 1] [i_8 - 1] [i_8])))) : ((+(arr_35 [i_6] [i_7 - 3] [i_7 - 3] [i_7 + 2] [i_7 - 3] [i_8 - 2] [i_8 - 2]))))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        arr_49 [i_6] [i_7] [i_7 - 2] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_7 + 1] [i_8] [i_14]))));
                        arr_50 [i_6] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 3]))) | (var_15)))));
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            {
                                arr_55 [i_6] [i_7] [i_8 + 1] [i_15] [i_16] = max(((+(arr_20 [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_6] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_7] [i_8 - 1] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6]))) : (arr_24 [i_6] [i_7 - 3] [i_15]))))))));
                                var_33 = ((/* implicit */unsigned int) arr_39 [i_6] [i_7 - 2] [i_8 - 2] [i_15] [(signed char)5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_17)) : (var_10))), (((unsigned long long int) -148683462))))));
}
