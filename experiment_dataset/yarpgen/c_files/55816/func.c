/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55816
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) 15ULL);
            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551589ULL)))) ? (var_15) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
            arr_5 [i_0 + 1] [(_Bool)1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_1 [4ULL])) + (90)))))))))) <= (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) * (var_6)))));
            var_21 += ((/* implicit */int) 18446744073709551594ULL);
            var_22 = ((/* implicit */int) ((3ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            var_23 ^= (~((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))) : (18446744073709551600ULL))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                arr_10 [i_0] [i_2] [i_3 - 2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3 - 1])) | (((/* implicit */int) ((signed char) (short)0))))))));
                arr_11 [i_0 + 3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_3 + 1] [i_2 + 3])))) ? (arr_0 [i_3 - 1] [i_2 - 2]) : (min((arr_0 [i_3 - 2] [i_2 + 1]), (((/* implicit */unsigned int) -1320810067))))));
                var_24 = ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [4ULL] [i_3 - 1])) ? (min((18446744073709551610ULL), (10ULL))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3 - 2] [9LL] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_3]))) : (18446744073709551583ULL))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_2 + 1] [i_2 + 3])), (18446744073709551605ULL)))) ? ((+(max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)0)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (arr_6 [i_0] [i_2] [i_2 - 1])))))));
                arr_14 [(signed char)6] [i_2 + 2] [i_4] = arr_3 [i_0] [i_2] [i_4];
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!((!(arr_13 [i_0 + 2] [i_4] [i_4])))));
                        var_27 += ((/* implicit */short) var_6);
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_0] [i_0 + 2] [i_5] [i_0] [i_0 - 1] [i_0 + 1])), (1474221201891225233LL)))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned int) arr_19 [i_0 - 2] [i_2] [(_Bool)1] [(_Bool)1] [i_2])), (arr_2 [i_0 + 2] [i_0 + 2]))))) : (((/* implicit */int) (signed char)-114))));
                        var_29 = ((((/* implicit */_Bool) var_16)) ? ((-(min((((/* implicit */unsigned long long int) (_Bool)1)), (3ULL))))) : (((/* implicit */unsigned long long int) min((arr_12 [(short)13] [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [12]))))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) arr_20 [i_0] [i_0] [i_5] [i_5] [i_5] [i_4] [i_4])), (((/* implicit */unsigned int) arr_3 [i_0] [i_2 + 3] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 18446744073709551604ULL)))))) : (var_2)));
                }
                for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_31 &= (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) : (18446744073709551601ULL))));
                    var_32 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_2]);
                    var_33 ^= ((/* implicit */long long int) 4294967271U);
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) (~(20ULL)));
                        var_35 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_36 = (~(min((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_24 [i_4] [(short)14] [i_4] [i_4])) : (((/* implicit */int) var_19))))), (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) -88456303)))))));
                        arr_27 [i_0] [i_2 + 3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((var_4) ? (((/* implicit */int) ((unsigned char) (unsigned char)241))) : ((~(((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_2 + 3] [i_4])))))) : (((/* implicit */int) arr_24 [i_4] [i_2] [(unsigned short)3] [(unsigned short)3]))));
                        arr_28 [(unsigned short)9] [i_4] [i_4] [i_7] [i_9] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)1023);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_2] [i_4] [i_10] &= max((min(((~(((/* implicit */int) arr_30 [i_0] [(_Bool)1] [i_2] [i_2] [i_0] [i_0])))), ((-(((/* implicit */int) var_3)))))), ((+(arr_23 [i_0 - 1] [15LL] [i_4] [i_2 + 1] [i_0 - 1] [i_0]))));
                        arr_34 [10ULL] [10ULL] [i_10] [i_10] [i_4] [i_10] [i_10] = ((/* implicit */_Bool) var_11);
                        arr_35 [i_0] [i_2] [i_4] [i_7] [i_7] [i_7] [i_10] |= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551595ULL)) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)15)))))));
                    }
                }
                var_37 ^= ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_2 - 1] [i_4]) ? (((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_0 - 1])) : (((((/* implicit */_Bool) 10106827847777140173ULL)) ? (min((((/* implicit */unsigned int) 643293529)), (arr_8 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)69)))))))));
            }
            var_38 = var_0;
            /* LoopSeq 1 */
            for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                var_39 = ((/* implicit */unsigned int) (~((~(-1)))));
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1696844769U))));
                    var_42 = ((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_11])) : (((int) arr_12 [i_0] [i_2 - 2] [i_0]))));
                    arr_42 [i_0] [i_2] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((8724505765163077007LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? ((+(((/* implicit */int) max((arr_9 [i_0] [i_12] [i_0] [i_12]), (((/* implicit */unsigned char) arr_21 [i_12] [i_12] [i_11] [i_12]))))))) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_11] [i_11]))));
                }
                for (signed char i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
                {
                    arr_45 [i_0] [i_2] [i_0] [i_2] [i_11] = ((/* implicit */_Bool) ((long long int) (unsigned short)52278));
                    var_43 = ((/* implicit */_Bool) var_5);
                }
                for (signed char i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
                {
                    var_44 = ((long long int) ((((/* implicit */_Bool) arr_41 [i_0 + 3] [i_0 + 2] [i_2 + 3] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0 + 1] [i_0 - 2] [i_2 - 2] [i_11]))) : (1147189129U)));
                    var_45 = ((/* implicit */_Bool) ((var_3) ? (2ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? ((-(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    var_46 = ((/* implicit */unsigned long long int) var_4);
                }
                arr_49 [i_0 + 1] [8U] [i_11] = ((/* implicit */int) 3348339787U);
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_24 [i_11] [i_2 + 1] [i_2] [(_Bool)1])))))) ? (((/* implicit */int) ((_Bool) arr_43 [i_0] [i_0] [4U] [4U]))) : (((/* implicit */int) ((unsigned char) (-(3695944641U)))))));
            }
        }
        var_48 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 1696844783U))) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0])) : (((((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])) >> (((var_17) - (3680934391U)))))));
        var_49 = arr_22 [(_Bool)1];
    }
    /* vectorizable */
    for (signed char i_15 = 2; i_15 < 14; i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] &= ((/* implicit */long long int) (+(18446744073709551586ULL)));
        /* LoopSeq 2 */
        for (signed char i_16 = 2; i_16 < 16; i_16 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (-(((((/* implicit */int) arr_36 [i_15] [0] [i_15])) ^ (((/* implicit */int) arr_25 [i_16] [i_16] [i_15] [i_16] [i_15])))))))));
            var_51 = ((/* implicit */unsigned short) var_14);
            arr_57 [i_16] [i_16] [i_15 - 1] |= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_31 [i_16] [2ULL] [i_15 - 1])) : (((/* implicit */int) arr_30 [i_15 - 2] [i_15] [i_16] [i_15] [i_15 - 2] [i_15])))));
        }
        for (signed char i_17 = 2; i_17 < 16; i_17 += 4) /* same iter space */
        {
            var_52 = ((/* implicit */signed char) (-(8417643614686716216LL)));
            var_53 = ((/* implicit */int) arr_29 [i_15] [i_15] [5ULL] [i_15] [i_17] [i_17 + 1]);
        }
    }
    /* vectorizable */
    for (signed char i_18 = 2; i_18 < 14; i_18 += 1) /* same iter space */
    {
        var_54 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_18 + 2] [i_18 + 3] [i_18 - 1] [10LL]))));
        arr_64 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) 15531025211332120859ULL))));
        var_55 -= ((unsigned long long int) arr_60 [i_18 + 2] [i_18 - 2] [i_18 - 1]);
        arr_65 [i_18] [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [i_18 + 3] [i_18] [i_18 + 3]))));
    }
    var_56 = ((/* implicit */long long int) var_3);
    var_57 ^= ((/* implicit */long long int) var_17);
    var_58 = ((/* implicit */int) var_12);
    var_59 = ((/* implicit */short) var_4);
}
