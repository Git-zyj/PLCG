/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61361
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_11))));
                    var_22 = ((/* implicit */signed char) ((int) var_11));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [22] [i_2 - 2] [i_2]), (arr_7 [i_0] [18LL] [i_2]))))) : ((~(0ULL)))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) max((min((((/* implicit */long long int) (signed char)112)), (-9223372036854775797LL))), (((((/* implicit */_Bool) (unsigned char)152)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4033198259U)) ? (((long long int) arr_8 [i_0] [i_0] [i_3 - 1] [i_3])) : (arr_4 [i_0] [i_3])));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (signed char)126)))))));
            arr_12 [(_Bool)1] [(unsigned short)23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) ((arr_15 [(unsigned short)14] [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
                        var_28 = var_19;
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                arr_22 [i_0] [i_6] [(unsigned short)18] = ((/* implicit */int) (signed char)-122);
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((14ULL) - (0ULL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_26 [(signed char)12] [i_6] [i_7] [i_8] [i_7] [12ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_8] [i_6])) ? (arr_4 [i_6 - 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1])))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) arr_21 [i_7] [i_0])) : (((/* implicit */int) arr_28 [i_0] [i_6 - 1] [i_6 - 1] [i_8] [i_9]))));
                        var_31 = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_32 = ((/* implicit */short) var_10);
                    var_33 &= ((/* implicit */unsigned short) (signed char)-91);
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [(signed char)6] [i_0]);
                /* LoopSeq 2 */
                for (long long int i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    var_34 *= ((/* implicit */unsigned short) ((unsigned long long int) (~(arr_30 [i_6 - 1] [(unsigned short)22]))));
                    var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_6 - 1] [i_10] [i_10] [i_11] [i_11]))));
                    arr_39 [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) arr_3 [i_0] [i_6]))));
                }
                for (long long int i_12 = 2; i_12 < 22; i_12 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [21] [i_0]))));
                    var_37 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_4))))));
                    arr_42 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_12 - 2] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
                    arr_43 [i_0] [i_10] [i_12] = ((/* implicit */unsigned short) ((var_3) ^ (((/* implicit */int) var_4))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        var_38 *= ((/* implicit */int) (signed char)-113);
                        arr_49 [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_16))));
                        var_39 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_6 - 1] [6] [i_6 - 1] [7LL] [i_6 - 1])) * (((/* implicit */int) ((((/* implicit */int) (signed char)39)) <= (((/* implicit */int) arr_0 [19ULL])))))));
                        var_40 = ((/* implicit */_Bool) (+((-2147483647 - 1))));
                    }
                } 
            } 
            arr_50 [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))));
            arr_51 [i_0] = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_6] [i_6] [i_6 - 1]);
            var_41 = ((/* implicit */unsigned int) arr_46 [i_0] [i_6] [i_6 - 1] [i_0]);
        }
        var_42 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) > (max((((/* implicit */unsigned int) (unsigned short)61445)), (var_13))))));
    }
    for (signed char i_15 = 4; i_15 < 14; i_15 += 2) 
    {
        arr_55 [i_15] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-102)), (6381964527322184933LL)))) && (((/* implicit */_Bool) ((unsigned char) var_9))))), ((!(((/* implicit */_Bool) min(((signed char)83), (((/* implicit */signed char) var_2)))))))));
        arr_56 [(signed char)4] = min((((/* implicit */unsigned long long int) (unsigned short)35280)), (17010440329771158513ULL));
        var_43 = ((/* implicit */short) ((((((/* implicit */_Bool) 0ULL)) ? (arr_11 [i_15 + 1] [(signed char)11]) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_15 - 3]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 7054832990203198992ULL)) || (((/* implicit */_Bool) arr_45 [i_15]))))) < (var_3)))))));
        arr_57 [i_15] = min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_15] [i_15 - 2] [i_15] [i_15] [i_15])) << (((arr_20 [i_15] [i_15] [i_15]) + (24738728045082009LL)))))) ? (((/* implicit */int) (unsigned char)21)) : (-3)))));
    }
    var_44 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_19)) : (var_18))), (var_3)));
    var_45 = ((/* implicit */long long int) -1);
}
