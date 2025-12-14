/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9699
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(((arr_1 [i_0] [(_Bool)1]) * (arr_1 [i_0] [i_0])))));
        var_16 = ((/* implicit */long long int) (((+(arr_1 [i_0] [i_0]))) / (((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))));
        var_17 |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_0 [8LL]))))) : ((+(arr_0 [i_0]))))));
    }
    var_18 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_0)) - (106))))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_13), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (signed char)-64)))) - (1)))));
    var_19 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (short i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) var_0)))) + (2147483647))) >> (min((((/* implicit */unsigned long long int) arr_3 [i_1])), (var_12)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1) : (((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned long long int) (short)16998)), (arr_5 [i_2])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) /* same iter space */
            {
                arr_11 [i_3] [i_2] [i_2] [i_1 - 1] &= ((/* implicit */_Bool) (short)32767);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((arr_5 [i_1 - 3]) - (arr_5 [i_1 + 2]))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_1 - 1])))))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 2) /* same iter space */
            {
                var_23 |= ((/* implicit */short) var_15);
                arr_15 [i_1 - 3] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_4)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (arr_13 [(short)0] [i_2] [i_1] [i_1 + 1]))))));
                arr_16 [i_1] [i_2] = ((/* implicit */unsigned short) (short)-6186);
            }
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_1 + 2])) || (((/* implicit */_Bool) arr_8 [(unsigned char)6] [i_2] [i_2] [i_2]))))) < ((-(((/* implicit */int) (signed char)-112))))));
        }
        var_25 = ((/* implicit */unsigned long long int) (!((!(arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 11; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_26 |= ((/* implicit */int) 554153860399104ULL);
                                var_27 -= ((/* implicit */short) ((unsigned int) ((0ULL) ^ (((/* implicit */unsigned long long int) ((arr_22 [i_1] [i_5] [i_6] [i_7 - 3] [i_8]) << (((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]) + (993887030865874862LL)))))))));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_7 [i_1 + 2] [i_5 + 2])) - (((((/* implicit */_Bool) 14641363300582607178ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)127)))))));
                }
            } 
        } 
    }
}
