/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83745
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) var_6);
                            var_17 = ((/* implicit */long long int) (unsigned short)60625);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) var_0);
                                arr_18 [(_Bool)1] [i_1] [i_4] [12U] [3U] [8LL] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)126)) ? ((~(((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (max((((arr_3 [i_4] [i_5] [6U]) * (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6]))) : (arr_13 [i_0] [i_0] [i_5] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 14; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        {
                            arr_32 [i_7] = ((/* implicit */_Bool) var_11);
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_26 [i_8] [i_10]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned char i_12 = 2; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_39 [i_8] [i_8] [(unsigned char)3] = ((/* implicit */unsigned int) ((var_14) ? (min((arr_20 [i_7]), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)4910), (((/* implicit */unsigned short) (signed char)61))))) || ((_Bool)1)))))));
                            arr_40 [i_12] [i_11] [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned int) (unsigned char)15)), (1058227813U)))))), (max((var_9), (((unsigned long long int) var_0))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_29 [i_7] [i_7])) : (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_1)))) : (((arr_29 [i_7] [i_8]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_29 [i_7] [i_8]))))));
                            var_21 &= ((/* implicit */unsigned int) var_15);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_33 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) var_11))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) var_12)) ? (2635884676U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_23 = ((/* implicit */long long int) (short)23031);
                            var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_34 [i_7])) ? (var_2) : (((/* implicit */long long int) arr_34 [i_7])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)60625)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        {
                            var_25 = ((((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (_Bool)0)), (var_2)))))) < (arr_49 [i_16] [i_16] [i_15] [i_16] [i_8] [i_16]));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_31 [i_8]))) ? (((/* implicit */int) arr_31 [i_7])) : (((((/* implicit */int) arr_31 [i_15])) | (((/* implicit */int) arr_31 [i_7]))))));
                            arr_52 [i_16] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)3))))), (max((6631472420818930940ULL), (((/* implicit */unsigned long long int) arr_43 [i_7] [i_7] [13ULL] [i_7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2275551404U)) ? (arr_49 [i_7] [i_16] [14LL] [i_15] [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) >= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_8] [i_8]))))))))) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) (signed char)19))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_27 [i_7] [i_8]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
    {
        for (short i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            for (long long int i_19 = 3; i_19 < 20; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2386489727U)))) ? (min((((/* implicit */unsigned long long int) arr_61 [i_19 + 1] [i_19] [(_Bool)1] [i_19 - 2])), (var_9))) : (((18255343434165529773ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_19 - 3] [i_19 - 3] [i_19 - 3] [i_19 - 1])))))));
                                var_28 = ((/* implicit */_Bool) (unsigned char)212);
                                arr_66 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((unsigned short) ((((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19611))) : (2578621710U)))) : ((+(var_2))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 2; i_22 < 20; i_22 += 4) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 21; i_23 += 2) 
                        {
                            {
                                arr_72 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (-189933134) : (((var_14) ? (((/* implicit */int) var_1)) : (arr_67 [i_17] [i_18] [i_18] [i_18] [i_22] [i_17])))))));
                                var_29 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1070829198) : (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
