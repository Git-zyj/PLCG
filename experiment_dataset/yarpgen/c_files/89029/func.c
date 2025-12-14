/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89029
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_10 = ((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [1LL])) ? (arr_2 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))));
                        var_11 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)224))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 -= var_0;
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1])) : (arr_5 [i_1])))));
                            arr_14 [i_0] [i_4] [12U] [i_3] [i_1] [i_1] = ((/* implicit */short) ((long long int) arr_13 [i_0] [i_0] [i_2] [i_0] [i_1]));
                        }
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(arr_2 [i_2 - 4]))))));
                            arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_2 - 2])) : (((((/* implicit */_Bool) arr_16 [i_1] [(short)0] [i_5] [i_3])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [8LL] [1])) : (((/* implicit */int) (unsigned short)9069))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_15 -= ((/* implicit */unsigned short) var_5);
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-((+(arr_4 [i_0] [i_6]))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            arr_24 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_8);
                            arr_25 [i_1] [(unsigned char)10] [(unsigned char)10] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)234));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [(short)10] [i_0] [i_2] [i_3] [i_7])) ? (arr_13 [i_3] [i_3] [(unsigned short)8] [i_2 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                            var_18 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2 - 4] [i_3] [i_7])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13908))))));
                            var_19 = ((/* implicit */unsigned char) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        for (long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20028))) : (arr_13 [i_1] [i_1] [i_8 + 4] [i_9] [i_1]));
                                var_21 = ((/* implicit */long long int) 0);
                                var_22 -= ((/* implicit */unsigned short) (-(arr_23 [i_2] [i_2] [i_8 - 2] [i_8] [i_9])));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [(unsigned char)6] [(unsigned char)6] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_2 - 4]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 4) 
    {
        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_11] [i_11] [i_10 - 2] [i_10] [i_10 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)212)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_10 - 1] [i_11] [i_10] [i_11] [6ULL])))))))) : (max((((/* implicit */long long int) ((signed char) arr_22 [i_10] [i_10] [i_10] [i_10] [8LL] [i_11] [i_11]))), (((((/* implicit */_Bool) arr_20 [i_10] [i_10 - 2] [i_10] [(unsigned short)7] [i_11])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                arr_37 [i_10] [i_11] = ((/* implicit */unsigned char) arr_23 [i_10] [i_11] [i_10] [i_11] [i_11]);
                var_24 += ((264904119) * (((/* implicit */int) (unsigned char)0)));
                var_25 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_26 [i_10])))));
                var_26 = ((/* implicit */long long int) min(((!((!(((/* implicit */_Bool) var_9)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10] [i_10] [i_10 - 2] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [6] [i_11] [i_11] [i_10 + 1] [0U] [i_10] [3U]))) : (var_1))))))));
            }
        } 
    } 
}
