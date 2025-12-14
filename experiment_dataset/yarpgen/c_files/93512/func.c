/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93512
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((3674071197U), (((/* implicit */unsigned int) (unsigned short)47303))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)192)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((short) (short)(-32767 - 1)))), (((unsigned short) arr_10 [i_0] [i_1] [i_2 + 1] [i_1]))))) : (((var_14) ^ (((/* implicit */int) var_11))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_2] [i_2 - 2])) && (((/* implicit */_Bool) arr_4 [i_3 - 1] [i_2 - 1] [i_2 - 1]))));
                            var_19 = ((/* implicit */unsigned int) (unsigned char)0);
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_13 [14U] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            {
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */long long int) (-2147483647 - 1))) / (-9223372036854775801LL)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_5] [(unsigned char)12] [i_5] [i_5 + 1] [i_5] [i_5 + 1])) - (var_3)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    arr_22 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32765)) - (((/* implicit */int) (unsigned char)229))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_29 [i_5] [i_6] [i_7] [i_6] = (-(((/* implicit */int) arr_7 [i_5] [i_6 + 1] [i_6 - 1])));
                                arr_30 [i_5] [i_8] [i_7] [i_6 + 3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) (short)20701))))) * (((7762809172981451271ULL) ^ (((/* implicit */unsigned long long int) var_13))))));
                                arr_31 [i_5] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((var_16) / (((/* implicit */int) arr_10 [i_6] [i_7] [i_8] [i_9]))));
                                arr_32 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)49629)) : (((/* implicit */int) (unsigned short)12))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (_Bool)0);
                }
                arr_33 [i_5] [i_5] [i_5] = ((/* implicit */short) ((int) ((_Bool) var_0)));
                arr_34 [i_5] = ((/* implicit */short) arr_24 [i_5] [6LL] [i_6 + 2] [i_5]);
                var_23 = (i_5 % 2 == zero) ? (((/* implicit */short) ((((((long long int) arr_12 [i_6 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1])) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_20 [i_5])) + (31633))) - (17)))))) : (((/* implicit */short) ((((((long long int) arr_12 [i_6 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1])) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_20 [i_5])) + (31633))) - (17))) - (12675))))));
            }
        } 
    } 
    var_24 = var_13;
    var_25 = ((/* implicit */short) var_16);
}
