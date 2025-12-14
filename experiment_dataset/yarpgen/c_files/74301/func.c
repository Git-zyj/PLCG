/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74301
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
    var_18 = max(((-(((/* implicit */int) min(((unsigned short)58937), (((/* implicit */unsigned short) (unsigned char)236))))))), (min((((((/* implicit */_Bool) (short)123)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = arr_0 [i_0] [(unsigned char)16];
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-123)) ? (((/* implicit */unsigned long long int) var_11)) : (var_15)))));
                arr_8 [i_0] [i_1 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) var_3);
            }
            arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [(unsigned char)3])) : (5811123615462345937ULL)));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (~(arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])));
                        var_21 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) 0U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_1] [i_4 + 1] [i_3] [i_1 - 1] [i_1 - 1] [i_1]))));
                            arr_19 [i_1] [i_4] = ((/* implicit */unsigned int) arr_14 [6ULL]);
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    arr_25 [i_1] = ((/* implicit */short) (unsigned short)6609);
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned short)40433)) : (((/* implicit */int) (unsigned short)0))));
                        arr_29 [(unsigned char)3] [i_1] [i_1] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_7] [i_8]))))));
                    }
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [i_1] [i_6] [i_6] [(short)7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_1 - 1] [(unsigned short)6] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_32 [i_6] [i_1 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_31 [(short)11] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0]))));
                        arr_34 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_6]);
                    }
                }
                for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 3; i_11 < 16; i_11 += 1) 
                    {
                        arr_41 [i_6] [i_10] [i_6] [i_1] [i_1] [i_6] |= ((/* implicit */_Bool) var_1);
                        var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_1 - 1])) && (((/* implicit */_Bool) var_7))));
                        var_25 = arr_14 [12];
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_12 - 1] [i_1])) ? (((/* implicit */int) arr_32 [i_0] [i_1 - 1] [i_10] [i_1 - 1] [i_12 - 1])) : (((/* implicit */int) arr_32 [i_0] [i_1 - 1] [i_1] [i_10] [i_12 - 1]))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_4 [i_0] [(_Bool)1] [i_12]))));
                        var_28 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (var_8))));
                    }
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
                }
                arr_44 [i_1 - 1] [i_1] [i_6] = ((/* implicit */signed char) arr_42 [i_1]);
            }
            for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                arr_47 [i_0] [i_1] [i_13] = ((/* implicit */signed char) 756398911U);
                var_30 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 3538568390U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)14)))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        {
                            arr_54 [i_0] [i_15] [i_13] [i_14] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_1 - 1] [i_1] [(unsigned char)10] [i_13])) : (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_13] [i_14]))));
                        }
                    } 
                } 
            }
            for (short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                arr_57 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((+(arr_49 [i_0] [(signed char)14] [0U] [i_1] [i_1] [i_16]))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))));
                /* LoopNest 2 */
                for (signed char i_17 = 1; i_17 < 16; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((unsigned int) arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_17 + 1]));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-123)) + (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_17 + 1]))));
                            var_34 = ((/* implicit */short) arr_28 [i_1 - 1] [i_1 - 1] [i_1] [i_17 + 1] [i_17 - 1]);
                            arr_64 [i_0] [i_0] [(_Bool)1] [(signed char)14] [i_16] [i_17] [i_18] |= ((/* implicit */signed char) (-(3576258145U)));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)126)) | (((/* implicit */int) arr_36 [i_1 - 1] [i_1] [i_1] [i_18]))));
                        }
                    } 
                } 
            }
        }
        arr_65 [i_0] = ((/* implicit */signed char) var_10);
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) arr_56 [i_0] [(signed char)10] [(signed char)10] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 17; i_19 += 3) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                {
                    arr_70 [i_20] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (arr_67 [i_0]))) : (((/* implicit */unsigned long long int) arr_49 [i_0] [i_0] [2U] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 1; i_22 < 14; i_22 += 2) 
                        {
                            {
                                arr_77 [i_0] [i_19] [i_19] [i_21] [i_22] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_46 [i_22] [i_19] [i_20])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                arr_78 [i_22] [9ULL] = ((signed char) arr_56 [i_0] [i_0] [i_22] [i_0]);
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned int) ((arr_72 [i_0] [i_0] [i_19] [9U] [i_0]) && (arr_72 [i_0] [i_19] [i_19] [i_20] [i_20])));
                }
            } 
        } 
    }
}
