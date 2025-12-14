/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95349
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 -= ((((var_2) + (2147483647))) >> (((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)189)), (var_11)))) ? (((/* implicit */int) var_8)) : (var_2))) + (111))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_7)))) || (((/* implicit */_Bool) var_12))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((int) ((unsigned int) ((var_10) % (((/* implicit */unsigned long long int) 251229261)))))))));
                                arr_12 [i_1] [i_2] [i_1] = var_8;
                                var_16 *= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_7 [(unsigned short)2]))), (min((arr_7 [(short)24]), (arr_7 [4LL]))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((int) ((arr_0 [i_0]) + (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_6 [i_5] [i_5] [i_5] [i_5]) | (((/* implicit */long long int) arr_14 [i_5])))))));
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) var_2);
        arr_18 [i_5] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) -27LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [(short)2] [i_5]))) : (var_9))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) var_11);
        var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)67)) | (((/* implicit */int) (signed char)47))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_6] [i_6] [i_6] [i_6])))) : (((long long int) 7920202625161529297LL))))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_2))));
    var_22 = ((/* implicit */int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524))) / (1380234004U)))))))));
}
