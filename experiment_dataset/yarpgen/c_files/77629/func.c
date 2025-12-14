/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77629
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((max((arr_4 [i_0] [i_0 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) (signed char)127)))), (((/* implicit */unsigned long long int) 341351409))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)63))) : (min((((/* implicit */unsigned int) (signed char)59)), (arr_8 [i_0] [i_0 + 4] [i_0] [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)86)))))));
                            arr_14 [i_0] [i_0] [i_2] [(_Bool)1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 3]))));
                            var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)127)), (min((((/* implicit */unsigned short) (signed char)62)), (min(((unsigned short)44848), (((/* implicit */unsigned short) arr_11 [i_0] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
        var_21 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) arr_5 [i_4 + 1])), (var_10)))));
    }
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)71)), ((unsigned char)161))))));
            arr_23 [i_6] [i_6] [i_5] = ((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5] [i_5 + 1]);
        }
        for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 3) 
        {
            arr_28 [i_7] = ((/* implicit */_Bool) arr_27 [i_5] [i_7]);
            var_23 = ((/* implicit */unsigned long long int) arr_10 [i_5] [i_5] [i_7] [i_7]);
        }
        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 4) 
        {
            arr_31 [i_5] [(short)0] [i_5] &= ((/* implicit */_Bool) (signed char)34);
            /* LoopSeq 2 */
            for (long long int i_9 = 4; i_9 < 17; i_9 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */short) ((((/* implicit */int) max((arr_19 [i_5 + 2]), (arr_19 [i_5 + 1])))) & (((/* implicit */int) ((unsigned short) arr_19 [i_5 + 2])))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_27 [i_5 - 1] [i_8 - 3]))) ? (min((var_3), (((/* implicit */int) (unsigned short)3840)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5 - 1] [i_8])))))));
                /* LoopSeq 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 4; i_11 < 17; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) arr_18 [i_5] [i_5]))), (((((/* implicit */_Bool) arr_4 [i_10] [i_10 - 1] [i_10 - 1])) ? (arr_8 [i_11] [i_8] [i_5 - 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5 - 1])))))));
                        var_27 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (unsigned short)20687)))), (((((/* implicit */int) (signed char)58)) == (1799614668)))));
                        arr_41 [i_5] [i_8] [i_9 - 2] [i_8] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */int) arr_29 [i_8])) : (((/* implicit */int) (signed char)31)))), (((arr_38 [i_9] [i_9 - 4] [i_9] [i_9 - 3] [i_9 - 1] [i_8]) ? (((/* implicit */int) arr_29 [i_8])) : (((/* implicit */int) arr_38 [i_9] [i_9 + 1] [i_9] [i_9 - 3] [i_9 - 3] [i_8]))))));
                        arr_42 [i_5] [i_8] [i_9 - 1] [i_5] [i_11] = ((/* implicit */unsigned short) arr_4 [i_5] [i_5] [i_5]);
                        var_28 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned short) 0U))) ? (min((2397358683294657065ULL), (((/* implicit */unsigned long long int) (signed char)71)))) : (((/* implicit */unsigned long long int) arr_40 [i_11] [i_11 + 1] [i_11] [i_11] [7ULL] [i_11 - 4] [i_11 - 4])))));
                    }
                    var_29 += ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12652))) - (max((arr_39 [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) 1799614668))))))));
                    arr_43 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (short)26645))));
                    var_30 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 4) 
                    {
                        arr_49 [i_8] [i_12] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_16)))), (((/* implicit */int) (signed char)117))));
                        var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_8] [i_9] [i_12] [i_5])) ? (((/* implicit */int) arr_48 [i_8])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) arr_37 [i_8 + 3] [i_8] [i_9 + 1] [i_12 - 1] [i_12 - 1])))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((unsigned int) ((1652289936U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_9 - 4] [i_14 - 1]))))));
                        var_33 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_0 [i_9 - 2] [i_12 - 1])), (arr_18 [i_5] [i_9 + 1])))));
                    }
                    var_34 = ((/* implicit */signed char) ((unsigned short) 1894128451U));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (unsigned char)227))))) ? (((4294967285U) % (((/* implicit */unsigned int) -1799614669)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_21 [i_8 - 1]), (((/* implicit */signed char) (_Bool)1))))))));
                }
                var_36 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
            }
            /* vectorizable */
            for (long long int i_15 = 4; i_15 < 17; i_15 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */signed char) 17834168693400798515ULL);
                var_38 = ((/* implicit */_Bool) (+(arr_9 [i_5 + 2])));
            }
        }
        arr_56 [i_5] = ((140102576U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))));
        arr_57 [i_5 + 1] [i_5 + 2] = ((/* implicit */unsigned char) 17085211943186684468ULL);
    }
    for (unsigned short i_16 = 1; i_16 < 16; i_16 += 1) /* same iter space */
    {
        arr_61 [i_16 - 1] = ((/* implicit */unsigned char) ((unsigned short) min((arr_32 [i_16 - 1] [i_16] [i_16 + 2] [i_16 + 1]), (((/* implicit */unsigned int) (signed char)11)))));
        var_39 = ((/* implicit */signed char) min((((((/* implicit */int) arr_19 [i_16 - 1])) * (((/* implicit */int) (unsigned short)5058)))), (((/* implicit */int) min((((/* implicit */short) (signed char)-66)), (arr_19 [i_16 + 1]))))));
    }
}
