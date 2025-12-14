/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56691
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */signed char) var_12);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((long long int) (+(4363686772736LL))));
                                arr_13 [i_1] [10] [i_3] [i_2] = ((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2] [(short)15] [(unsigned char)1] [i_3 - 1])))), (((/* implicit */int) var_9))));
                                arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_3] [i_4 + 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_4]))))) : (min((-27LL), (var_10)))));
                                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61)))))) : (var_15)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] = ((/* implicit */unsigned int) var_7);
                                arr_21 [11LL] [i_2] [(short)8] [(short)8] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) ((long long int) arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                                arr_22 [i_2] [i_5] [(short)13] [i_1] [i_2] = ((/* implicit */unsigned short) min(((signed char)-127), (((/* implicit */signed char) (_Bool)1))));
                                var_21 = ((/* implicit */_Bool) (short)-21316);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_11))))));
        var_23 -= min((((/* implicit */short) var_3)), (((short) var_12)));
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_7 + 2] [i_7] [16ULL] [5U]) : (arr_8 [i_7 - 1] [i_7] [i_7] [i_7])));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_7] [(unsigned char)7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) << (((((/* implicit */int) (unsigned char)52)) - (31)))));
        arr_26 [i_7] [8U] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) -27LL))));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    {
                        arr_36 [(unsigned char)7] [i_9] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32765))));
                        arr_37 [i_7 - 1] [5LL] [8] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                        var_26 = ((/* implicit */signed char) ((_Bool) var_5));
                        arr_38 [i_10] [10LL] [i_7] = ((/* implicit */_Bool) (+(var_5)));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) : (196112153U))))));
                    }
                } 
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        arr_42 [9LL] = ((/* implicit */long long int) ((unsigned long long int) var_16));
        var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)25))));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_11] [i_11] [i_11]), (arr_30 [i_11] [(unsigned char)6] [(signed char)0])))) && (((/* implicit */_Bool) ((short) arr_27 [i_11] [i_11]))))))));
    }
    var_30 = ((/* implicit */short) ((signed char) var_10));
    var_31 = var_16;
}
