/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91412
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_20 += ((/* implicit */short) max(((~(arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2]))), ((+(arr_11 [(short)8] [i_1] [i_0] [i_2] [i_2] [i_1 - 3])))));
                            var_21 = ((/* implicit */unsigned short) -1LL);
                            var_22 -= ((/* implicit */unsigned char) 1LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (arr_15 [i_0] [i_1 - 3] [(short)12] [i_1])));
                            var_24 = ((/* implicit */long long int) max((var_24), (-19LL)));
                            var_25 = var_14;
                            var_26 = ((_Bool) (+((+(arr_10 [i_0] [i_1] [i_4] [i_4])))));
                            arr_17 [i_0] [6LL] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_27 &= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24052))))), (((/* implicit */unsigned int) var_5)))) << (((min((((/* implicit */long long int) ((arr_5 [i_0] [i_8]) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8])))))), (-1LL))) + (10LL)))));
                                var_28 = ((/* implicit */short) min((((/* implicit */unsigned int) min(((unsigned short)65512), (((/* implicit */unsigned short) (short)-14630))))), (var_11)));
                                var_29 = ((/* implicit */short) (+(min((((/* implicit */long long int) (unsigned short)65512)), ((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 1; i_11 < 10; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_30 = max((((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_28 [i_9 + 1] [i_13]))))), (((((/* implicit */_Bool) 21LL)) ? (((/* implicit */int) (short)31370)) : (((/* implicit */int) (signed char)-68)))));
                                var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_10] [i_11] [i_12 + 2] [i_13])), (max((((/* implicit */unsigned int) (!(var_1)))), (arr_36 [i_12 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) var_1);
                                var_33 &= ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_9 - 1]))) * (min((((/* implicit */unsigned long long int) arr_31 [i_11])), (var_13))))), (min((((((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_9] [i_9])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9] [i_9]))))), (((/* implicit */unsigned long long int) arr_35 [i_9 + 1] [i_11 - 1] [i_9] [i_9 + 1]))))));
                                var_34 &= ((/* implicit */unsigned int) var_16);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            {
                                arr_50 [i_9] [10ULL] [(unsigned char)9] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */int) ((arr_42 [i_9 - 1]) ? (max((((/* implicit */unsigned long long int) (short)-31372)), (arr_38 [i_9 - 1] [i_9 - 1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_16])) ? (((/* implicit */int) arr_42 [i_9 - 1])) : (((/* implicit */int) (short)-29072)))))));
                                arr_51 [i_16] [i_16] [i_16 - 2] [i_16] [i_16 - 2] = ((/* implicit */unsigned short) min(((-2147483647 - 1)), ((-(arr_14 [(short)10] [i_16 - 2] [i_16 + 2] [i_16 + 2])))));
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [2LL] [i_16] [i_16])) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) arr_16 [i_16] [i_9] [(short)0] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (arr_25 [i_9] [18LL] [i_11] [18LL] [i_17]))))) : (((((/* implicit */_Bool) (short)31371)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9] [i_10] [(unsigned char)10] [i_17]))) : (var_19)))))) < (((((/* implicit */_Bool) ((long long int) arr_13 [i_9 + 1] [i_10] [i_11] [i_9 + 1]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_11)))) : (arr_19 [i_16] [i_11] [i_10] [i_16])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 1; i_18 < 10; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */int) ((short) max((((((/* implicit */int) (short)-8340)) < (((/* implicit */int) (short)0)))), (var_2))));
                                arr_58 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) min((max((((((/* implicit */int) arr_29 [i_9] [i_9])) ^ (((/* implicit */int) (short)31372)))), (((/* implicit */int) arr_39 [9] [i_10] [2ULL] [i_10])))), (((/* implicit */int) ((unsigned short) (unsigned char)88)))));
                                var_37 = ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_31 [(_Bool)1]))));
                                var_38 = ((/* implicit */_Bool) ((unsigned char) 9223372036854775793LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
