/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81887
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] &= (+(((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 2])));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            arr_15 [6] [7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1] [4])) - (((/* implicit */int) (signed char)122))));
                            var_12 = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_3] [i_4 - 4])) >= (((((/* implicit */int) (signed char)7)) >> (((var_6) - (221633388U)))))));
                            var_13 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_8 [i_2] [16U] [i_2] [i_2 - 1] [i_2 + 1] [i_4 - 1])) != (3086362693U)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [16] [i_3] [i_5] = ((/* implicit */int) (signed char)122);
                            var_14 = ((/* implicit */unsigned char) ((arr_8 [i_3] [i_3] [i_2 - 3] [i_2 + 3] [(signed char)3] [i_2 - 3]) < (arr_8 [i_3] [13] [i_2 - 2] [i_2 + 3] [i_2] [i_2 - 3])));
                            arr_19 [i_1] [i_1] [i_0] [i_1] [i_1] [i_2 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) -1645576129))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0])))))));
                            var_15 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (signed char)-123)))));
                        }
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_2 - 2] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_3] [i_6] [i_2 - 1] [i_2] [i_6] [i_2 + 3]))));
                            var_16 -= ((/* implicit */unsigned char) var_5);
                            var_17 = ((/* implicit */unsigned int) var_2);
                        }
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_0))));
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [i_1])) > (((/* implicit */int) arr_6 [i_1] [i_1])))))));
            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1645576129)))) ? ((+(arr_0 [i_1]))) : (((((-1556257824) + (2147483647))) >> (((/* implicit */int) (signed char)0))))));
        }
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [(signed char)6] [i_0])))))));
    }
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) == (((unsigned int) min((arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [(signed char)11]), (arr_4 [i_7] [i_7]))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) arr_25 [i_7])) && (((/* implicit */_Bool) 787649742)))) ? (-787649742) : (((/* implicit */int) var_5)))))))));
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) (signed char)96)) ? (-1556257824) : (((/* implicit */int) (signed char)-96))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        var_25 += ((/* implicit */unsigned char) (-((-(933668916)))));
        var_26 += ((/* implicit */unsigned char) min((((/* implicit */int) ((max((var_2), (var_11))) == (((/* implicit */int) var_0))))), (((0) | (arr_26 [(signed char)22] [(signed char)22])))));
    }
}
