/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7993
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
    var_12 = ((/* implicit */unsigned short) var_8);
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_2))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                arr_6 [i_0] [2] [i_2] [i_2] = ((/* implicit */short) var_7);
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)0] [(unsigned char)0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1])))))))))));
            }
            var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        }
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
        {
            arr_11 [i_3 + 3] [i_0] = ((/* implicit */long long int) ((unsigned int) var_6));
            arr_12 [i_0] [i_0] = ((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)226)))))));
            arr_13 [i_0 + 4] [i_0] = arr_9 [i_0];
            arr_14 [(_Bool)1] [(_Bool)1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (var_7));
        }
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_4])) >> ((((+(arr_3 [15LL]))) - (1348828876)))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)12088)))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_6] [i_4 + 3])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6] [(unsigned char)18]))))) == (((/* implicit */long long int) (~(2800456673U)))))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_9 [i_0]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) var_3);
                        arr_30 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_7] [i_0 + 1] [(unsigned short)8]))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)59163)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
                        arr_33 [i_0] [i_10] [(_Bool)1] [i_10] = ((/* implicit */short) ((unsigned char) (_Bool)0));
                        arr_34 [(_Bool)1] [i_7] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 2]) : (((/* implicit */int) arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_0 + 4]))));
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_24 = ((arr_18 [i_7] [i_8] [i_10] [i_11]) << (((arr_18 [i_7] [i_8] [1] [i_11]) - (3855796899U))));
                            arr_38 [i_0 + 4] [i_0] [i_0 + 4] [i_8] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 738364862U)) ? (((/* implicit */long long int) arr_29 [i_0 + 4] [i_7] [i_8] [i_10] [i_0 + 4])) : (var_5)))));
                            arr_39 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-3988))))));
                        }
                        for (int i_12 = 2; i_12 < 17; i_12 += 2) 
                        {
                            arr_42 [i_0] [i_7] = ((/* implicit */int) arr_20 [i_0] [i_0] [i_7] [i_8] [i_0] [i_12]);
                            var_25 = ((/* implicit */int) var_4);
                            arr_43 [i_0] [i_7] [i_7] [i_7] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                            var_26 = ((/* implicit */int) 738364862U);
                        }
                        for (short i_13 = 3; i_13 < 18; i_13 += 1) 
                        {
                            arr_46 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)63)))) != (var_7)));
                            var_27 = ((((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13 - 1] [i_0])) << (((((/* implicit */int) (unsigned short)59541)) - (59531))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)28637)))))) + (arr_44 [i_0 - 1]))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)428))));
                        }
                    }
                    for (int i_14 = 1; i_14 < 18; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_47 [i_0] [i_0] [i_0] [i_0]))));
                        arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                    }
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                        arr_54 [i_0] [i_0] [i_0] = ((/* implicit */signed char) -1717099278);
                        arr_55 [i_0 + 4] [i_7] [i_0 + 4] [i_0] = (short)17180;
                        arr_56 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_27 [i_0 + 4] [i_0] [i_0] [i_0] [i_0 - 2])) ^ (((/* implicit */int) (short)-26930)))) * (((((/* implicit */int) arr_31 [6LL] [i_0] [6LL] [i_15])) - (((/* implicit */int) (_Bool)0))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 4; i_16 < 16; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) var_0);
                                arr_61 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0 + 1] [i_16 - 2] [i_16 + 2])) ? (((/* implicit */unsigned long long int) ((arr_60 [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) arr_20 [i_0 + 2] [i_7] [i_0 + 2] [i_0 + 2] [i_0] [i_17]))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_16 [i_8] [i_7] [i_0]))));
                    arr_62 [i_7] [i_7] [i_0] = ((int) var_0);
                }
            } 
        } 
    }
}
