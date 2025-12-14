/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74904
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
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) var_10)))))) >> (((-4227872397998694220LL) + (4227872397998694239LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) min(((short)-10654), ((short)-32751)))))) + (max((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3233142596358263829ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) 6183503900437597980LL))))) ? (var_6) : (((((/* implicit */_Bool) var_4)) ? (arr_0 [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_1 [i_0] [i_0])))))))));
            var_20 = ((/* implicit */unsigned char) (+((-(arr_5 [i_0] [i_0] [i_0])))));
            var_21 = ((/* implicit */short) ((((/* implicit */int) ((arr_6 [i_0] [i_0]) > (((var_2) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) < (((/* implicit */int) ((((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_1)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                arr_9 [i_2] [i_1] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 1]))));
                arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 2]) != (arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 2])));
                arr_11 [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_0]);
            }
            for (short i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                var_22 ^= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) << (((var_9) - (14462852141675484946ULL)))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) (-((~(max((((/* implicit */unsigned long long int) (short)-10654)), (arr_7 [i_0] [i_1] [i_3 - 1])))))));
                    var_24 = ((/* implicit */unsigned long long int) (short)-10641);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_18 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [(unsigned char)3] [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 2])) * ((+(((/* implicit */int) arr_1 [5ULL] [i_3 + 1]))))));
                    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-10641))))));
                }
                /* LoopSeq 3 */
                for (int i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_24 [1] [i_0] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) var_15)), (var_6))), (((/* implicit */unsigned long long int) var_16)))) + (((/* implicit */unsigned long long int) max((arr_22 [i_7] [i_0] [i_3] [i_3 - 1] [i_6] [i_6 + 1]), (((/* implicit */long long int) 1273707994)))))));
                        arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_20 [i_6 - 1] [i_3 + 2] [i_6 - 1] [i_6 + 1] [i_3 + 1] [i_3 + 2])))) ? (arr_20 [i_6 - 1] [(short)5] [i_6 - 1] [i_6 + 1] [i_3 + 1] [i_3 + 3]) : (((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_3 + 1] [i_0])) ? (arr_20 [i_6 - 1] [i_3 + 1] [i_6 - 1] [i_6 + 1] [i_3 + 1] [i_3]) : (6183503900437597987LL)))));
                        arr_26 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1141843751)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) - (var_17)))) ? ((-(var_1))) : (((/* implicit */long long int) ((/* implicit */int) (short)10637)))))) : (((((/* implicit */_Bool) ((2147483647) + (((/* implicit */int) (short)-10641))))) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_16))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_0 [i_0])))))));
                        arr_27 [i_0] [(signed char)22] [i_7] = ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_3] [i_6] [i_7]);
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_6 [i_6] [i_1]))));
                    }
                    arr_28 [i_0] [i_0] [9LL] [(unsigned short)19] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                }
                for (short i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) (((-(((var_17) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))))))) + (((/* implicit */long long int) ((/* implicit */int) (short)-10641)))));
                    var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32512))))) : (((/* implicit */int) var_0))));
                    arr_31 [i_8] [i_1] [i_3 + 3] [i_0] = ((/* implicit */long long int) max((arr_6 [i_3] [i_3]), (arr_6 [i_0] [i_0])));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        arr_37 [i_0] [(short)13] [i_0] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3 + 2] [i_3] [i_3 + 2] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_30 [i_3 - 1] [i_3 + 2]))));
                        var_29 |= ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_1])) <= (((/* implicit */int) arr_36 [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_1]))));
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (unsigned char)129))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)10637)) || (((/* implicit */_Bool) (unsigned char)147))))))))));
                        arr_40 [i_0] [(_Bool)1] [i_3 - 1] [(_Bool)1] [i_9] [i_11] = ((/* implicit */_Bool) -723850904920159245LL);
                        var_31 &= ((/* implicit */unsigned short) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) (+(arr_20 [i_3 + 2] [i_1] [i_3 + 3] [i_9] [i_0] [(unsigned char)10]))))));
                    }
                    for (short i_12 = 2; i_12 < 22; i_12 += 3) 
                    {
                        arr_43 [i_0] [i_1] [i_3 - 1] [i_9] [i_12] = ((/* implicit */long long int) arr_14 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1] [i_3 + 3]);
                        arr_44 [i_0] [i_9] [i_3 + 1] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) (+((+(7393971960150578033LL)))));
                    }
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_32 -= ((/* implicit */unsigned char) ((arr_46 [i_3 + 3] [i_3 + 1] [i_3 - 1]) + (arr_46 [i_3 + 3] [i_3 + 1] [i_3 - 1])));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_32 [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_1]))));
                        arr_47 [i_0] [i_0] [i_3] [i_9] [i_13] = arr_21 [i_9] [(signed char)3] [(signed char)3];
                        arr_48 [17ULL] [17ULL] [i_3] [i_3] [i_9] [i_9] = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-13507))))) | (((/* implicit */int) var_4)));
                    }
                    arr_49 [(unsigned short)21] [i_9] [i_3] [4ULL] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                }
                arr_50 [i_0] [i_1] [i_3] &= ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_3 + 3])), (((((/* implicit */int) arr_42 [i_3 + 3] [i_1] [i_1] [i_3 + 1])) / (((/* implicit */int) var_4))))));
            }
        }
        arr_51 [i_0] = ((/* implicit */unsigned char) ((((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) >> (((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_4)))) - (17072)))));
        var_34 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)10669))))));
        arr_52 [(unsigned char)3] = ((/* implicit */int) min((min((arr_22 [i_0] [(short)18] [i_0] [22] [i_0] [(signed char)12]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (-370680390747049870LL)))))), (((/* implicit */long long int) ((min((var_17), (((/* implicit */long long int) var_16)))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)63)) | (((/* implicit */int) var_4))))))))));
    }
}
