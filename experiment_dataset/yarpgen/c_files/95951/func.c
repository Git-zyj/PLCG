/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95951
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((arr_0 [i_0]) < (var_16))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))) : (arr_1 [(_Bool)1])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */short) arr_2 [i_1]);
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) (short)10398)))) || (((/* implicit */_Bool) ((unsigned char) var_0))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13)))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) ((2U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))), (arr_5 [i_0] [4LL])));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_19 [i_4] [i_4] [i_3] [i_4] = ((int) arr_12 [i_3] [i_4]);
                    var_22 = ((/* implicit */unsigned short) (!((_Bool)1)));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((arr_13 [10] [i_3]) - (((/* implicit */long long int) (+(371530259U))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 3; i_7 < 13; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_27 [i_3] [i_6] = ((/* implicit */_Bool) ((unsigned char) (short)-4796));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_3])) / (((/* implicit */int) arr_17 [i_8]))))) ? ((-(((((/* implicit */_Bool) var_16)) ? (arr_20 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)1] [i_6]))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-4796)))))));
                        arr_28 [i_8] = ((/* implicit */_Bool) 2696532191U);
                    }
                } 
            } 
            arr_29 [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)37247)) != (((/* implicit */int) (unsigned char)4))));
        }
        arr_30 [i_3] = ((unsigned int) var_18);
    }
    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            for (short i_11 = 3; i_11 < 15; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_11 - 3] [i_11 + 1] [i_11 - 1])) ? (((var_4) ? (1598435100U) : (arr_34 [i_9] [i_10] [i_11 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        arr_41 [i_9] [(signed char)2] [i_10] [11] [i_11 - 2] [7] = ((/* implicit */int) var_1);
                    }
                    arr_42 [i_11 + 1] [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) min((arr_37 [i_9] [i_10] [i_11 - 2]), (((((/* implicit */_Bool) arr_37 [i_11 - 1] [i_11 - 2] [i_9])) ? (min((arr_31 [i_9] [i_9]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) arr_36 [i_9] [i_10] [i_11 - 3] [i_11 - 2]))))));
                }
            } 
        } 
        arr_43 [i_9] [i_9] = ((/* implicit */_Bool) var_6);
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-12960)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7)))) ? (((((/* implicit */_Bool) arr_36 [14LL] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) 859911497)) : (1598435082U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [(unsigned short)2]))))))) : ((-(2484006042U)))));
        var_27 = ((/* implicit */unsigned int) arr_33 [i_9]);
    }
    var_28 = ((/* implicit */_Bool) var_7);
    var_29 = ((signed char) (short)-4795);
}
