/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71428
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
    var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (short)32743))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-100), ((signed char)-70))))) : (min((((/* implicit */long long int) (unsigned short)64833)), (var_8)))))));
    var_15 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((unsigned long long int) arr_0 [i_0] [i_0]))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)26671)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38858))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) (short)-22695);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)75)) ? (4294967295U) : (((/* implicit */unsigned int) var_4))));
                            arr_18 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (1036448246U)))) > (arr_10 [i_0] [i_3 + 1] [i_0])));
                            arr_19 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)31064)) + (((/* implicit */int) (short)22716))))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) (short)22687)) ? (((/* implicit */unsigned int) var_6)) : (var_12)))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((long long int) arr_2 [i_5]));
            var_18 = ((/* implicit */unsigned long long int) (-(arr_2 [i_0])));
        }
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) ((((4611686018427387904LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)17749))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_6 [i_7]))))));
                arr_30 [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) 423926121);
            }
            for (unsigned int i_8 = 2; i_8 < 9; i_8 += 1) 
            {
                arr_33 [i_8] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 4131051098599686674ULL)) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (unsigned short)60119))))));
                var_20 = ((/* implicit */unsigned short) arr_29 [i_0] [i_6] [i_8] [i_8 + 2]);
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 534771534U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))) : (arr_32 [i_0] [i_6])));
                            var_22 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-73)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_42 [i_8] [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) var_7);
                    var_23 = ((/* implicit */signed char) (unsigned char)14);
                    var_24 = ((/* implicit */int) arr_28 [i_11] [i_8 + 1] [i_6] [i_0]);
                }
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_4)) % (var_8)));
                arr_46 [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_12])) != (((((((/* implicit */int) arr_11 [i_0] [i_0])) + (2147483647))) << (((939524096) - (939524096)))))));
                arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_21 [i_0] [i_0]) % (arr_21 [i_6] [i_12])));
                arr_48 [i_0] [i_6] [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)54))));
            }
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                arr_53 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_6] [i_13])) ? (arr_10 [i_0] [i_6] [i_13]) : (((/* implicit */unsigned long long int) arr_2 [i_6]))));
                arr_54 [i_0] [i_6] = ((/* implicit */unsigned short) var_8);
            }
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) (~(arr_16 [i_0] [i_0] [i_0] [i_6] [i_6] [i_14] [i_14])));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    arr_61 [i_14] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_6]);
                    arr_62 [i_0] [i_0] [i_14] [i_15] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31076)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
        }
    }
    var_27 = ((/* implicit */unsigned char) var_2);
    var_28 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) 18431131442747923521ULL)) ? (1585119831533592450LL) : (var_8)))));
}
