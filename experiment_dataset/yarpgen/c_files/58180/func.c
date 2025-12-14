/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58180
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) var_12);
        arr_2 [i_0] = ((/* implicit */unsigned int) var_2);
    }
    for (unsigned char i_1 = 4; i_1 < 7; i_1 += 1) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)8152))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned char) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10314)))))))));
                        var_16 = ((/* implicit */unsigned int) ((arr_8 [(short)0] [i_1] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_1 + 4] [i_1 - 4]))));
                    }
                    arr_14 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) max((var_8), ((unsigned short)55223))))) & (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))) : (var_12))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)253)))))));
                    arr_15 [i_1] [i_2] [i_1] = var_7;
                    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_1)));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)20847)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_1 + 1] [i_2])))))) % (var_12))))));
                }
            } 
        } 
        var_20 -= ((/* implicit */short) ((2137552813U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3584)))));
    }
    for (unsigned char i_5 = 4; i_5 < 7; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [6U] [i_5] [i_5 + 2] [i_5] [i_5 - 2])) && (var_2))))) - (16469705459197830026ULL)));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_6] [i_6] = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-19236)) * (((/* implicit */int) (_Bool)0)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */unsigned long long int) arr_10 [(_Bool)1])))), (((/* implicit */unsigned long long int) (-(arr_24 [i_7] [i_7] [i_7] [10LL]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_6]), (((/* implicit */unsigned short) (!(var_5)))))))) : ((~((+(634597244U)))))));
                            arr_29 [(unsigned char)8] [i_8] [i_6] [i_6] [i_5 + 4] [i_5 + 4] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_22 [i_5 + 4] [i_5 + 4] [i_8 - 1] [i_8 - 1])) ^ (((/* implicit */int) arr_22 [i_5] [i_5 + 4] [i_8 - 2] [i_8 + 2]))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) arr_31 [i_6 - 1] [i_6] [i_6 + 2]);
                            var_24 = ((/* implicit */unsigned long long int) arr_26 [i_5] [i_6] [i_8 + 1] [i_5] [i_5 - 3]);
                        }
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_5 [i_6]))))), (arr_11 [i_6] [i_6 + 1] [i_6] [i_6] [i_6])));
                            arr_34 [i_5 - 3] [i_6] [i_5 - 3] [i_6] [i_6] = ((/* implicit */short) max(((_Bool)0), (((9223372036854775807LL) > (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)63084)), (var_12))))))));
                        }
                        for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned int) var_1);
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_5 [i_7]))));
                            arr_37 [i_6] = ((/* implicit */unsigned int) var_0);
                        }
                        arr_38 [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((~(arr_6 [i_5 - 3] [i_8 - 1]))) : (((max((((/* implicit */long long int) var_0)), ((-9223372036854775807LL - 1LL)))) % (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))));
                        var_28 = ((/* implicit */unsigned long long int) (unsigned char)7);
                        var_29 = ((/* implicit */_Bool) max(((~(2392680455U))), (var_11)));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37246)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)243)), (arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])))) : (((/* implicit */int) ((unsigned char) arr_11 [2LL] [i_5 - 1] [i_5 - 4] [i_5 + 3] [i_5])))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_14 = 2; i_14 < 10; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    {
                        arr_48 [i_16] [i_15] [i_13] = min((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) max((var_11), (var_11)))) - (-9047914055135182063LL))));
                        arr_49 [5U] [i_15] [i_14 + 1] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) (unsigned char)255))) || ((_Bool)0))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_40 [i_14 - 2])))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)19211))));
        arr_50 [i_13] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    }
    var_32 = ((/* implicit */unsigned short) var_2);
    var_33 = ((/* implicit */_Bool) var_6);
    var_34 = ((/* implicit */unsigned char) min((((var_7) + (max((1678912131U), (1902286833U))))), (var_3)));
}
