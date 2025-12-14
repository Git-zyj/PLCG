/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92602
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 2]))) : (arr_0 [i_0 + 3])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_2 - 1])) : (((/* implicit */int) ((arr_5 [i_1]) == (((/* implicit */unsigned long long int) arr_6 [i_2 - 1])))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_13 [11ULL] [(unsigned char)21] [i_2] [i_3] [i_3] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_0])))) : (arr_5 [i_0 + 3])));
                    var_16 = ((/* implicit */unsigned char) ((arr_8 [i_2 + 1] [i_1] [(unsigned char)20]) == (((/* implicit */long long int) arr_2 [i_2 + 1] [i_1] [i_2]))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_2 - 2] [i_2 - 2]))) == (arr_9 [i_0 - 2])));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_12 [i_0] [i_0] [i_2 + 1])));
                }
                arr_14 [(signed char)18] [i_1] [i_0 + 3] &= ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (signed char)52)) / (((/* implicit */int) (signed char)-53))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_4])) : (-1)))) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)19])) ? (arr_18 [i_2] [i_1] [i_1] [i_2]) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_4])))) : (arr_6 [i_0 - 3])));
                    arr_19 [i_0] [i_0] [17ULL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (arr_6 [i_0])));
                    arr_20 [i_4] = ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_17 [i_0 + 2] [(short)10] [(short)10] [i_0 - 3])) : (((/* implicit */int) var_6)));
                }
            }
            var_20 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) (short)-1)))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */_Bool) ((long long int) var_9));
                        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [(unsigned char)5] [i_5] [i_6]))) == (arr_0 [i_6]))))) < (arr_16 [i_0 - 3] [i_0 - 3])));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 1613857943U))));
                        arr_25 [i_6] [i_5] = ((/* implicit */short) ((arr_18 [i_6] [i_1] [i_0 - 3] [i_6]) < (arr_18 [i_6] [i_1] [i_0 + 2] [i_6])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [(unsigned char)6] [i_1] [10U] [(signed char)16])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (2681109352U))))));
                            arr_34 [11LL] [i_8] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 2681109352U)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)5])) : (((/* implicit */int) arr_27 [17] [17] [i_0])))));
                            var_25 = ((/* implicit */_Bool) 9058566556797133444ULL);
                        }
                        for (int i_10 = 2; i_10 < 19; i_10 += 1) /* same iter space */
                        {
                            arr_38 [15U] [15U] [15U] [i_8 + 1] [i_8] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_8] [i_10 + 3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_0] [i_1] [i_0]))))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) : (1613857943U)))));
                        }
                        for (int i_11 = 2; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_7))));
                            arr_41 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (+((~(var_9)))));
                        }
                        arr_42 [i_8] [i_7] [i_1] [i_8] = (~(var_9));
                    }
                } 
            } 
        }
    }
}
