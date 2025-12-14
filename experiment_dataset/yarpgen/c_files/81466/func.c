/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81466
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
    var_20 = max((((/* implicit */unsigned int) var_6)), (var_10));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (short)26053)) / (((/* implicit */int) (short)-26053)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_4 - 2] [i_4] [i_4 - 1] [i_4] [8U] [i_4 + 1]))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 16084290770096154962ULL)) && (((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3 + 1] [i_4] [i_4] [i_4 + 1]))));
                                var_23 ^= ((/* implicit */unsigned char) (short)-13791);
                                arr_16 [i_0] = ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_9 [i_3 - 1] [i_0] [i_0])));
                                var_24 *= ((/* implicit */long long int) 2952066169U);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((arr_1 [i_1 - 1] [i_1 - 1]) - (3191630717U))))))));
                    arr_17 [i_0] [i_1] [(short)6] = ((/* implicit */short) (_Bool)1);
                    arr_18 [i_0] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-16768))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((arr_4 [i_0] [i_0]) * (((arr_21 [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                        arr_27 [i_0] [i_5] [i_5] [i_7 + 1] = ((/* implicit */signed char) arr_23 [i_5] [i_6]);
                        var_27 = ((/* implicit */unsigned char) (short)26053);
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_28 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_5 [i_0] [i_6] [(_Bool)1]))) >> (((arr_20 [(unsigned char)2] [i_0] [i_0]) - (12078245031070698967ULL)))));
                            arr_35 [i_5] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)9230));
                            arr_36 [i_5] [i_8] [8LL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_30 [i_5] [i_6] [i_5])) * (((((/* implicit */_Bool) (short)-1832)) ? (var_5) : (arr_3 [i_9])))));
                        }
                        arr_37 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                    }
                }
            } 
        } 
        arr_38 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [(unsigned short)10])) ? (((/* implicit */int) (short)13790)) : (((/* implicit */int) arr_25 [6U]))));
    }
    var_29 = ((/* implicit */unsigned char) min((min((((/* implicit */int) max(((short)-26063), (var_8)))), ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_19)))))), (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (short i_10 = 2; i_10 < 14; i_10 += 3) 
    {
        for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) 
        {
            for (unsigned char i_12 = 2; i_12 < 15; i_12 += 3) 
            {
                {
                    arr_47 [i_10] [i_10] [i_10] [i_12 - 2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_43 [i_10] [i_11] [i_12])), ((-(((/* implicit */int) arr_43 [i_12] [i_11 + 3] [i_10]))))));
                    var_30 = ((/* implicit */signed char) (short)-13802);
                }
            } 
        } 
    } 
}
