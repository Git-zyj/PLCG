/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96547
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) -5606398794774721892LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) var_0))))) > (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */int) (unsigned char)56))))) : (((/* implicit */int) arr_4 [(short)7] [(short)7] [i_1])))))))));
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned char) var_15);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_2] [i_4 + 1])) > (var_7))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        arr_18 [i_5] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(5606398794774721896LL)))) ? (((long long int) arr_12 [i_2] [i_3] [i_3])) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 + 1] [i_5 + 1])))));
                        arr_19 [14LL] [14LL] [14LL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [(short)16] [i_4 + 1] [i_4] [(short)16] [i_5])) && (((/* implicit */_Bool) ((unsigned long long int) var_5)))));
                        arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_3] [i_3] [i_4 - 1] [(_Bool)1]);
                        arr_21 [i_4] [i_4] [i_4] = arr_8 [(signed char)5] [i_2];
                    }
                    for (signed char i_6 = 2; i_6 < 24; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [23LL] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_14 [i_3] [i_3] [i_4 - 1])));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) var_6)))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_7 + 1] [i_4])) > (((/* implicit */int) arr_23 [i_7 + 1] [i_4]))));
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_30 [(short)8] [i_4] [i_4] [i_6 + 1] [(_Bool)1] [i_8] [i_2] = ((/* implicit */int) arr_27 [(signed char)11] [i_3] [(signed char)11] [(signed char)11] [i_3] [i_4]);
                            arr_31 [(short)18] [(_Bool)1] [i_4] [(signed char)24] [i_3] [(short)18] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_4 + 2] [i_4 - 1] [i_6 + 1]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_36 [i_6] [i_6] [i_6] [i_6] [i_9] |= ((/* implicit */long long int) arr_22 [i_3] [(_Bool)1] [i_3]);
                            var_21 -= ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) arr_22 [18U] [(unsigned short)4] [i_6])) : (((/* implicit */int) arr_35 [i_2] [i_2] [i_6 - 1] [i_2] [i_2] [i_2] [i_2])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-60)))))));
                        }
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) arr_10 [i_6 - 1])) : (((/* implicit */int) arr_10 [i_6 - 2]))));
                    }
                }
            } 
        } 
        arr_37 [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2]))))) : (((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_10] [12LL])))));
        arr_41 [(short)5] = ((/* implicit */unsigned short) ((var_4) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_9 [i_10] [i_10])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_10] [(_Bool)1])))) : (((/* implicit */int) arr_13 [i_10] [(unsigned short)0] [(unsigned short)0] [i_10]))));
        var_24 += ((arr_29 [i_10] [(short)22] [(short)22] [i_10] [i_10] [i_10] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_10]))) : (((arr_10 [i_10]) ? (var_8) : (((/* implicit */unsigned long long int) arr_14 [i_10] [(short)13] [i_10])))));
    }
    var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (min((max((((/* implicit */unsigned long long int) var_2)), (var_8))), (((unsigned long long int) (signed char)-88))))))));
}
