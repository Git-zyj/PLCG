/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80594
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
    var_11 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (signed char)99);
                    arr_9 [i_2] [(unsigned char)0] = arr_7 [i_0];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3 - 1] [i_2] [i_2 + 1] [i_2] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((int) arr_12 [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20846))) : (var_6))))), ((((-(arr_13 [i_3 + 1] [i_3 + 1] [i_2] [i_1] [7LL]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1857434934U))))))));
                                var_13 = ((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_4]));
                                var_14 = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    arr_17 [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] &= (!(((/* implicit */_Bool) ((long long int) arr_7 [i_1 - 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        for (short i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_9);
                    arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((((/* implicit */long long int) 1048575)), (9223372036854775807LL))))) ? (arr_24 [i_5 - 1] [i_6] [i_7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (unsigned short)65535)))))))))));
                    var_16 += ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (short)-23826)))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 4; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_3))));
                                arr_34 [i_5] [i_5] [i_6] [(unsigned short)12] [i_7] [i_8] [i_9] &= ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 4; i_10 < 19; i_10 += 1) 
    {
        for (short i_11 = 3; i_11 < 19; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) arr_35 [i_10 - 2] [i_10]);
                    var_19 = ((/* implicit */int) (+(2972083844871602932LL)));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned short) (((_Bool)0) ? ((+(((/* implicit */int) arr_36 [i_10 - 4])))) : ((-(((/* implicit */int) (unsigned short)44690))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (min((((/* implicit */long long int) (+(arr_38 [i_10] [i_13])))), (((long long int) (+(1608262331))))))));
                        /* LoopSeq 2 */
                        for (int i_14 = 2; i_14 < 17; i_14 += 4) 
                        {
                            arr_47 [i_10] [i_10] [7ULL] [i_10 - 3] [i_10] = ((/* implicit */unsigned int) max(((+((~(var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : ((~(var_2))))))));
                            var_21 = ((/* implicit */unsigned long long int) arr_41 [(_Bool)1]);
                            var_22 -= ((/* implicit */unsigned char) (+((~(arr_38 [i_14 - 1] [i_11 - 1])))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            arr_51 [i_13] [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65517))));
                            var_23 = max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3795)) ? (((/* implicit */int) (unsigned short)44691)) : (((/* implicit */int) (short)-1959))))), (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-4436))))))), (((/* implicit */unsigned int) var_9)));
                            var_24 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((int) (unsigned short)65532))))), (((unsigned int) ((var_2) & (((/* implicit */int) arr_41 [i_10])))))));
                        }
                        var_25 ^= ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            var_26 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)22)) ? (var_8) : (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (unsigned short)20846))))))));
                            arr_54 [i_10] [i_10] [i_10] [i_10] [2ULL] [i_16] = ((/* implicit */short) (-(((/* implicit */int) max((arr_35 [i_10 - 3] [i_11 + 1]), (arr_35 [i_10 + 2] [i_11 + 1]))))));
                            var_27 = ((/* implicit */unsigned int) var_5);
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), ((+(((((/* implicit */_Bool) arr_40 [i_10] [i_11 - 3] [(unsigned char)19] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11]))) : (-2972083844871602930LL))))))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (var_1))), (((/* implicit */unsigned long long int) ((_Bool) 7537643058389537728ULL))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
