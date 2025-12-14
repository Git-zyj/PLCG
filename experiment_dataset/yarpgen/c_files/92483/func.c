/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92483
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4243983992767534051LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_0 [i_0])))))) | (((/* implicit */int) var_2))));
        arr_4 [i_0] = ((/* implicit */signed char) min(((unsigned short)0), (((/* implicit */unsigned short) (short)2044))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_5 [i_0] = ((2508228958U) >> (((((((/* implicit */_Bool) (short)2059)) ? (17018089952046180755ULL) : (((/* implicit */unsigned long long int) -594541138)))) - (17018089952046180746ULL))));
        var_18 -= ((/* implicit */_Bool) var_3);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) (~((~(18141141813885903152ULL)))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-2022)) + (2147483647))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [(unsigned char)4] [4ULL] [i_3])) != (((/* implicit */int) arr_13 [i_1] [(unsigned char)6] [i_3]))))) : ((~(arr_6 [8ULL])))))));
                arr_14 [(unsigned short)7] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
            }
            for (unsigned long long int i_4 = 4; i_4 < 7; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_6 [i_1]) != (((/* implicit */int) arr_13 [i_4 - 3] [i_1] [i_4 + 1])))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2044))) <= (9223372036854775808ULL))))));
            }
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min(((-(var_3))), (((/* implicit */int) arr_11 [i_1] [i_2])))) | (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6138)) ^ (((/* implicit */int) arr_12 [i_2]))))) ? (((/* implicit */int) var_11)) : (((arr_6 [i_1]) ^ (((/* implicit */int) var_1))))))));
            var_23 = ((((((/* implicit */int) arr_11 [i_1] [i_2])) + (2147483647))) >> ((((~(1108073730))) + (1108073742))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                var_24 += ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)24));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        arr_26 [i_7] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_7 + 1]);
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) arr_24 [i_2] [i_7 - 2] [10ULL] [i_6] [i_2])))));
                        var_26 ^= ((/* implicit */unsigned char) var_15);
                    }
                    for (unsigned short i_8 = 2; i_8 < 7; i_8 += 3) 
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_9 [(unsigned char)5]);
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_8] [i_6] [i_2] [i_1]))));
                    }
                    arr_31 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_15)) + (((/* implicit */int) arr_0 [i_5]))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) 1099868145))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 4; i_10 < 10; i_10 += 1) 
                    {
                        arr_37 [i_1] [3U] [(unsigned char)0] [i_1] [i_1] [i_1] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_24 [i_10 - 4] [i_10 - 2] [i_1] [i_9] [(unsigned char)0]))));
                        arr_38 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_10 + 1])) ^ (((/* implicit */int) arr_22 [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_9] [i_10] [i_10 - 3]))));
                        var_29 *= ((/* implicit */unsigned long long int) -2147483633);
                        arr_39 [i_1] [0U] [i_1] [i_9] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                    }
                    for (int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        arr_44 [i_1] [i_1] = ((/* implicit */short) ((13293176051496277777ULL) != (5153568022213273836ULL)));
                        var_30 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6138))) | (9223372036854775808ULL)));
                    }
                    arr_45 [(unsigned char)10] [i_1] [0] [i_5] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_1]));
                }
                arr_46 [i_1] [6ULL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_29 [(unsigned char)6] [(unsigned char)6] [i_5])) <= (((/* implicit */int) min(((unsigned short)28672), ((unsigned short)60787))))));
            }
            for (int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
            {
                arr_49 [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_40 [i_1] [i_1] [i_1] [i_2] [i_12]), ((signed char)-123)))), (min((((/* implicit */unsigned long long int) arr_29 [i_1] [(short)3] [(short)3])), (arr_7 [i_1] [i_12])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_31 *= ((arr_10 [i_2] [(unsigned char)4] [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) arr_11 [i_2] [i_1])));
                    arr_52 [6ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_1] [i_13] [i_2] [i_2] [i_13])) ? (arr_25 [i_1] [i_2] [i_1] [i_1] [i_1] [i_12] [i_13]) : (arr_25 [i_1] [i_2] [i_1] [i_12] [i_1] [i_2] [i_13])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_1] [i_2])) + (arr_8 [i_1] [i_13])))) : (min((((unsigned int) var_13)), (3843579263U)))));
                    arr_53 [i_1] [i_1] = ((/* implicit */unsigned short) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            arr_56 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(9223372036854775808ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_14]), (((/* implicit */unsigned short) var_14))))))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_55 [(signed char)4] [i_1] [0ULL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2))))))))));
        }
    }
    var_33 = ((/* implicit */unsigned long long int) 1032575871);
    var_34 = ((/* implicit */signed char) var_12);
    var_35 = ((/* implicit */unsigned long long int) var_1);
    var_36 = (+(((/* implicit */int) var_5)));
}
