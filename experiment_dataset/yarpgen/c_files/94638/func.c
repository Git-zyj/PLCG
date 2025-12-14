/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94638
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
        var_12 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_2] |= ((/* implicit */unsigned short) arr_3 [i_1]);
                    var_13 = ((/* implicit */signed char) ((unsigned short) var_4));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) arr_10 [i_3] [i_3]);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_15 = ((/* implicit */short) (~(3898601314U)));
            var_16 += ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4048238514U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_3] [i_4 + 2]))))) & (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4048238501U))))), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) arr_13 [i_3])), (arr_14 [i_4 - 1])))))));
        }
        for (unsigned short i_5 = 4; i_5 < 19; i_5 += 4) 
        {
            var_17 &= ((/* implicit */unsigned char) -140351517);
            var_18 = ((/* implicit */unsigned short) var_9);
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 140351516))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) (~((-(var_2)))));
                    var_21 = ((/* implicit */long long int) arr_10 [i_7] [i_5 + 1]);
                    var_22 = (~(((/* implicit */int) var_5)));
                    arr_21 [i_3] [i_5] [i_6] [i_3] = ((/* implicit */short) -140351526);
                    var_23 = ((/* implicit */short) arr_11 [i_3] [i_5]);
                }
                var_24 = ((/* implicit */_Bool) 4048238532U);
                var_25 = ((/* implicit */unsigned int) min((var_25), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_10)))))));
                arr_22 [i_3] [i_3] [i_6] |= ((/* implicit */short) var_5);
                var_26 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_18 [i_6])), ((-(arr_17 [0] [i_5 - 2] [i_5] [i_5 - 3])))));
            }
        }
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] = ((/* implicit */unsigned short) (-(4048238514U)));
        arr_26 [i_8] = ((/* implicit */_Bool) ((signed char) 1088116016));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 140351526)) ? (((/* implicit */int) (unsigned short)52165)) : (((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((-140351517) < (-140351519))))));
    }
    var_29 = ((/* implicit */unsigned int) (((+(((/* implicit */int) min((var_8), (((/* implicit */short) var_4))))))) | (max((min((((/* implicit */int) var_5)), (140351516))), ((+(((/* implicit */int) var_6))))))));
    var_30 = ((/* implicit */short) ((var_3) ? (((((/* implicit */_Bool) (unsigned short)41123)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (-740354455)))));
    var_31 |= ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) (unsigned short)52165)), (4048238514U)))))));
}
