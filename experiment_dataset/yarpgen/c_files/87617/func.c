/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87617
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min(((~(var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_3))))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_2))) % (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) arr_0 [i_0 - 2])) / (((/* implicit */int) arr_0 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] &= arr_7 [i_1 - 1];
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_10 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                for (int i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (~(arr_18 [i_4 + 1] [i_4 + 1] [i_4 + 3] [i_3 - 2] [i_1 - 1] [i_1 + 2] [i_1 + 2])));
                            arr_19 [i_1] [i_2] [i_2] [i_3] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (~(549739036672LL)));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) arr_9 [i_1 - 1] [i_2]);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (signed char)-38))) / (((/* implicit */int) ((arr_2 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) arr_14 [i_1] [i_7]);
                var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_7]))) * (((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760)))))))));
            }
            for (unsigned int i_8 = 1; i_8 < 23; i_8 += 4) 
            {
                arr_30 [i_1] [i_1] [i_8 + 1] [i_8 + 1] |= ((/* implicit */unsigned char) ((var_6) * (((((/* implicit */_Bool) 4294967287U)) ? (arr_4 [(unsigned char)14] [i_1]) : (4294967294U)))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            arr_35 [i_6] = ((/* implicit */_Bool) arr_25 [i_9 - 3] [i_9 - 3]);
                            var_21 = (~(arr_17 [i_1] [i_6] [i_8] [i_9]));
                            arr_36 [i_6] [i_10] = ((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2])))));
                            arr_37 [i_10] [i_9] [i_1] [i_1 - 2] [i_1 - 2] &= ((/* implicit */unsigned char) (((+(var_1))) >> (((((arr_5 [i_9]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_1] [i_6] [i_8 - 1] [i_9])))) + (4633)))));
                            var_22 = ((/* implicit */unsigned char) (~(arr_12 [i_1] [i_1] [i_1 + 1] [i_9 - 2])));
                        }
                    } 
                } 
                var_23 = var_10;
            }
            for (short i_11 = 2; i_11 < 21; i_11 += 2) 
            {
                arr_40 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((arr_29 [i_1] [i_1] [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((unsigned long long int) arr_12 [i_11 - 1] [(unsigned char)19] [12LL] [i_1]))));
                arr_41 [i_11] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_6] [i_6] [(unsigned short)3]))));
            }
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                arr_45 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1] [11])))))));
                var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_6])))) == (var_14)));
            }
            arr_46 [i_1] [i_6] [i_1] &= ((signed char) arr_34 [(short)14] [i_1 - 1] [i_6] [i_1] [i_1 - 2]);
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                {
                    arr_53 [i_1] [i_13] = ((/* implicit */int) ((arr_9 [i_1 + 1] [i_13]) ? (arr_47 [i_1 + 2] [i_1 + 1]) : (((/* implicit */unsigned long long int) (-(var_11))))));
                    arr_54 [(unsigned char)2] [10U] [i_13] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (5736439627218118955ULL) : (((/* implicit */unsigned long long int) var_11))))));
                    var_25 &= ((/* implicit */short) (+(arr_21 [i_1 + 1] [i_1] [i_1 - 1])));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) + (var_6)));
                        arr_57 [i_1] [i_13] [8U] [i_13] [(unsigned char)3] = ((/* implicit */unsigned int) (~(arr_22 [i_1] [i_13] [i_15])));
                    }
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) ((arr_10 [i_1 - 2]) - (arr_10 [i_1 - 1])));
                        var_28 = ((/* implicit */unsigned char) ((short) ((long long int) (signed char)-125)));
                        var_29 ^= ((/* implicit */signed char) arr_27 [i_1 - 2] [i_14]);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_17 = 3; i_17 < 10; i_17 += 2) 
    {
        arr_64 [i_17] = ((/* implicit */unsigned int) (((~(var_1))) * (((/* implicit */unsigned long long int) arr_52 [i_17 - 2] [i_17 + 2] [i_17 + 1]))));
        arr_65 [i_17 + 2] &= ((/* implicit */short) var_12);
    }
    /* LoopNest 2 */
    for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
        {
            {
                var_30 += ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_13 [i_18] [i_18] [i_18] [i_19]), (arr_13 [i_18] [i_18] [i_18] [i_18]))))));
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        {
                            arr_78 [i_18] [i_19] [i_20] [i_21] = ((/* implicit */unsigned char) (~((~(min((arr_10 [i_18]), (arr_16 [i_18] [i_20] [i_18] [i_18])))))));
                            arr_79 [i_20] [i_19] [i_20] [i_21] [i_20] = ((/* implicit */unsigned short) ((var_1) < (((/* implicit */unsigned long long int) ((arr_34 [i_18] [(_Bool)1] [i_19] [i_20] [i_21]) << (((arr_34 [i_18] [i_18] [i_20] [i_21] [i_18]) - (4098022026463897327LL))))))));
                            arr_80 [i_18] [i_21] [i_20] [i_21] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) - (var_1)))) ? (min((arr_18 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */long long int) var_5)))) : (min((arr_17 [i_21] [i_18] [i_18] [i_18]), (((/* implicit */long long int) var_12)))))), (arr_34 [i_18] [i_18] [i_18] [i_18] [i_18])));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) var_11))), (arr_25 [i_18] [i_18])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (var_10))))) + (min((((/* implicit */unsigned int) arr_42 [i_21])), (arr_12 [i_21] [i_20] [i_19] [i_18]))))) : (arr_76 [i_18] [i_19] [i_19] [i_20] [i_21])));
                            arr_81 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) min((min((var_4), (var_9))), (((/* implicit */unsigned char) ((arr_70 [i_21]) || (arr_70 [i_18]))))));
                        }
                    } 
                } 
                arr_82 [i_19] [i_19] = ((/* implicit */int) min((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_18] [i_19]))) >= (arr_31 [i_18] [i_18] [i_18]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_19]))) != (arr_44 [i_18] [i_19] [i_19] [i_19]))))));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_19])) > (((((/* implicit */_Bool) ((arr_44 [i_18] [i_19] [i_19] [i_18]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((~(((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) ((var_6) < (var_14))))))));
                arr_83 [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_75 [i_19] [i_19] [i_18])), (min((((/* implicit */unsigned int) arr_77 [i_18] [i_18])), (arr_10 [i_18]))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) var_2);
}
