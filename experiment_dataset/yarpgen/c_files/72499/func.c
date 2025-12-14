/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72499
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)52735)) >> (((/* implicit */int) arr_6 [i_0] [(signed char)0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [(unsigned short)2] [i_0] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_7 [i_2 + 1] [i_3 - 1] [i_4] [i_4 + 1])))) - ((+(((/* implicit */int) (_Bool)1))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_0] [i_4])), (arr_5 [i_4] [i_0] [(unsigned short)7])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) ? (min((((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3 + 1])), (((((/* implicit */int) arr_12 [i_1] [i_0] [i_2] [i_3] [i_1] [i_2])) * (((/* implicit */int) var_9)))))) : (max((((((/* implicit */int) (unsigned short)42557)) >> (((((/* implicit */int) var_6)) + (46))))), (((/* implicit */int) arr_5 [(signed char)8] [i_0] [i_2]))))));
                                arr_17 [(unsigned short)9] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_13)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)110)) && (((/* implicit */_Bool) var_2)))))))) <= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                }
                for (signed char i_5 = 4; i_5 < 8; i_5 += 3) 
                {
                    arr_21 [i_1] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)8433)) : (((/* implicit */int) (unsigned short)5873))))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_5 - 4] [i_0] [i_0] [i_1] [i_0] [i_0 + 2])), (arr_2 [i_5 + 1] [i_0])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_5 + 3])), (arr_2 [(unsigned short)10] [i_0])))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_14 [i_5] [(unsigned short)3] [(signed char)10])))) : (((/* implicit */int) min((var_10), (var_10))))))));
                    var_16 = ((/* implicit */signed char) ((var_5) ? (((/* implicit */int) arr_20 [i_5] [i_0] [i_0])) : (((/* implicit */int) var_8))));
                }
                /* vectorizable */
                for (signed char i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    arr_26 [i_0] [(signed char)0] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_6]))));
                    arr_27 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39094)) ? (((/* implicit */int) (unsigned short)59676)) : (((/* implicit */int) arr_3 [i_6] [i_1] [i_0]))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_20 [i_6] [i_0] [(unsigned short)9]))));
                }
                var_18 = ((/* implicit */signed char) var_12);
                var_19 += ((/* implicit */signed char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)57102)) != (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (_Bool)1);
    var_21 = ((/* implicit */signed char) (((_Bool)1) ? ((~(((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (_Bool)1)))))));
}
