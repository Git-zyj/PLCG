/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9650
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) arr_3 [(unsigned char)1]);
        arr_4 [i_0] [i_0] = min((min((arr_1 [(short)10]), (((/* implicit */long long int) 2086031122U)))), (((/* implicit */long long int) var_10)));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_6 [10])) : (((/* implicit */int) arr_6 [(signed char)22]))))), (((((/* implicit */unsigned int) var_4)) ^ (min((((/* implicit */unsigned int) (unsigned short)65535)), (2208936173U)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (short i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (+(((arr_9 [i_1] [i_3]) << (((arr_12 [i_5] [(_Bool)1] [i_1] [i_1]) - (arr_12 [i_1] [i_2] [i_4] [i_5])))))));
                                var_19 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_15 [i_4] [i_4])) && (((/* implicit */_Bool) arr_15 [i_4] [i_5 + 1]))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] = ((/* implicit */long long int) (~((~(((2259012U) ^ (2208936173U)))))));
                    var_20 = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_10 [7LL] [7LL]))))), (arr_12 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2]))) & ((~((~(var_9)))))));
                    arr_19 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_16 [(unsigned short)19] [i_2 + 1] [(unsigned short)19] [15LL]))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_6] [i_6] = ((/* implicit */long long int) (((~(2208936173U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1])))));
            var_21 = ((/* implicit */unsigned char) arr_15 [i_1] [(short)18]);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_6])) + (((/* implicit */int) arr_6 [i_6]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) - (arr_12 [i_1] [i_6] [i_7] [i_7])));
                var_24 = ((/* implicit */unsigned short) var_13);
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_33 [i_1] [13LL] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6103))) : (18003455641473221107ULL)));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_1] [i_8])), (arr_12 [i_1] [i_8] [i_8] [i_1])))))))));
            arr_34 [i_1] [i_8] [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)52866))));
        }
    }
    /* LoopSeq 2 */
    for (signed char i_9 = 1; i_9 < 15; i_9 += 4) 
    {
        var_26 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(var_13))))))));
        var_27 += ((/* implicit */short) arr_8 [i_9 - 1] [i_9]);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    var_28 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */int) arr_20 [(unsigned short)18]))))) ? ((-(6519826820751727758LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))))))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_23 [i_10] [i_11]), (arr_23 [i_10] [i_11 - 1])))) | ((~(792684678)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 1) 
    {
        var_30 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [i_12] [i_12] [i_12] [i_12 + 1])), (var_9)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) var_13))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            arr_49 [(unsigned char)8] [i_13] [i_13] |= ((/* implicit */unsigned long long int) ((signed char) (signed char)55));
            var_31 = ((/* implicit */unsigned short) arr_32 [i_13]);
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 7; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_32 ^= ((/* implicit */short) (-(((/* implicit */int) arr_32 [i_12 + 1]))));
                        var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_12 + 1] [i_13] [i_13] [i_13]))) ^ (arr_39 [i_12] [i_13] [i_13])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 7; i_16 += 4) 
            {
                var_34 = ((/* implicit */unsigned long long int) (-(2208936173U)));
                /* LoopSeq 3 */
                for (short i_17 = 1; i_17 < 8; i_17 += 3) 
                {
                    var_35 = ((/* implicit */int) (_Bool)1);
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_12] [i_13] [16ULL] [i_17])) ? (((/* implicit */unsigned int) -1)) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) ^ (arr_2 [i_12 + 1])))));
                }
                for (short i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_41 [i_13]))));
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)41605)) ? (((/* implicit */int) arr_23 [i_13] [i_18])) : (((/* implicit */int) arr_20 [i_13]))))))));
                }
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    arr_63 [i_12] [i_12] [i_16] [(short)1] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44431))) <= (2208936173U)));
                    var_39 = ((/* implicit */short) ((((((/* implicit */int) arr_60 [i_12] [i_12] [i_16] [i_19] [i_12] [i_13])) / (((/* implicit */int) var_15)))) << (((((((/* implicit */_Bool) arr_46 [i_12])) ? (arr_12 [i_12] [i_13] [i_13] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)55))))) + (6332838210310236917LL)))));
                }
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    var_40 = ((/* implicit */int) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) 8751305348125413507ULL))));
                }
                arr_67 [i_13] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_36 [i_12 - 1] [i_16 + 3]))));
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    for (short i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_44 [i_12 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)41605)))) - (((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_73 [i_12] [i_13] [i_13] [i_16] [i_21] [i_21] [i_22] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)52868))));
                        }
                    } 
                } 
            }
        }
        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20844)) || (((/* implicit */_Bool) 443288432236330508ULL))))), (((arr_42 [i_12 - 1] [i_12 + 1]) | (arr_42 [i_12] [i_12 + 1]))))))));
        var_44 = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_62 [(_Bool)1] [i_12] [i_12 + 1] [(_Bool)1])) ? (443288432236330508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [23ULL] [i_12] [3LL] [(_Bool)1]))))), (((/* implicit */unsigned long long int) min((arr_1 [i_12]), (var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_12 + 1] [i_12 - 2])) ? (((/* implicit */int) arr_48 [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) arr_48 [i_12 + 1] [i_12 - 2])))))));
        var_45 = ((/* implicit */unsigned long long int) arr_54 [i_12 - 2] [i_12 - 1]);
    }
    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))) & (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (_Bool)1))))))))))));
    var_47 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)62699)))) : (((/* implicit */int) var_7)))));
}
