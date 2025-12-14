/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89396
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) : ((((_Bool)0) ? (var_7) : (min((((/* implicit */unsigned int) (signed char)25)), (var_15)))))));
    var_17 = ((var_4) << (((((max((((/* implicit */unsigned int) var_5)), (var_8))) + (max((((/* implicit */unsigned int) (signed char)0)), (var_15))))) - (964518358U))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2088960U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (((min((var_14), (((/* implicit */unsigned int) arr_2 [i_0])))) ^ (arr_3 [4U] [i_0]))) : (max((min((var_9), (1073217536U))), (((arr_3 [(signed char)3] [i_0 - 1]) | (2040U)))))));
        var_20 = ((/* implicit */_Bool) min((min((arr_0 [i_0 + 1] [i_0 - 2]), (arr_3 [i_0 + 3] [i_0 + 3]))), (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((max(((_Bool)1), ((_Bool)1))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_2 [i_1 + 1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_1] [i_2] [i_2] = ((56208013U) | (3556040818U));
                var_22 = ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2])) ? (((unsigned int) (unsigned char)250)) : (((var_12) & (var_14))));
                arr_15 [(signed char)2] [i_2] [(signed char)2] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)41)) - (27)))));
            }
            var_23 = ((/* implicit */signed char) var_12);
            var_24 -= ((/* implicit */unsigned char) (+(arr_11 [i_1] [(signed char)0])));
        }
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 4; i_6 < 9; i_6 += 3) 
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 738926492U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (2342394408U)));
                    var_25 -= ((/* implicit */unsigned char) ((((_Bool) (signed char)-65)) ? (647597609U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4]))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_26 = ((arr_6 [i_5]) * (var_7));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 1; i_8 < 6; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) > (2016892555U)));
                        var_28 = ((/* implicit */unsigned int) ((unsigned char) 3986011083U));
                        var_29 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 8U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))))));
                        arr_32 [i_1 + 1] [i_4] [i_5] [3U] [i_5] [i_8] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_5])) && (((/* implicit */_Bool) arr_2 [i_1]))));
                        arr_33 [i_1] [i_1] [i_5] = ((/* implicit */signed char) arr_24 [i_5]);
                    }
                    arr_34 [i_5] [i_5] [i_5] [i_5] = (i_5 % 2 == 0) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_13))) >> (((((((/* implicit */_Bool) arr_29 [i_1] [i_4] [i_1] [i_7] [i_1])) ? (((/* implicit */int) arr_31 [i_7] [i_5] [i_5] [i_1] [i_1])) : (((/* implicit */int) (signed char)25)))) - (243))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_13))) >> (((((((((/* implicit */_Bool) arr_29 [i_1] [i_4] [i_1] [i_7] [i_1])) ? (((/* implicit */int) arr_31 [i_7] [i_5] [i_5] [i_1] [i_1])) : (((/* implicit */int) (signed char)25)))) - (243))) + (219)))));
                    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */_Bool) ((arr_11 [i_5] [i_5]) * (arr_4 [i_1 + 1])));
                }
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_29 [5U] [i_4] [5U] [i_4] [i_4]))));
            }
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_4] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_26 [i_4] [i_4] [i_1 + 1] [i_4])) : (((/* implicit */int) arr_5 [i_1] [i_4]))))) ? (((/* implicit */int) arr_26 [i_1] [i_4] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) ((arr_5 [i_1] [i_4]) && (((/* implicit */_Bool) 2728408783U)))))));
        }
        var_34 = ((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) min(((unsigned char)5), (((/* implicit */unsigned char) arr_1 [i_1 + 1])))))));
    }
}
