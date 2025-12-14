/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73485
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned short) ((unsigned int) var_10));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_7 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((((/* implicit */_Bool) arr_3 [i_0] [(short)2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) var_1)) : (12476883208290821433ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_12 -= ((((/* implicit */int) arr_2 [(unsigned char)14])) << (((((/* implicit */int) arr_5 [(signed char)4] [(unsigned short)4])) + (30938))));
                var_13 += ((/* implicit */_Bool) ((arr_0 [2ULL]) ? (((/* implicit */int) arr_0 [8LL])) : (((/* implicit */int) arr_1 [i_1 - 1] [18ULL]))));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_11 [i_0] [i_0 + 2] [(short)9] [i_0] = ((/* implicit */short) arr_9 [17ULL] [i_1] [i_1]);
                arr_12 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((unsigned int) ((unsigned char) arr_6 [(short)1] [i_3 + 1] [i_1] [i_0 - 1])));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))) : (0U)));
            }
            var_15 = ((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [(unsigned short)9])) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (-2626493543788803584LL)))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_1) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)8888)) ? (((/* implicit */int) (unsigned short)23391)) : (((/* implicit */int) (unsigned char)180)))) : (((/* implicit */int) arr_4 [(_Bool)1] [(short)4])))))));
            var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)79));
        }
        arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0])))) : (((/* implicit */int) ((_Bool) ((unsigned char) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_4]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4] [3] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((((/* implicit */_Bool) arr_8 [i_4 + 1] [17LL])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) var_6))))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (arr_14 [i_4 + 1]))))))));
        var_19 = arr_9 [i_4] [i_4] [(signed char)3];
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) ^ (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_15 [9U] [9U])) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_5 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_5] [(short)6] [i_5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5])))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            arr_22 [i_5] [(short)3] = ((/* implicit */unsigned short) arr_18 [i_5]);
            arr_23 [(unsigned short)10] [i_6] = ((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_6]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 3; i_7 < 8; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 1; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) (~(arr_19 [i_9 + 2])));
                        arr_32 [(_Bool)1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_8 - 2] [i_6 - 1] [i_5 - 1] [i_7 - 2] [i_7] [i_8])) ? ((((_Bool)0) ? (arr_15 [i_5] [(_Bool)1]) : (((/* implicit */int) (_Bool)1)))) : (var_1)));
                        arr_33 [i_9 - 1] [i_7] [i_7] [i_9 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_31 [i_5 + 2] [i_6 - 1] [i_7 + 4] [i_8 - 2] [i_9 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_31 [i_5 + 1] [i_6 - 1] [i_7 + 4] [i_8 + 1] [i_9 + 1])) + (20657)))));
                    }
                    for (signed char i_10 = 1; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [i_6 + 1] [(unsigned char)4] [(short)0] [i_7] = ((signed char) arr_9 [i_5 + 2] [i_6 + 1] [i_7]);
                        var_22 = arr_26 [i_5] [(_Bool)1];
                        arr_37 [i_7] [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : (0ULL)));
                        var_23 = ((/* implicit */short) arr_21 [i_7 + 4]);
                    }
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_5 + 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_5 - 1])))));
                    var_25 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                    arr_38 [(_Bool)1] [i_7] [i_7 + 2] [i_7] = (i_7 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_5] [i_7])) + (2147483647))) << (((((/* implicit */int) arr_26 [(_Bool)0] [i_6 - 1])) - (4310)))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_5 [i_5] [i_7])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_26 [(_Bool)0] [i_6 - 1])) - (4310))))));
                    arr_39 [i_7] = ((((/* implicit */int) (unsigned char)255)) <= ((+(((/* implicit */int) arr_31 [i_5] [i_5] [i_5 + 2] [i_5] [7])))));
                }
                for (unsigned int i_11 = 2; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    var_26 += ((/* implicit */unsigned short) arr_8 [(_Bool)1] [i_11 + 1]);
                    /* LoopSeq 2 */
                    for (signed char i_12 = 2; i_12 < 8; i_12 += 2) 
                    {
                        arr_44 [8U] [i_6] [i_7] = ((/* implicit */int) ((unsigned char) arr_16 [i_5 - 1] [i_6 + 2]));
                        var_27 = ((/* implicit */long long int) (_Bool)1);
                        arr_45 [i_7] [i_7] = ((/* implicit */unsigned char) arr_29 [i_5 - 2] [i_5 - 1] [(unsigned char)5] [(unsigned char)5] [i_5 - 1] [i_12 + 4]);
                        arr_46 [i_7] [i_7] [i_7] [(short)8] [i_12 + 1] = ((/* implicit */unsigned long long int) arr_15 [6] [i_6]);
                    }
                    for (unsigned int i_13 = 1; i_13 < 11; i_13 += 2) 
                    {
                        arr_50 [i_5] [i_5] [6U] [i_5] [i_7] [i_11 - 2] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-2)) ? (arr_49 [i_5 + 1] [i_6 - 1] [(short)8] [i_6 - 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_6] [i_6 - 1] [i_11 - 1] [i_6] [i_13 - 1])))));
                        var_28 += ((/* implicit */unsigned long long int) (signed char)39);
                    }
                }
                var_29 = ((/* implicit */unsigned int) ((unsigned char) arr_20 [(unsigned char)11] [6LL]));
                arr_51 [i_5 - 1] [i_6] [i_7] = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */int) arr_31 [(_Bool)1] [(signed char)2] [(signed char)2] [7LL] [7LL])) + (2147483647))) << (((2147483647) - (2147483647))))));
                arr_52 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */_Bool) (unsigned short)42144);
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_0 [i_5]))));
                arr_55 [(unsigned char)11] = ((/* implicit */signed char) arr_24 [i_5] [i_14]);
                var_31 = ((/* implicit */unsigned short) arr_14 [i_6]);
            }
        }
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5 + 1] [i_5]))) != (((arr_4 [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (0U)))) : (((((/* implicit */_Bool) var_1)) ? (0ULL) : (13780274196101862507ULL))))))))));
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((signed char) ((unsigned char) arr_2 [i_5]))))));
    }
}
