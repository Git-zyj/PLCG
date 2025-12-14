/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92496
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
    var_12 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((var_5) / (var_11)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12490))) : (var_6))) : (var_3))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)236))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */short) arr_8 [i_2] [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_17 [i_4] [i_4] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) max((min(((~(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0])) - (arr_8 [i_0] [i_0] [i_2] [i_0])))))), (((/* implicit */unsigned long long int) (short)-31644))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_7)), (arr_8 [i_0] [(short)14] [i_0] [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1094461288)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44650))) : (var_3)))))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [(unsigned char)15] [i_0]))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) -1908845660)))));
        arr_23 [i_5] = ((/* implicit */int) var_2);
        arr_24 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5])) ? (arr_7 [i_5]) : (((/* implicit */unsigned int) ((var_5) | (arr_8 [i_5] [i_5] [i_5] [i_5]))))));
        arr_25 [i_5] = ((/* implicit */unsigned short) var_11);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_36 [i_5] [i_6 - 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (((/* implicit */int) ((short) arr_2 [i_5])))));
                        arr_37 [i_8] [i_7] [i_6] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0U))));
                        arr_38 [i_5] [i_6] [i_7] [i_8] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_30 [i_6 - 1] [i_7])))) ? (-1972284735) : (((/* implicit */int) arr_35 [(short)13] [(short)13] [(short)13] [i_8]))));
                        arr_39 [(signed char)2] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-1LL) : (((/* implicit */long long int) var_5))))) : (((((/* implicit */_Bool) arr_34 [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) arr_14 [i_8] [i_6] [i_6] [i_6] [i_5]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        arr_42 [i_9] = ((/* implicit */unsigned char) ((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9]) && (((/* implicit */_Bool) var_5))));
        arr_43 [i_9] = ((/* implicit */_Bool) (+(arr_30 [i_9] [i_9])));
    }
    var_13 = ((/* implicit */signed char) max((var_7), ((unsigned short)38400)));
}
