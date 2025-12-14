/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77438
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) var_3));
        arr_3 [i_0 + 2] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10ULL])) ? (-88257762450730116LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        arr_18 [i_3] [(unsigned char)15] [i_1] [9] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) (-2147483647 - 1))));
                        arr_19 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */int) arr_9 [i_1]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
        {
            arr_23 [i_1] [i_5] = ((/* implicit */unsigned int) (unsigned char)250);
            arr_24 [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)5))))) ? (((((/* implicit */_Bool) 88257762450730115LL)) ? (((/* implicit */int) (short)12769)) : (((/* implicit */int) (unsigned short)46252)))) : (((/* implicit */int) (unsigned char)5))));
            arr_25 [i_5 - 3] = ((/* implicit */unsigned char) ((2335759417U) / (((/* implicit */unsigned int) arr_8 [i_5 + 2] [i_5 - 3] [i_5 - 1]))));
        }
        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_30 [i_7] [i_6] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned char)250))));
                arr_31 [14] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) 12166240689240797638ULL);
                arr_32 [i_1] [i_6] [i_6] [i_7] = ((/* implicit */int) 88257762450730115LL);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 1) 
            {
                arr_37 [i_1] [i_6] [i_8] [i_8 + 3] = ((/* implicit */short) 88257762450730115LL);
                arr_38 [i_1] [i_1] [i_6] [i_8] = ((/* implicit */_Bool) (unsigned short)11728);
                arr_39 [i_1] [i_6] [i_8 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -854817053)) ? (((/* implicit */int) (unsigned short)60391)) : (((/* implicit */int) (unsigned char)47))));
            }
        }
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            arr_42 [i_9] [i_9] = ((/* implicit */_Bool) var_0);
            arr_43 [i_9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3128997582710668574LL)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (unsigned char)0))))) / (arr_14 [i_9] [i_9] [i_9] [i_1] [i_1] [i_1])));
            arr_44 [i_1] [8ULL] = ((/* implicit */unsigned char) var_12);
            arr_45 [10ULL] = ((/* implicit */unsigned long long int) ((unsigned int) arr_40 [9] [(unsigned char)21] [i_9]));
        }
        arr_46 [i_1] [i_1] &= ((/* implicit */int) ((arr_33 [i_1] [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1])))));
        arr_47 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)179)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        arr_57 [i_1] [i_10] [(unsigned short)21] [i_10] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        arr_58 [i_1] [i_10] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */int) (short)17408)) >= (((/* implicit */int) ((unsigned short) arr_5 [i_12])))));
                        arr_59 [i_10] [i_10] [(unsigned char)23] [i_12] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 9223372036854775807LL)))));
                        arr_60 [i_1] [i_10] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]));
                    }
                    arr_61 [i_1] [i_10] [i_10] = ((/* implicit */unsigned int) 8259391507582210500LL);
                    arr_62 [i_1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) ((0) ^ (((/* implicit */int) (unsigned short)480))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) var_7);
    var_18 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            {
                arr_67 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_13] [i_14] [i_14]))) : (((((arr_7 [i_14] [i_14]) > (((/* implicit */long long int) arr_20 [i_13])))) ? (((((/* implicit */_Bool) (unsigned short)39991)) ? (3128997582710668577LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17429))))) : (((/* implicit */long long int) 2662407087U))))));
                arr_68 [i_13] [10ULL] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3678)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16896415310094461223ULL)) ? (((/* implicit */int) (unsigned short)47416)) : (((/* implicit */int) var_15))))) : (-88257762450730129LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 0U))))))) : (((unsigned int) (unsigned short)63)));
            }
        } 
    } 
}
