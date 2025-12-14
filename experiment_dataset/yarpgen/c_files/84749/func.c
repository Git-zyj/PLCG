/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84749
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) var_6)) : ((+(((var_7) << (((4294967295U) - (4294967275U)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2 - 3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) ((arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_3 + 1] [i_3 + 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (short)31038);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) var_2);
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) arr_3 [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
            arr_22 [i_0] = ((/* implicit */short) ((unsigned char) (short)31028));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-31028)) || (((/* implicit */_Bool) arr_5 [i_7 + 4] [i_7 + 3] [12U] [i_8 + 1]))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) arr_17 [i_9] [i_9] [i_8] [i_7 + 1] [7ULL] [i_0]))) : (((/* implicit */int) ((arr_8 [i_10] [i_7] [i_7] [14ULL]) != (((/* implicit */long long int) ((/* implicit */int) arr_27 [12LL] [i_7 + 2])))))))))));
                            var_15 = ((/* implicit */unsigned long long int) (+(arr_8 [i_7 + 4] [i_7 + 1] [i_7 - 1] [i_0])));
                            arr_31 [i_10] [2LL] [i_9] [i_0] [i_7 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)4)))) >= (((/* implicit */int) ((unsigned char) (signed char)11)))));
                        }
                    } 
                } 
            } 
            arr_32 [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_18 [i_0] [i_0] [i_7] [i_7 - 1] [i_7 + 4]));
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_11 = 2; i_11 < 12; i_11 += 2) 
        {
            for (unsigned char i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (short)(-32767 - 1))))));
                    var_18 = ((/* implicit */unsigned long long int) 599592851U);
                }
            } 
        } 
        arr_37 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_3 [i_0])))));
    }
    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */unsigned int) ((int) 16827683879822262120ULL))) : (((((/* implicit */unsigned int) 1604184810)) - (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2243375525U)))))));
        arr_41 [10LL] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) max((arr_39 [i_13] [i_13]), (((/* implicit */long long int) 660032608))))) | (max((5ULL), (1619060193887289495ULL))))), (((/* implicit */unsigned long long int) (+(445852740U))))));
    }
}
