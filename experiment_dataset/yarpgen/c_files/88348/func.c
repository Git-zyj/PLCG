/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88348
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
    var_14 *= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) & (((((/* implicit */int) var_3)) % (((/* implicit */int) var_1)))))), (((/* implicit */int) var_11))));
    var_15 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)204))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(11030473723597639599ULL)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */int) max((11030473723597639616ULL), (((/* implicit */unsigned long long int) var_3))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (signed char)-66))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((3475759071U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-13)) <= (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4])))))));
                            var_19 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_8 [i_0])) + (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_7 [i_3])))));
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_3] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (var_7) : (arr_8 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_2)))))));
                            var_20 = arr_4 [i_0];
                        }
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_21 [i_6] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_2]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_6])) ? (819208225U) : (((/* implicit */unsigned int) arr_19 [i_6] [i_6] [i_6] [i_3]))));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((arr_16 [i_0] [i_1] [i_2] [i_1] [i_3] [i_7] [i_7]) - (((/* implicit */int) var_11))));
                            var_23 = ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) var_1)) : (-1));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_19 [i_1] [i_1] [i_2] [i_0]))) >= (((/* implicit */int) arr_28 [i_0] [i_8]))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_3] [i_1] [i_2] [i_3] [i_8] [i_0] [i_2])) ^ ((-(arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            arr_30 [i_0] [i_1] [i_1] [i_0] [i_3] [i_8] [i_8] = ((/* implicit */signed char) ((((arr_19 [i_0] [i_2] [i_3] [i_8]) + (2147483647))) >> (((arr_19 [i_1] [i_2] [i_3] [i_8]) + (1834218010)))));
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_33 [i_9] [i_9] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) 285660457));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (unsigned char)2))))) ? (36020000925941760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))))) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (signed char)-28))));
                    }
                    var_27 = ((/* implicit */signed char) ((arr_24 [i_0] [i_0] [i_0] [i_1] [i_2]) << (((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_1] [i_2])) ? (arr_24 [i_0] [i_1] [i_1] [i_2] [i_2]) : (arr_24 [i_0] [i_0] [i_1] [i_2] [i_2]))) - (557244381)))));
                }
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                        var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)13)), ((-(4503599090499584ULL)))));
                    }
                    var_30 = ((((arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_10]) > (((/* implicit */int) arr_1 [i_10])))) ? (((((_Bool) var_7)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_1] [i_10] [i_1] [i_10]))))))) : (((/* implicit */unsigned long long int) var_6)));
                }
            }
        } 
    } 
    var_31 += ((((/* implicit */_Bool) min((((((/* implicit */int) var_10)) + (((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) (unsigned char)145)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) min((((((((/* implicit */int) (signed char)-91)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (93))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 3475759071U)) > (7416270350111912017ULL))))))));
}
