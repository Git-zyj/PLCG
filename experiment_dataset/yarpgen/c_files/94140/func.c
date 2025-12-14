/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94140
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [i_1]);
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) 18446744073709551615ULL));
                var_12 += ((/* implicit */unsigned long long int) ((-7034460374839348386LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)4] [i_1])))));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (((_Bool)1) || ((_Bool)1)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_3])))));
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_2])))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_3] [i_3])), (arr_12 [i_2] [i_3] [(unsigned char)1] [i_5])))))) : (((/* implicit */int) ((short) ((long long int) var_5))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)0))))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_2] [i_2] [18LL] [i_2] [i_9] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2079816155U))), (((/* implicit */unsigned int) ((unsigned char) var_4)))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])))), (((/* implicit */int) var_8)))))));
                                arr_29 [i_2] [9U] [i_9] [i_7] [i_9] [i_8 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_15 [i_9] [i_3] [(signed char)7]))) | (arr_15 [(short)19] [i_7] [5LL])));
                                var_17 = ((/* implicit */unsigned short) var_4);
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((var_5) >= (((/* implicit */int) arr_27 [i_2] [i_9] [i_9] [i_8] [i_2]))))), (min((var_8), (arr_27 [i_7] [i_8 - 1] [i_8] [i_7] [i_7]))))))));
                                var_19 += ((/* implicit */signed char) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [i_9 + 1] [i_9] [i_9 - 1] [i_9] [i_2]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) arr_10 [i_2] [11ULL]);
                    arr_30 [i_7] [i_3] [i_2] = ((/* implicit */signed char) var_5);
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_2] [(unsigned char)10] [i_2] [i_2] [i_2] [i_2] [0])) ^ (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */unsigned int) var_7);
                    var_23 = ((/* implicit */unsigned long long int) (unsigned short)65520);
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_2] [i_3] [i_10])) ? (((/* implicit */int) arr_23 [i_2] [i_3] [i_10] [i_11] [i_11])) : (((/* implicit */int) arr_33 [i_2] [i_3] [i_10]))));
                        arr_37 [i_2] [i_3] = ((/* implicit */short) ((arr_23 [i_11] [i_10] [i_3] [i_2] [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                    }
                    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */int) arr_34 [15U] [i_2] [i_10] [i_12]);
                        arr_40 [i_12] [i_12] [i_12] [i_2] = ((/* implicit */_Bool) var_4);
                        var_26 = ((/* implicit */_Bool) (+(2147483647)));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((1853344036U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        var_28 += ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)896)))) | ((~(((/* implicit */int) (_Bool)1))))));
                    }
                }
                for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    var_29 = ((/* implicit */long long int) (_Bool)1);
                    arr_43 [i_2] [i_3] [i_13] [i_13] = ((/* implicit */unsigned int) var_1);
                }
                var_30 += ((/* implicit */unsigned long long int) (-((+(((int) arr_22 [i_2] [i_2]))))));
            }
        } 
    } 
    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (1250798869U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (15178695270943886137ULL))));
}
