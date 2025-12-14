/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90584
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
    var_17 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) (signed char)37)) + (((/* implicit */int) (short)32539)))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(unsigned char)0] [i_2] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-16641)), (((unsigned short) 3ULL))))) ? ((-(arr_9 [4ULL]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2])))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) (signed char)-71)), (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0])))) != (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_1 [i_1]))))));
                                var_20 = ((/* implicit */short) ((arr_11 [i_0] [i_0] [i_2] [(_Bool)1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        var_21 = ((/* implicit */int) ((((arr_5 [i_5 + 2] [i_5]) + (9223372036854775807LL))) << (((((arr_5 [i_5 - 1] [i_5]) + (421170776989878444LL))) - (1LL)))));
        var_22 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_12)))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(signed char)8] [i_5 - 1] [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_13 [6ULL] [i_5 - 1] [5ULL] [i_5] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_5 - 1] [i_6] [i_5 - 1] [i_6]))));
            var_24 = ((/* implicit */short) arr_3 [i_5 - 1] [i_5 + 2] [i_6 + 1]);
            var_25 = ((/* implicit */int) ((short) (_Bool)0));
            var_26 = ((/* implicit */unsigned long long int) ((int) (short)-16641));
            var_27 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)7));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_24 [(unsigned short)0] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 8; i_9 += 4) 
                {
                    {
                        var_28 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_5] [i_8])) : (((/* implicit */int) arr_4 [(signed char)11] [(short)2] [i_9])));
                        var_29 |= var_3;
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */short) arr_20 [i_8]);
                            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_5 - 1] [i_7] [i_8]))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_5] [i_5] [i_5 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [1ULL] [1ULL] [1ULL])) != (((/* implicit */int) arr_10 [i_5] [i_5] [i_5 + 2] [i_8] [i_5 + 1])))))));
                            var_33 = ((/* implicit */short) ((0) <= (((/* implicit */int) var_0))));
                        }
                    }
                } 
            } 
        }
    }
    for (short i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) ((((var_15) ? ((~(((/* implicit */int) var_14)))) : ((~(((/* implicit */int) arr_33 [(_Bool)1] [i_11])))))) != (((/* implicit */int) arr_33 [i_11] [i_11]))));
        var_35 = ((/* implicit */signed char) ((((((/* implicit */int) arr_33 [i_11] [i_11])) + (((/* implicit */int) arr_32 [i_11])))) * (((/* implicit */int) arr_33 [i_11] [i_11]))));
    }
    for (short i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_16 = 2; i_16 < 20; i_16 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (arr_45 [i_14] [i_15] [i_14] [i_13] [i_14])));
                            var_37 = ((/* implicit */unsigned long long int) arr_32 [(_Bool)1]);
                            var_38 = var_14;
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) arr_38 [i_12] [(unsigned char)15]);
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_42 [i_13 + 3] [i_13 + 3] [i_13 + 4] [i_13 + 2]) << (((((/* implicit */int) var_5)) + (123)))))) && (((/* implicit */_Bool) ((min((-862736344), (((/* implicit */int) arr_36 [i_17])))) / ((-(((/* implicit */int) var_1)))))))));
                            var_41 = ((/* implicit */short) (signed char)0);
                            arr_48 [i_17] [i_14] [(_Bool)1] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */unsigned int) max((((((/* implicit */int) (short)32539)) * (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_10))))))), (((/* implicit */int) ((arr_42 [i_12] [i_12] [i_15] [i_17]) != (((/* implicit */unsigned long long int) min((arr_45 [i_12] [i_13] [i_13] [i_13] [i_14]), (((/* implicit */unsigned int) (signed char)-6))))))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((signed char) var_9))) ? (3ULL) : ((~(arr_38 [i_13] [i_15]))))));
                            var_43 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_12] [i_13 + 4] [i_13 + 1])) || (((/* implicit */_Bool) arr_37 [i_15] [i_13] [i_13 - 1]))))), (min((arr_37 [i_18] [i_15] [i_13 + 3]), (arr_37 [i_15] [i_15] [i_13 + 1])))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_12] [i_12] [i_13 + 3])) ? (862736344) : (((/* implicit */int) (signed char)127))));
                        }
                        var_45 = ((/* implicit */signed char) arr_39 [i_14] [i_15]);
                        var_46 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) -1513354507))));
    }
}
