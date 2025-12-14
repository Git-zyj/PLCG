/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64371
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) max((4854634787823659643ULL), (((/* implicit */unsigned long long int) 2147483647))));
        var_12 -= ((/* implicit */signed char) ((unsigned short) var_8));
        var_13 = ((/* implicit */unsigned short) max((var_13), (min((((/* implicit */unsigned short) ((short) var_2))), (arr_0 [(short)12])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            arr_7 [i_2] [i_1] = ((/* implicit */_Bool) (unsigned char)4);
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 3] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_7)) : (5811123856274869590LL)));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
            {
                arr_10 [i_1] [i_1] [i_2] [(unsigned char)6] = ((/* implicit */int) arr_6 [i_1] [i_2 - 2] [i_3]);
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (short)-1))));
                var_17 = ((/* implicit */int) arr_3 [i_1] [i_2]);
                var_18 = ((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2] [i_2 - 2]);
                var_19 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_2 - 2])) + (18446744073709551615ULL)));
            }
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                var_20 = (-(arr_8 [i_4] [(unsigned char)6] [i_2 + 1] [(signed char)18]));
                var_21 = ((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))))));
                var_22 = ((/* implicit */signed char) 431406178U);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_20 [i_6] [i_2] [(_Bool)1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((9223372036854775787LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_21 [i_1] [(unsigned char)20] [i_2] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) ^ (0ULL)));
                        arr_22 [i_1] [(_Bool)1] [i_4] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)11)) : (var_7)));
                        arr_23 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 1)) | (-5811123856274869583LL)));
                    }
                    for (signed char i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-34)) || (((/* implicit */_Bool) 18446744073709551608ULL))))) : (((/* implicit */int) var_4))));
                        arr_27 [i_1] [18] [i_5] [i_5] [i_5] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */long long int) arr_24 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 - 3] [i_2 - 1])) : (var_8)));
                    }
                    for (unsigned char i_8 = 4; i_8 < 20; i_8 += 1) 
                    {
                        arr_30 [i_2] [i_2] [i_4] [i_5] [i_8] = ((/* implicit */unsigned char) ((arr_6 [i_2 - 2] [i_8] [i_8 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_31 [i_1] [i_2] [i_4] [i_2] [i_8] = ((/* implicit */unsigned short) arr_8 [i_1] [i_4] [(signed char)6] [i_8 + 2]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (74319818) : (-74319800))));
                        arr_35 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [12LL] [i_2 + 1])) > (((/* implicit */int) arr_11 [12ULL] [i_2 + 1]))));
                    }
                    arr_36 [i_1] [i_2] [i_2] [i_5] [i_4] = ((/* implicit */short) (_Bool)1);
                }
                var_25 = ((/* implicit */int) (~(arr_4 [i_2 - 2])));
            }
            /* LoopSeq 2 */
            for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_27 = (+(arr_33 [i_1] [i_1] [i_10 + 1] [(unsigned char)10] [(unsigned short)9]));
                    arr_42 [i_2] [i_2 - 1] [(short)7] [i_11] = ((((/* implicit */unsigned long long int) var_7)) ^ (((unsigned long long int) var_10)));
                }
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    var_28 = ((/* implicit */int) arr_11 [i_2 + 2] [i_10 + 3]);
                    var_29 = ((/* implicit */unsigned long long int) ((((int) arr_29 [i_1] [12U] [i_1] [i_1] [(short)2])) | (((((/* implicit */int) (unsigned char)251)) & (((/* implicit */int) (unsigned char)206))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        arr_47 [i_13] [i_2] [i_10 - 1] [i_2] [i_1] = ((/* implicit */signed char) ((arr_24 [i_1] [(_Bool)1] [i_2 + 1] [i_12] [i_10 - 1]) << (((var_10) - (167009724U)))));
                        var_30 = ((/* implicit */_Bool) (unsigned short)27654);
                    }
                    for (signed char i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_1)) : (var_7)))));
                        arr_50 [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) arr_46 [i_1] [i_2] [i_10] [i_12] [i_14]);
                        var_32 = ((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_1] [(short)3] [i_2 + 2] [i_10 + 1]));
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_1] [i_2 - 2] [i_1])) || (((/* implicit */_Bool) 567283892042222956ULL))));
                    var_34 = ((/* implicit */long long int) var_9);
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        arr_56 [i_1] [i_2] [i_10] [i_15] [i_2] = ((/* implicit */int) (~(arr_13 [i_16] [i_10 + 4])));
                        var_35 = ((/* implicit */unsigned char) 1ULL);
                    }
                    for (int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        var_36 *= arr_29 [i_1] [i_2] [i_10] [(unsigned char)20] [i_17];
                        arr_60 [i_2] = ((/* implicit */int) (_Bool)1);
                    }
                    var_37 = (i_2 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)239)) << (((arr_57 [i_1] [i_1] [i_2] [(_Bool)1] [i_1] [i_1]) - (3444734783U)))))) <= (((long long int) var_10))))) : (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)239)) << (((((arr_57 [i_1] [i_1] [i_2] [(_Bool)1] [i_1] [i_1]) - (3444734783U))) - (677965710U)))))) <= (((long long int) var_10)))));
                }
                var_38 = ((/* implicit */int) var_0);
            }
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                arr_63 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned short)65535))));
                var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2 + 1] [i_2]))) / (var_8)));
            }
        }
        for (int i_19 = 0; i_19 < 22; i_19 += 4) 
        {
            var_40 += ((/* implicit */_Bool) var_3);
            var_41 = ((((/* implicit */unsigned long long int) arr_57 [i_1] [i_1] [i_19] [i_19] [i_1] [i_1])) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4324))) : (7670782471226506345ULL))));
        }
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            var_42 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
            arr_70 [11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_1]))) > (arr_57 [i_20] [(unsigned short)2] [i_1] [i_20] [i_20] [i_20])));
        }
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_21] [i_21] [(unsigned char)20])) ? (arr_44 [i_1] [(short)16] [i_21] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_1] [i_1] [1U] [1U] [i_21])))));
            var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [(short)0] [i_21] [(short)10] [10] [(short)0]))));
            arr_73 [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) | (arr_16 [i_1] [i_1])));
        }
    }
    var_45 = ((/* implicit */unsigned short) var_6);
}
