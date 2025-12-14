/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97169
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (var_2))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_5))))));
    }
    for (signed char i_1 = 4; i_1 < 12; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_7))))), (arr_3 [i_1 - 3] [i_1])))))))));
        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 1])) > (((/* implicit */int) arr_2 [i_1 - 3])))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_15 = ((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_1 [i_2]))))) > ((+(((/* implicit */int) arr_0 [(_Bool)1] [i_2 + 2])))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_3 + 2])) ? (((/* implicit */int) (unsigned short)23306)) : (((/* implicit */int) (_Bool)1))));
            var_16 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_4 + 2] [i_4] [i_4 + 2]))));
                arr_14 [i_2] [2LL] [2LL] = ((/* implicit */int) (_Bool)1);
                arr_15 [(unsigned char)10] [i_3 - 1] [i_2] = ((/* implicit */_Bool) (-(arr_8 [i_2] [i_4 + 2])));
                var_18 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_2] [i_4 + 2] [i_4] [(unsigned short)10]))));
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) : (arr_8 [i_3] [i_3])));
                arr_19 [i_5] [i_3] [i_3] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 2]))));
            }
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 2]))))) / ((+(((/* implicit */int) (signed char)-35)))))))));
            arr_20 [i_2] = arr_3 [i_2 + 2] [(short)6];
        }
        /* vectorizable */
        for (signed char i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (short i_9 = 2; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_2 [(_Bool)1]))));
                            arr_32 [11U] [i_2] [i_7] [i_8] [i_9] = arr_2 [i_2];
                            var_22 += ((/* implicit */signed char) arr_25 [i_6 - 3] [i_6] [i_7] [i_8]);
                            arr_33 [i_2] [i_6 - 2] [i_7] [i_8] [i_2] = ((/* implicit */_Bool) arr_12 [i_6 - 2] [i_8] [4] [1LL]);
                        }
                    } 
                } 
            } 
            arr_34 [i_2] = ((/* implicit */unsigned short) arr_5 [i_2] [i_2]);
            var_23 = ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
            arr_35 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_27 [i_2 + 2]);
        }
        var_24 |= ((/* implicit */long long int) arr_0 [i_2] [i_2]);
    }
    for (unsigned char i_10 = 1; i_10 < 10; i_10 += 1) /* same iter space */
    {
        arr_39 [(short)3] &= ((/* implicit */_Bool) arr_10 [i_10 + 1] [i_10] [i_10]);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_22 [i_10 + 2] [i_10 - 1] [i_10 + 1]), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [2] [i_10 + 2] [2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10] [(unsigned short)0])))))) ? (max((4294967271U), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10 + 2])))))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_14])), (arr_44 [i_14] [0] [i_12] [0] [i_14])))) ? (((/* implicit */int) arr_12 [i_10 + 1] [i_11] [i_13] [i_14])) : (((/* implicit */int) arr_41 [i_10] [i_11] [i_13]))))) ? (((min((((/* implicit */unsigned long long int) (signed char)28)), (1020592233589750869ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))) : (var_0))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (max((var_0), (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) arr_13 [(unsigned short)10] [i_11])), (var_0)))))))));
                                var_28 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_3 [i_10 - 1] [i_10]), (arr_3 [i_10 - 1] [(signed char)8])))), (min((var_0), (((/* implicit */unsigned long long int) arr_3 [i_10 + 2] [i_10]))))));
                            }
                        } 
                    } 
                    arr_52 [(unsigned char)8] [i_12] [(unsigned char)5] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_12] [i_11] [i_10 + 1])) != (((/* implicit */int) arr_17 [i_12]))));
                    var_29 ^= ((/* implicit */signed char) arr_18 [i_10 - 1] [i_11]);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_3))));
}
