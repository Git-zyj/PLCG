/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9086
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(var_2)))) - (var_15)));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(signed char)15]))))) != (max((((/* implicit */unsigned int) arr_1 [i_0 - 2])), (arr_3 [i_0 - 1] [i_0 - 2]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned int) var_3)) : (arr_0 [i_0 + 1] [i_1 + 1]))))));
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 + 1])));
        }
        var_25 -= ((/* implicit */unsigned int) min((max((max((-2076157280), (((/* implicit */int) (unsigned short)27)))), (((var_18) / (arr_2 [i_0]))))), (-2076157280)));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min(((signed char)-50), (((/* implicit */signed char) var_0))))), (arr_4 [i_0])))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_26 = ((/* implicit */signed char) ((((min((((/* implicit */int) (unsigned char)137)), (2076157279))) / (((arr_2 [i_2]) / (((/* implicit */int) var_8)))))) != (((/* implicit */int) ((-2076157280) >= (arr_2 [i_2]))))));
        var_27 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2076157280) & (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_0)) : (1879048192)))) : (min((((/* implicit */unsigned long long int) (short)2850)), (63ULL))))))));
        var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (arr_2 [8U])))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) var_0);
        arr_12 [i_3] = ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) | (arr_11 [i_3]))) > (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((unsigned char) ((int) arr_22 [i_7] [i_3] [(short)18] [i_4] [i_3] [3ULL] [i_3])));
                            arr_23 [i_3] [i_6] [(short)2] [i_4] [i_7] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_15 [i_4] [i_5 + 3] [i_4] [i_4]))));
                        }
                    } 
                } 
                arr_24 [i_4] [i_5 + 3] [7LL] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3] [(unsigned short)3] [i_5 - 2] [i_4])) ? (((/* implicit */int) ((13406551743459470476ULL) != (((/* implicit */unsigned long long int) -2076157258))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2076157279)) || (((/* implicit */_Bool) var_16)))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_4] [i_4] [i_5 + 2] [i_4 + 2])) != (((/* implicit */int) arr_15 [i_4] [i_4] [i_5 - 2] [i_3]))));
            }
            for (long long int i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_32 = ((/* implicit */signed char) var_11);
                    arr_30 [(signed char)11] [(signed char)11] [i_4] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4])) & (((/* implicit */int) arr_22 [i_3] [i_3] [20] [9ULL] [(_Bool)1] [i_3] [i_9]))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < ((~(var_3)))));
                    arr_31 [i_4] [i_8] [i_4] [i_4] = ((/* implicit */int) ((arr_13 [i_8 - 1] [i_8 + 1]) - (arr_13 [i_8 - 1] [(signed char)7])));
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                    {
                        {
                            arr_38 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_10 + 1])) ? (((/* implicit */int) arr_35 [i_10 - 1])) : (((/* implicit */int) arr_35 [i_10 + 1]))));
                            var_34 = ((/* implicit */unsigned char) 4294967287U);
                            var_35 = ((/* implicit */_Bool) ((11ULL) >> (0U)));
                            var_36 = ((/* implicit */short) arr_26 [i_11 - 1] [i_4] [i_4] [i_10]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) 33554431ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_4] [i_12 + 3] [i_12 - 1] [i_12 - 1]))));
                            arr_45 [5LL] [i_4] [i_4] [5LL] [5LL] = ((/* implicit */unsigned short) var_15);
                        }
                    } 
                } 
            }
            for (int i_14 = 1; i_14 < 21; i_14 += 4) 
            {
                var_38 = (+(-2076157289));
                var_39 += ((/* implicit */unsigned short) ((var_3) < (((/* implicit */int) ((arr_36 [i_3] [i_3] [i_3] [i_3] [(short)2] [i_3] [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            }
            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_17))));
        }
        arr_48 [i_3] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_41 = (+(((((/* implicit */int) var_9)) << (((var_5) - (1962467533))))));
        var_42 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) -1543812554)) & (4294967287U)))));
    }
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_4)) - (82)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((var_17), (1362064822251534097ULL)))))));
    var_44 = ((/* implicit */int) min((var_44), ((-(max((((/* implicit */int) (!(var_6)))), ((~(((/* implicit */int) var_11))))))))));
}
