/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84713
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)2] [i_1]))) : (2469679524130483662ULL)))));
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) arr_2 [i_0 + 2] [i_0 + 2]);
                        arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) min((max((arr_0 [i_0 + 3]), (((/* implicit */unsigned long long int) (signed char)-47)))), (((arr_0 [i_0 + 1]) / (arr_0 [i_0 + 1])))));
                        var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 4112815425U)) ? (15977064549579067959ULL) : (((/* implicit */unsigned long long int) 182151871U)))));
                    }
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_4] [i_4] [i_4] [i_0] [i_4]) | (arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6549)) << (((((/* implicit */int) var_12)) - (192)))))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_1 - 1] [i_0] [i_4] [i_4])) ? (8969288395349032090LL) : (((/* implicit */long long int) arr_13 [i_0] [i_4] [0ULL] [i_0] [i_0])))))))));
                        var_22 = ((unsigned short) ((signed char) arr_6 [i_4] [i_1]));
                        arr_15 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 4] [i_2] [i_2]))));
                    }
                    arr_16 [i_1] [i_0 - 2] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) 15977064549579067941ULL)))), (((((/* implicit */unsigned long long int) arr_14 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 - 2] [i_1])) != (arr_7 [i_1 - 1])))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (+(arr_9 [i_0 + 2] [i_6 + 1])));
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1]))));
                                var_25 += ((/* implicit */unsigned short) ((arr_8 [i_7 + 3] [i_1 - 1] [i_5] [i_5] [(short)4] [i_1]) / (arr_8 [i_0 - 1] [i_0 - 1] [i_5] [i_6 - 1] [i_6 + 2] [i_7 + 1])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                }
                var_27 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_21 [i_0 - 2] [i_1] [i_0 + 2] [(signed char)15] [i_1 - 1])), (arr_0 [i_0 - 2])))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(2007400558U)))))))));
    var_29 = ((/* implicit */unsigned char) var_14);
}
