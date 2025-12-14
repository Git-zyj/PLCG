/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64385
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_2 - 2] [i_2] [i_3 + 2])) & (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0] [23])), (var_17)))))))));
                            arr_13 [i_1] [i_3] [(unsigned short)24] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((max((((/* implicit */int) var_16)), (arr_8 [i_0] [13ULL]))), (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 2] [i_3 + 1])))) : (((int) arr_11 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_2 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                            {
                                arr_24 [i_6] [(signed char)24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] [i_4 + 2] [i_4 - 2])) ? (((/* implicit */int) arr_4 [i_1] [i_4 + 2] [i_1])) : (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5] [i_5] [i_4] [i_5] [i_4] [i_4 - 2] [i_4])) % (((/* implicit */int) (short)-8196))))) ? ((-(((/* implicit */int) arr_21 [i_0] [i_0] [21LL] [(signed char)9] [i_4 + 2] [(unsigned short)21] [i_6])))) : (((/* implicit */int) arr_3 [i_4 - 2] [i_4 - 2]))));
                                arr_25 [i_6] [24LL] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))))));
                                arr_26 [i_0] [i_1] [(_Bool)1] [i_4 + 2] [i_5] [i_6] = ((/* implicit */unsigned short) var_15);
                            }
                            /* vectorizable */
                            for (long long int i_7 = 1; i_7 < 24; i_7 += 1) 
                            {
                                arr_31 [i_0] [i_1] [i_4 + 2] [i_0] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) + (((/* implicit */int) (_Bool)1))));
                                arr_32 [i_0] [i_1] [i_4 + 1] = ((/* implicit */unsigned short) var_12);
                                arr_33 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_18));
                                arr_34 [i_4] [i_4] [i_4 - 2] [i_5] [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_7 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1] [(unsigned short)18]))))) : (((/* implicit */int) arr_2 [i_7 + 1]))));
                            }
                            /* vectorizable */
                            for (signed char i_8 = 1; i_8 < 23; i_8 += 3) 
                            {
                                var_22 = ((/* implicit */short) (~(((var_3) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                                var_23 = ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_1] [i_8 + 1] [i_5] [i_4 - 1]));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4 + 2] [i_4 + 2] [i_8 + 1])) ? (((var_13) ? (((/* implicit */int) arr_22 [i_8 + 2] [i_5] [i_4] [i_4] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))));
                                arr_37 [i_0] [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) arr_36 [i_1] [i_8] [i_8 - 1])) | (var_10))));
                            }
                            arr_38 [i_5] [i_5] [i_4 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_1] [i_4 - 2] [22LL])) ? (((/* implicit */int) arr_30 [i_4 - 1] [i_1] [(_Bool)1] [i_5] [i_5] [i_1])) : (((/* implicit */int) arr_14 [i_4 - 1] [(unsigned short)6] [i_4] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_4 - 1] [i_4 - 1] [i_4])), (arr_30 [i_4 - 1] [i_4 - 1] [i_4] [(unsigned char)10] [i_1] [i_5]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                            {
                                arr_41 [3] [i_5] [i_4] [i_5] [i_9] = ((/* implicit */unsigned int) var_11);
                                arr_42 [i_0] [(signed char)11] [(signed char)11] [i_5] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)63536)))) ? (((/* implicit */long long int) arr_39 [i_5] [i_5] [i_5] [i_5] [i_4 + 1] [i_4 - 1])) : (70368744177663LL)));
                                arr_43 [i_9] [(signed char)6] [i_5] [(signed char)6] [(signed char)6] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1])) ? (arr_27 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_9] [i_0])) > (((/* implicit */int) var_0))))))));
                                arr_44 [i_0] [(signed char)18] [i_4 + 2] [i_5] [i_9] = var_3;
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_23 [(unsigned char)22] [i_1] [(unsigned char)22] [(signed char)21] [i_9] [i_9])))) ? (((/* implicit */int) arr_30 [i_0] [i_4 + 1] [(signed char)11] [i_4 + 1] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_4]))));
                            }
                            var_26 = arr_36 [i_0] [i_0] [8ULL];
                            var_27 = ((/* implicit */unsigned int) arr_17 [(unsigned char)18] [(short)8] [i_4 - 1] [(unsigned short)6]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) var_14);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 2; i_10 < 19; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            {
                arr_49 [i_10] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                var_29 = ((/* implicit */signed char) min((((((var_10) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) arr_35 [(unsigned short)15] [i_11] [i_11] [14LL] [(unsigned short)15])), (arr_39 [(unsigned char)15] [i_11] [i_11] [i_10 - 1] [(unsigned char)15] [i_10 - 1])))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        arr_52 [i_12] = ((/* implicit */short) arr_48 [i_12] [i_12]);
        var_31 = arr_17 [i_12] [(_Bool)1] [i_12] [i_12];
        var_32 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_13)))) & (((/* implicit */int) arr_51 [i_12]))));
        arr_53 [i_12] = ((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12] [i_12]);
        arr_54 [i_12] = ((/* implicit */signed char) ((unsigned short) arr_8 [i_12] [i_12]));
    }
    for (unsigned int i_13 = 2; i_13 < 24; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (short i_14 = 3; i_14 < 22; i_14 += 2) 
        {
            for (signed char i_15 = 2; i_15 < 24; i_15 += 2) 
            {
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_13] [i_14 - 2] [i_15 + 1] [(_Bool)1])) ? (((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_60 [i_13 - 1] [i_13 - 1] [i_13 - 1]))))) : (max((arr_36 [i_13 - 1] [i_13] [i_13]), (((/* implicit */unsigned int) arr_9 [i_14])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_15 + 1] [i_13 - 2]))))));
                    arr_64 [(short)9] [i_13] [i_15 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_60 [i_15 - 2] [i_14 + 3] [i_13 - 2])))));
                }
            } 
        } 
        var_34 = ((/* implicit */int) (_Bool)1);
        arr_65 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_13] [i_13] [i_13] [i_13])) == (((/* implicit */int) ((unsigned short) var_19)))));
        var_35 = ((/* implicit */_Bool) (+((((((-(((/* implicit */int) (unsigned char)19)))) + (2147483647))) >> (((var_10) + (8156692574386707025LL)))))));
    }
}
