/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79904
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
    var_19 += (~((+(((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_20 &= ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (short)509))))))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_3] [i_2] [i_1] [i_0])))) : (arr_4 [i_1]))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_7 [i_0 + 2] [24U] [i_1] [24U]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((short) arr_5 [i_0 + 3] [i_0 - 1])))));
                arr_13 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_0] [i_1]))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                arr_17 [i_0] [i_0] [(short)23] [(signed char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_14 [i_1] [i_5 - 1])))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_1])) : (((((/* implicit */_Bool) arr_10 [(signed char)23] [(signed char)23] [i_0 + 1] [(signed char)23])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [(signed char)8] [i_1] [i_5]))))));
                var_23 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [(unsigned short)18] [i_0]);
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) == (4156969724U)));
                arr_19 [i_5] = ((/* implicit */signed char) arr_0 [11U]);
            }
            for (signed char i_6 = 3; i_6 < 23; i_6 += 4) 
            {
                arr_22 [(signed char)16] [i_6] [i_6] [i_0 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)4))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_24 -= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_21 [i_0] [i_6 - 3]))))));
                    var_25 = ((/* implicit */unsigned int) max((((arr_4 [i_0 - 2]) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_0])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0 - 4] [i_0 - 4] [i_0 - 1] [i_0] [(unsigned char)9]))))) == (((((/* implicit */int) arr_15 [i_0] [(unsigned short)6] [(signed char)16])) | (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3]))))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) arr_27 [(unsigned char)23] [(signed char)21] [(signed char)21] [i_8] [6U] [14U] [(signed char)21]);
                        var_27 = ((/* implicit */signed char) arr_2 [i_0]);
                        arr_29 [i_0] [i_1] [i_1] [i_0] [i_9] [i_6] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [(short)8] [i_8]);
                        var_28 = ((/* implicit */signed char) arr_4 [i_0 + 3]);
                        var_29 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_6] [i_8] [i_6]))))));
                    }
                    arr_30 [i_0] [i_1] [i_6] [(unsigned char)10] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
                    arr_31 [i_0] [i_1] [i_6] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) arr_14 [i_0] [i_0])) : (arr_20 [i_0] [i_0] [(signed char)1] [2LL])))));
                }
            }
        }
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0] [i_0 + 2] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_11])))))));
                var_31 += ((/* implicit */unsigned int) arr_26 [(unsigned char)22] [i_10] [i_11] [i_10] [i_11]);
                var_32 = ((/* implicit */unsigned int) min((var_32), ((-(((((/* implicit */_Bool) (unsigned char)255)) ? (353644106U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))))));
            }
            arr_36 [i_10] |= ((/* implicit */signed char) (~((-(((/* implicit */int) arr_8 [i_10] [i_0] [i_0] [i_0 + 3]))))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_33 [i_0 + 3] [i_0])))))));
            var_34 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_38 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_12])) : (((/* implicit */int) arr_10 [i_0] [(signed char)5] [i_0] [i_0 - 2]))))));
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_11 [i_0] [i_0 - 4] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                for (unsigned char i_14 = 4; i_14 < 23; i_14 += 1) 
                {
                    {
                        var_36 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_39 [i_12] [(unsigned char)2])) ? (((/* implicit */int) arr_41 [i_12] [i_13])) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_46 [i_0] [i_0] [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_8 [i_0] [i_12] [(signed char)5] [i_14])))) : (((/* implicit */int) arr_21 [i_12] [i_12]))));
                        arr_47 [i_0] [i_12] [i_0] [i_14 + 2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [(signed char)7] [i_12] [i_13] [(signed char)7])) ? (((/* implicit */int) arr_16 [i_0 - 1] [21U] [i_14])) : (((/* implicit */int) arr_43 [i_12] [i_13]))))));
                        var_37 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_5 [i_0 - 3] [i_13])))) | (((/* implicit */int) arr_26 [i_0 + 2] [4U] [i_13] [i_12] [i_13]))));
                    }
                } 
            } 
        }
    }
    var_38 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10)))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_5))))))))));
}
