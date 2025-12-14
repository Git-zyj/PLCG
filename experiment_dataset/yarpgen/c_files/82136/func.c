/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82136
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) (~(var_1)));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_9 [(short)2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) (!(((((/* implicit */int) var_6)) > (((/* implicit */int) arr_14 [i_4]))))));
                            arr_15 [(_Bool)1] [(_Bool)1] [(unsigned short)6] [i_2] [i_3] [i_4 - 1] = ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3 - 1] [i_4 + 1])) && (var_13));
                            arr_16 [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) var_13);
                            var_19 = ((/* implicit */_Bool) var_2);
                        }
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] = ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_2 + 1])) ? (arr_1 [i_0 - 1] [i_2 + 2]) : (arr_1 [i_0 + 1] [i_2 + 2]));
                            var_20 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_12)) ^ (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [9LL] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_4 [i_3] [(unsigned char)5])))));
                            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_5 + 1])) || (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_3 - 1]))));
                            var_22 = ((/* implicit */unsigned int) var_11);
                            arr_21 [i_0] [7] [i_2] [i_3 - 2] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        }
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 3) 
                        {
                            arr_24 [i_3] [i_3] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-17801)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) : (var_4)));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_7 [i_0]))));
                        }
                        var_24 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0 - 2]))));
                        var_25 = ((/* implicit */long long int) var_7);
                        var_26 = ((/* implicit */short) ((arr_11 [(unsigned short)3] [i_3 - 1] [i_3 - 1] [i_3] [i_0 - 1] [1LL]) * (arr_11 [i_0 + 1] [i_3 - 2] [i_2] [i_0 + 1] [i_0 - 2] [i_2])));
                        var_27 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [2] [i_3]);
                    }
                    var_28 = ((/* implicit */short) var_4);
                    var_29 = ((((/* implicit */long long int) ((unsigned int) (short)16352))) ^ (arr_13 [i_0 - 2]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_14 [i_0 + 1]);
                            var_31 = ((/* implicit */_Bool) arr_4 [i_9 + 1] [i_9]);
                            var_32 = ((/* implicit */_Bool) ((short) arr_5 [i_0 + 1] [(short)8] [i_9 + 1]));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 8; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), ((+(((((/* implicit */_Bool) var_14)) ? (2008604559585116348LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                            arr_38 [(unsigned char)3] [i_9] [i_8] [i_9] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [(short)3] [(unsigned char)2] [i_0] [2U] [7] [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (arr_35 [i_0] [8]) : (((/* implicit */unsigned long long int) -2008604559585116364LL))))));
                            arr_39 [i_9] = ((/* implicit */long long int) arr_0 [i_0]);
                        }
                        var_35 = ((/* implicit */unsigned int) arr_14 [i_0 - 1]);
                        var_36 = ((/* implicit */unsigned char) (~(-172123728)));
                        var_37 &= ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
    }
    var_38 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_12)) : (var_4))))));
}
