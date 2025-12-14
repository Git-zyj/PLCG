/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60768
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) / (((-2116070167) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -2116070164)))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36187))) : (220981458U)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] = ((/* implicit */signed char) ((int) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_2]))))));
                        var_11 = ((/* implicit */_Bool) 1363084467U);
                        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_0 + 1]))))))));
                        arr_14 [i_1 + 1] [i_3] [i_3] = ((/* implicit */signed char) ((2116070167) << (((((/* implicit */int) (signed char)119)) - (119)))));
                        arr_15 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [9LL] [i_0]))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned short) ((unsigned char) arr_4 [i_1] [i_1 + 4]));
            arr_16 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_5 [14] [i_1 + 1])) ? (-2116070161) : (((/* implicit */int) var_6)))) + (2147483647))) >> (((((long long int) -2116070167)) + (2116070176LL)))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                arr_19 [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0] [i_4 - 2] [i_1 + 4]);
                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_4] [i_4] [i_4 - 1] [i_4 - 2]))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6 + 1] [i_5 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_5 - 1] [i_0 - 1])) : (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_5 - 1] [i_1]))));
                        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1030648534139038608LL))) | (((7331158139769587865LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_1 + 1] [i_4] [i_5] [i_5] = ((signed char) arr_22 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5 + 2]);
                        arr_28 [i_7] [i_7] [i_4] [i_5] [19ULL] [(unsigned char)0] = (-(2931882829U));
                        arr_29 [i_0] [i_1] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) / (4207386250312072643LL)))));
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_4])) ? (((/* implicit */int) arr_10 [(unsigned short)16] [i_1 + 2] [i_1])) : (((/* implicit */int) (_Bool)0)))) / (arr_8 [i_0] [i_4])));
                    }
                    for (int i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [(unsigned char)2] [i_8 - 3] [i_8 - 3])) % (arr_25 [i_8 - 2] [i_5] [i_8 + 2] [i_8] [i_8 + 2] [i_8])));
                        var_19 = ((/* implicit */signed char) (unsigned char)41);
                        arr_32 [i_5] [i_1] [7] [i_1] [7U] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 6125379568666810653ULL))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 12321364505042740963ULL)))))));
                        arr_33 [i_1] [i_5] = ((/* implicit */unsigned char) 293917922);
                        arr_34 [i_0] [i_0] [i_0] [i_5] [(unsigned char)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_4 + 1] [i_5 - 1] [i_8 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_8 - 2] [i_5] [i_1 + 2] [i_0]))));
                    }
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_26 [i_1 - 1] [(unsigned short)21] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_26 [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 4]))));
                    arr_35 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1 + 2]);
                    arr_36 [i_0] [(signed char)18] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2931882810U)) ? (arr_8 [i_1 + 2] [i_1 + 2]) : (arr_8 [i_1 - 1] [i_4])));
                }
                /* LoopSeq 1 */
                for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
                {
                    var_21 = ((/* implicit */long long int) (!((_Bool)0)));
                    var_22 = ((/* implicit */signed char) ((((1363084467U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45732))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1])))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)250))));
                    arr_41 [i_0] [i_1] [i_1] [i_4 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51502)) ? (3752905625U) : (((/* implicit */unsigned int) arr_8 [i_0] [i_0]))))) ? (arr_8 [i_0] [i_1 + 2]) : (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_9])))));
                    arr_42 [i_0] [i_0] [i_4] [i_9] [i_9] = (!(((/* implicit */_Bool) 542061671U)));
                }
            }
        }
        for (unsigned char i_10 = 3; i_10 < 18; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    {
                        arr_52 [i_12 + 1] [i_10] [i_0 - 2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_10] [i_11] [i_12] [i_10] [i_12 - 1]))) : (arr_50 [i_0] [0] [i_10 - 2] [i_11] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_10]))) : ((~(542061671U))))));
                        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_10] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [(signed char)16] [i_0 - 1])))));
                    }
                } 
            } 
            arr_53 [i_0] [i_10] [i_0] = arr_5 [i_0] [i_0];
            arr_54 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_45 [i_0])) % (540491561)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_0 + 1] [i_10 + 1])))) : (((((((/* implicit */_Bool) -4207386250312072644LL)) && (((/* implicit */_Bool) (unsigned char)4)))) ? (-4207386250312072631LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0 - 1] [i_0 - 2]))))))));
        }
        var_26 = ((/* implicit */int) arr_48 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
        arr_55 [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-96)), (min((arr_37 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0]), (arr_37 [i_0 + 1] [i_0] [i_0 + 1] [4LL] [19LL])))));
    }
    var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_7)));
}
