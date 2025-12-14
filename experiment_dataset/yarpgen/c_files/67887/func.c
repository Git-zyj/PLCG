/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67887
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((max((((/* implicit */unsigned int) (unsigned short)54520)), (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1005711250U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)3))))))));
    var_11 = min((((/* implicit */int) var_0)), ((~(((/* implicit */int) ((_Bool) (signed char)-1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_4] = ((/* implicit */signed char) ((((unsigned int) var_9)) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_12 |= ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) var_3)));
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)54490)) : (((/* implicit */int) (signed char)10)))))))));
                        }
                        arr_16 [i_0] [i_1] [i_2 - 3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_2))))));
                    }
                    for (int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [(short)3] [(short)6])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (37530850U))) : (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1])), (3883502794U)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 483760878U)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned short)11019)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [(short)1]))))))) : (max((-3167111308771939432LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_6))))))));
                        var_15 = ((/* implicit */unsigned char) (_Bool)1);
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26667)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [7] [i_1] [i_1] [i_1]))))), (min((((/* implicit */unsigned int) arr_2 [i_0])), (3610146094U))))) != (483760878U))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_17 ^= ((/* implicit */short) (unsigned char)226);
                            arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)3] [i_1])) != (((/* implicit */int) arr_19 [i_6] [i_6] [i_1] [i_1] [i_1])))) ? ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-28493)) : (((/* implicit */int) (short)14269))))));
                            var_18 = ((/* implicit */unsigned long long int) (unsigned char)13);
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [5U] [i_5] [i_5] [(unsigned char)3] [5U] = ((/* implicit */short) ((((/* implicit */_Bool) (-(1441364200426126516ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)18)) ^ (455568417))))));
                            var_19 += ((/* implicit */unsigned short) (short)-16);
                            var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (17005379873283425099ULL)))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
                            var_22 = ((/* implicit */signed char) var_3);
                        }
                    }
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_23 -= ((/* implicit */unsigned char) arr_2 [i_8]);
                        arr_27 [i_0] [i_0] [i_2] [(short)6] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)211)), ((short)29)))) : (((/* implicit */int) (unsigned short)27014))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))) + (3211914611U)))));
                    }
                    arr_28 [i_1] = ((/* implicit */_Bool) ((signed char) var_7));
                    arr_29 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned short)19361);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 3; i_9 < 15; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            {
                arr_36 [i_9] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_9 - 3])), (arr_35 [i_9] [i_9 + 2] [15ULL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_35 [i_9] [i_9 + 2] [i_10]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27469))))))) : (((((/* implicit */_Bool) arr_32 [i_10] [i_9 + 2])) ? (1239548545U) : (arr_31 [i_9])))));
                arr_37 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) arr_31 [i_10])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (max((((/* implicit */unsigned long long int) var_7)), (arr_30 [i_9])))))));
            }
        } 
    } 
}
