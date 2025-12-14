/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63223
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
    var_12 |= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 3373179494U)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
            var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (921787801U)))));
            var_14 = ((/* implicit */_Bool) arr_2 [i_1]);
            arr_5 [(signed char)15] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) / (-944974929)));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_15 = ((/* implicit */long long int) arr_6 [i_0]);
                arr_10 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_3] [i_3] [i_3 + 1]))));
            }
            var_16 = ((/* implicit */unsigned char) arr_2 [i_0]);
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_16 [i_5] [i_5 + 1] [i_4] [i_2] [i_0] [i_0]))));
                    var_18 = ((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_19 &= ((/* implicit */int) ((signed char) (-(var_1))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5 - 2] [i_5] [i_6] [i_5]))) : (arr_13 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2]))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_5 - 2]))) < (arr_13 [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 - 1])));
                    }
                }
                arr_21 [(signed char)4] = ((/* implicit */unsigned short) arr_19 [0ULL] [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_0]);
                var_22 = arr_2 [i_0];
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_23 ^= ((/* implicit */signed char) ((arr_8 [i_2] [i_2] [i_2] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)4] [i_2] [i_2] [i_4] [i_4] [i_7])))));
                    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [(short)0])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_23 [i_0]))));
                }
                for (short i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) arr_2 [i_4]);
                    var_26 = ((/* implicit */unsigned long long int) arr_22 [i_8] [i_4] [i_2] [i_0] [i_0]);
                }
            }
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) max((var_27), (arr_2 [i_0])));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_16 [i_0] [i_9] [i_2] [i_2] [i_0] [i_0]))));
                var_29 = ((/* implicit */signed char) arr_3 [i_2] [i_2]);
                var_30 = ((/* implicit */short) arr_1 [(signed char)11] [i_0]);
            }
        }
        for (int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            arr_32 [i_0] [i_10] = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_10] [i_0] [i_0])) == (((/* implicit */int) arr_30 [i_0] [i_0] [(unsigned char)5])))) ? (((-944974929) / (((/* implicit */int) arr_3 [i_0] [(unsigned char)2])))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))));
            arr_33 [i_0] [i_10] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65530)))))));
        }
        var_32 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            var_33 ^= ((/* implicit */short) 3373179494U);
            var_34 += ((/* implicit */unsigned short) arr_1 [i_11 + 3] [i_11 + 3]);
        }
    }
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            for (int i_14 = 4; i_14 < 22; i_14 += 1) 
            {
                {
                    arr_44 [i_14] [i_14] [i_14] [i_12] = ((/* implicit */signed char) ((unsigned int) ((arr_39 [i_12]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 3373179512U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) : (509073671U)))))));
                    arr_45 [i_12] [i_14] [i_12] [i_14 - 1] = ((/* implicit */unsigned short) arr_40 [i_12] [i_13] [i_14 - 1]);
                    var_35 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [i_14 + 1] [i_14 + 1] [i_14]))));
                }
            } 
        } 
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_39 [i_12])))) ? (((((/* implicit */_Bool) arr_39 [i_12])) ? (arr_41 [i_12] [i_12]) : (arr_41 [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_12] [i_12])) || (((/* implicit */_Bool) arr_41 [i_12] [i_12]))))))));
        var_37 = ((/* implicit */unsigned long long int) ((short) var_9));
    }
    for (unsigned int i_15 = 2; i_15 < 16; i_15 += 4) 
    {
        var_38 = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_15] [i_15 - 2])) % (((/* implicit */int) arr_47 [i_15 + 1] [i_15]))));
        arr_49 [i_15 + 1] = ((/* implicit */unsigned short) min((arr_39 [i_15 - 1]), (((/* implicit */long long int) max((((/* implicit */short) arr_46 [i_15 + 2])), (arr_40 [i_15 - 1] [i_15 + 1] [i_15 + 2]))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        arr_54 [i_16] [i_16] = ((((/* implicit */int) arr_12 [i_16] [i_16])) == (((/* implicit */int) arr_12 [i_16] [i_16])));
        var_39 *= ((/* implicit */unsigned char) arr_8 [i_16] [(short)13] [i_16] [i_16]);
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((arr_31 [i_16] [i_16]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_16] [i_16] [i_16] [i_16]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_16] [i_16] [i_16] [i_16])) ? (arr_0 [i_16] [i_16]) : (arr_43 [i_16] [i_16] [i_16] [i_16]))))));
        var_41 = ((/* implicit */unsigned long long int) (signed char)24);
    }
    var_42 |= ((/* implicit */short) ((_Bool) var_10));
}
