/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79539
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
    var_10 += ((/* implicit */short) (~(min((-1LL), (((/* implicit */long long int) var_4))))));
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) < (((/* implicit */long long int) (+(var_1))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (short)4470)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -7107832256904502274LL)) ? (((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_3] [i_4])) & (7107832256904502264LL))) : (((/* implicit */long long int) -684071013))));
                                var_14 |= ((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-6)) - (var_1)))));
                                var_15 |= ((/* implicit */unsigned int) (short)(-32767 - 1));
                                arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] |= var_3;
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_5 [i_0] [i_2]))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_1 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned short) 18446744073709551591ULL));
                                var_18 = ((/* implicit */int) arr_9 [i_0]);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_5]))))) ? (((unsigned long long int) arr_10 [i_0] [i_0] [i_6] [i_5] [i_0])) : (((unsigned long long int) -446128524))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    arr_24 [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_8])) >= ((~(((/* implicit */int) arr_1 [i_0]))))));
                    var_20 = ((/* implicit */short) ((unsigned long long int) 7107832256904502300LL));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_8] [i_7] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) arr_11 [i_0 + 2])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) (-(var_3)));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        for (signed char i_10 = 2; i_10 < 10; i_10 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) arr_14 [i_9] [i_9] [i_9] [i_10] [i_10 + 2] [i_9])), (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [i_10] [i_10] [i_9] [i_10]))) - (-7107832256904502265LL))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_19 [6LL] [i_10] [i_10]))));
                arr_30 [i_9] = ((/* implicit */unsigned int) (-(((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9]))) < (var_9))))));
                var_25 ^= ((/* implicit */signed char) max((3517263559U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((-7107832256904502251LL) - (arr_10 [i_10] [i_10] [i_9] [i_9] [i_9])))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_5);
}
