/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58050
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
    var_12 = ((/* implicit */signed char) max(((unsigned char)28), ((unsigned char)192)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) 0U)) : (1023LL))))));
        var_13 = ((((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) | (((/* implicit */int) (signed char)44))))) ? ((-(((/* implicit */int) (unsigned char)6)))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (182))))))) + (2147483647))) >> (((var_7) - (3105626416U))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */int) ((short) 5314553970383243888ULL))) + (2147483647))) >> ((((((_Bool)1) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)-9246)))) + (70)))));
        var_15 &= ((/* implicit */int) ((signed char) arr_4 [i_1]));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = ((unsigned char) arr_14 [i_3]);
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [18U] [i_4])) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2] [(unsigned short)12])))))));
                    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((var_5) + (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_4] [i_2])))))));
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned char) (~(var_3)));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((signed char) arr_9 [i_5]));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (unsigned char)31);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 2] [i_6 - 2]))))))));
                            var_21 = ((/* implicit */short) arr_24 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2]);
                            arr_28 [i_2] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((2147483647) < (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            arr_29 [i_2] [i_5] [i_6] [(_Bool)1] [i_7] [(signed char)5] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16707)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)78))))) % (arr_24 [i_6 + 2] [i_6 + 2] [i_5] [i_6] [i_6 + 2] [i_6 + 2])));
                        }
                        var_22 = ((/* implicit */signed char) arr_12 [i_2] [i_2]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (3939193936U)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_34 [i_9] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (3939193936U))))));
            /* LoopSeq 4 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_38 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((arr_31 [i_9] [i_10]) <= (arr_24 [i_2] [i_2] [(unsigned char)14] [(unsigned char)14] [i_9] [i_10 - 1])));
                arr_39 [10U] [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_9] [16U])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_33 [i_2] [(_Bool)1]))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_43 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_36 [i_11 - 1] [i_11 - 1]))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_25 &= (!(((/* implicit */_Bool) ((arr_8 [i_9]) << (((arr_23 [i_2] [(short)2] [2LL] [2ULL]) - (8731134805283267797LL)))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_26 += ((/* implicit */long long int) arr_44 [(unsigned char)16] [i_9] [i_13] [23LL]);
                            arr_50 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_45 [i_2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))) || (((/* implicit */_Bool) arr_22 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1]))));
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_27 -= (short)(-32767 - 1);
                arr_53 [(unsigned char)6] [(_Bool)1] [i_15] [(_Bool)1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (_Bool)1))))));
            }
            var_28 &= ((/* implicit */long long int) arr_32 [i_2] [i_9]);
            arr_54 [i_2] [i_2] [i_9] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_2] [i_9] [i_9] [(unsigned char)17] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_31 [i_2] [i_2])))));
        }
        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) (unsigned char)14);
                            arr_65 [i_19] [i_18] [i_17] [i_16] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_2] [i_2] [i_2] [(_Bool)1]))) - (var_2)));
                            var_30 = ((/* implicit */signed char) ((0U) << (((((/* implicit */int) var_6)) - (52)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (short i_20 = 0; i_20 < 24; i_20 += 1) /* same iter space */
            {
                var_31 = arr_1 [i_2] [i_20];
                var_32 = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    for (signed char i_22 = 2; i_22 < 23; i_22 += 4) 
                    {
                        {
                            var_33 = ((((/* implicit */int) arr_56 [i_2] [i_16] [i_16])) & (((/* implicit */int) (signed char)63)));
                            var_34 = ((/* implicit */short) arr_14 [i_16]);
                            var_35 = ((/* implicit */short) var_1);
                            var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                var_37 += ((/* implicit */signed char) arr_40 [i_2] [i_16] [(signed char)4] [i_2]);
            }
            for (short i_23 = 0; i_23 < 24; i_23 += 1) /* same iter space */
            {
                arr_77 [i_23] [i_16] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_67 [i_2] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_2] [i_16]))))))));
                var_38 = ((/* implicit */signed char) arr_74 [(signed char)18] [i_16] [i_23]);
            }
            for (short i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
            {
                arr_80 [i_24] [i_24] [i_24] = (!(((/* implicit */_Bool) arr_11 [i_16] [i_24])));
                var_39 += ((/* implicit */unsigned char) arr_67 [i_2] [i_24]);
            }
            arr_81 [i_2] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_46 [i_2] [i_16] [i_2] [i_2]))))) ? (((((/* implicit */int) arr_57 [i_16])) & (arr_17 [i_2] [i_2] [(short)1]))) : (((((/* implicit */int) arr_62 [i_16] [i_16] [i_16] [i_2] [(short)21] [i_2])) >> (((/* implicit */int) (_Bool)1))))));
            arr_82 [i_2] [(short)8] [(short)11] = ((/* implicit */int) ((((/* implicit */long long int) arr_52 [i_16] [i_2] [i_2] [i_2])) ^ (((((/* implicit */_Bool) arr_62 [i_2] [i_16] [i_2] [i_16] [i_2] [i_2])) ? (((/* implicit */long long int) var_7)) : (var_5)))));
            var_40 -= ((/* implicit */signed char) (!(arr_48 [i_2] [i_16] [(signed char)6] [i_2] [i_2])));
        }
    }
}
