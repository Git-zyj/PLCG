/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67969
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
    var_19 = ((/* implicit */long long int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))))));
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned int) (signed char)-126))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 934745106U)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)45))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((((/* implicit */int) (short)-31269)), ((+(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 934745106U)) ? (arr_11 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))))) % (((/* implicit */unsigned long long int) 934745106U))));
                    arr_13 [i_1 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((934745106U), (2812132909U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)6] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (4229631959U)))) ? (((8627488723528171987ULL) >> (((var_12) + (2150170887415008767LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) != (((/* implicit */int) arr_4 [i_1 - 1] [i_3])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_6 [i_1 + 1]))))) ? (min((((/* implicit */long long int) arr_10 [i_2])), (arr_7 [i_1 - 1] [i_2] [i_3 + 1]))) : (arr_8 [i_1 + 1] [i_1] [i_1 + 1]))))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) arr_6 [i_1]);
                        var_24 &= ((/* implicit */long long int) ((((arr_11 [i_2 - 4] [i_4]) != (10ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)45))) - (1482834387U))))))) : (((/* implicit */int) (signed char)-125))));
                        var_25 = min((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)23));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2489557292252645246LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50558))) : (2812132909U)));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        var_27 -= ((/* implicit */short) (unsigned char)255);
                        arr_19 [i_3] [i_3] [i_3] = ((/* implicit */short) max((arr_8 [i_5] [(unsigned char)2] [i_1 + 1]), (((/* implicit */long long int) (((-(arr_14 [17U] [17U] [i_3] [i_5 + 3]))) == (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) arr_25 [(signed char)18] [i_2 - 4] [i_3 - 1] [i_1 - 1] [i_7])) - (((/* implicit */int) arr_9 [i_1] [i_2 - 1] [(signed char)4])))))));
                            var_29 -= ((/* implicit */unsigned char) var_14);
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (short)5714))));
                            var_31 -= (short)-29900;
                            var_32 = ((/* implicit */signed char) ((arr_8 [i_1 + 1] [i_2 + 2] [i_2 + 2]) <= (arr_8 [i_1 + 1] [i_2 - 2] [i_2 + 2])));
                        }
                        var_33 = ((/* implicit */long long int) ((unsigned char) (short)-19000));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_24 [i_1 + 1] [i_3]) * (((/* implicit */unsigned long long int) var_18))))) ? (((((/* implicit */_Bool) arr_6 [(signed char)11])) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 2])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) (signed char)-53)))));
                        var_35 = ((/* implicit */long long int) arr_15 [(unsigned char)16] [i_2] [i_2] [i_2 + 1]);
                        var_36 = arr_6 [12LL];
                    }
                }
            } 
        } 
        arr_26 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) + (arr_24 [i_1] [(signed char)0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2])))))) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) ((short) (unsigned short)65519)))));
        var_37 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_9 [i_1] [i_1 + 1] [(signed char)14])), (((long long int) arr_18 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [(short)11]))));
    }
    for (signed char i_8 = 4; i_8 < 15; i_8 += 4) 
    {
        arr_31 [i_8 + 3] = ((/* implicit */unsigned short) arr_22 [i_8] [i_8 + 1] [i_8 - 1] [i_8]);
        arr_32 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18999)) ? (((/* implicit */long long int) 1482834387U)) : (0LL)));
    }
    /* vectorizable */
    for (unsigned char i_9 = 2; i_9 < 9; i_9 += 4) 
    {
        var_38 = ((/* implicit */signed char) arr_25 [i_9] [i_9 - 1] [i_9] [i_9 - 2] [(signed char)6]);
        arr_36 [i_9] = ((/* implicit */signed char) arr_4 [i_9] [(short)18]);
    }
    var_39 = ((/* implicit */short) ((min((max((((/* implicit */unsigned int) (signed char)63)), (1482834387U))), (((/* implicit */unsigned int) (short)-19000)))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_11)))))));
    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-21382)) ? (((/* implicit */int) (short)30683)) : (((/* implicit */int) (signed char)-75))));
}
