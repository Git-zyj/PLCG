/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59436
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
    var_10 = ((/* implicit */unsigned long long int) (short)-14055);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned int) ((_Bool) (+(var_4))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] = ((int) var_3);
                        var_12 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -4977814919107660776LL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_7 [i_3] [i_2 + 1] [i_0] [10U] [i_0] [i_0])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [16ULL])))));
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned short)43052)) ? (((/* implicit */int) arr_4 [12])) : (((/* implicit */int) arr_4 [0ULL]))))))));
                        var_14 += ((/* implicit */unsigned long long int) -4977814919107660757LL);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0])) ? (arr_10 [i_0 - 1] [i_0]) : (arr_10 [i_0 + 1] [i_0 + 1])));
            /* LoopSeq 4 */
            for (long long int i_5 = 4; i_5 < 13; i_5 += 3) 
            {
                var_16 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                arr_16 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) -250860171)) <= (arr_7 [i_0] [i_0 - 3] [i_4] [i_4] [i_5 - 1] [i_5]))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_5] [i_5])) <= (((/* implicit */int) (_Bool)1))))) : (arr_6 [i_5 - 4] [i_5] [i_5] [i_5])));
            }
            for (short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 + 1] [i_0 - 2] [(short)12])) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_7 [i_0 - 3] [i_0] [i_0] [i_0 - 3] [(unsigned short)3] [i_0]))) : (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)20884)))))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) arr_18 [i_0] [3] [i_0 - 1])) ? ((~(-4489071694452324193LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) arr_7 [i_8] [i_4] [i_7 + 2] [i_7] [i_8] [i_0])))))));
                            var_20 &= ((/* implicit */unsigned char) ((unsigned int) arr_17 [i_0 + 1] [i_4] [8U] [(short)14]));
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (arr_14 [i_4] [i_0] [i_7]))) ? (((/* implicit */int) arr_21 [i_0 - 3])) : ((((_Bool)1) ? (((/* implicit */int) arr_18 [2ULL] [i_6] [i_7])) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned int i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */_Bool) arr_11 [i_0 - 1] [i_4] [i_9 - 2]);
                            arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned short)12] [1ULL] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_0]))))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) var_7))));
                            arr_34 [i_0] [i_4] [i_4] [i_4] [i_9] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [(unsigned short)4] [i_0]))) : (arr_7 [2] [2] [i_6] [i_4] [i_4] [i_0]))))));
                            arr_35 [i_0] [i_0] [(_Bool)0] [(_Bool)1] [8U] &= ((/* implicit */int) 4977814919107660758LL);
                            arr_36 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_3)))));
                        }
                    } 
                } 
            }
            for (short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
            {
                arr_40 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((unsigned int) arr_14 [i_0 + 1] [i_0] [(short)8]))) : (arr_14 [i_0 - 2] [i_0] [i_11])));
                var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [10U])) ? (((((/* implicit */int) arr_39 [(unsigned short)3] [(unsigned short)3] [i_4] [i_11])) - (((/* implicit */int) arr_28 [(unsigned char)8] [i_4] [i_11])))) : (((/* implicit */int) var_8))));
            }
            for (short i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) ((signed char) -4489071694452324213LL));
                var_25 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
            }
        }
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
        {
            arr_46 [i_0] [15U] [i_0] = (~(((/* implicit */int) arr_8 [i_0 - 3] [i_13])));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (-4489071694452324193LL))))));
        }
        var_27 = ((/* implicit */long long int) arr_30 [i_0] [i_0 - 1] [i_0 - 1] [15LL] [11]);
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            arr_49 [i_0] = arr_28 [i_0] [i_14] [i_14];
            arr_50 [7U] [i_0] = ((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0 - 2]);
            var_28 += ((/* implicit */short) var_0);
        }
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            arr_53 [i_0] [i_15] = ((/* implicit */long long int) ((unsigned char) arr_6 [(_Bool)1] [(_Bool)1] [i_15] [i_15]));
            arr_54 [i_0] [i_15] [i_0] = (!(((/* implicit */_Bool) (~(arr_19 [i_15] [i_0] [10ULL])))));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                arr_58 [i_0] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_15] [i_15])) ? (((/* implicit */long long int) -1094215966)) : (arr_10 [i_0 - 3] [i_15])));
                arr_59 [i_0] = ((/* implicit */unsigned int) ((signed char) arr_27 [i_0] [i_0]));
                arr_60 [(unsigned char)8] &= arr_57 [i_0 - 2] [(short)8] [(short)8] [i_0 - 2];
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_15] [i_16] [i_0])) ? (((/* implicit */int) arr_31 [i_0] [i_0 - 2] [i_0 - 2] [i_15] [i_16] [i_0])) : (((arr_19 [i_0] [0U] [i_16]) >> (((arr_14 [i_0] [(unsigned short)6] [i_16]) - (4393364842059123999LL))))))))));
            }
        }
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((min((var_4), (((/* implicit */unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) var_1))))) : (var_1)));
}
