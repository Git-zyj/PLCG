/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86035
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6253995163231984201LL)) ? (((/* implicit */long long int) ((min((0U), (((/* implicit */unsigned int) var_6)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((~((~(var_1)))))));
    var_14 = ((/* implicit */short) (unsigned char)37);
    var_15 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_3)) / (var_12))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_3))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_11);
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)164)) % (((/* implicit */int) var_11))))));
                        var_20 = var_11;
                        arr_15 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) var_9);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = var_5;
                        arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) != (var_0)));
                    }
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((short) ((var_6) << (((((/* implicit */int) var_7)) - (247)))))))));
                }
                for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_23 += ((/* implicit */long long int) var_2);
                    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_0)));
                }
            }
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_25 = ((/* implicit */short) (-((+(var_8)))));
                var_26 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((6253995163231984226LL) != (var_10)))))));
                arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
            }
            var_27 += ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_1)))));
            arr_26 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 857106429U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (-8675457292774107949LL)))) : (((/* implicit */int) var_2))));
            arr_27 [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_33 [i_9] [(unsigned char)8] [i_8] [(unsigned char)8] = ((/* implicit */short) (~(var_8)));
                arr_34 [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            }
            for (signed char i_10 = 2; i_10 < 10; i_10 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 10; i_12 += 2) 
                    {
                        arr_45 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12] [(_Bool)1] [i_12] [(short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483634))))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) (short)-20773))))));
                        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)92)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_10)))));
                    }
                    arr_46 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) - (var_6)))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (var_10)))));
                    arr_47 [0] [i_10] [i_10] [0] [(_Bool)1] [(short)8] = ((((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183)))))) == (((/* implicit */int) var_4)));
                }
                for (unsigned char i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    var_29 = ((/* implicit */short) ((unsigned int) var_0));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */short) (~((~(((/* implicit */int) var_7))))));
                        arr_53 [i_0] [i_8] [i_8] [i_10] [i_13] [i_14] = ((/* implicit */unsigned char) var_0);
                    }
                    for (unsigned int i_15 = 2; i_15 < 10; i_15 += 3) 
                    {
                        arr_57 [i_0] [i_0] [i_15] [i_0] [4LL] = ((/* implicit */_Bool) var_4);
                        var_31 = ((/* implicit */unsigned int) ((var_10) ^ (var_10)));
                        arr_58 [i_0] [i_0] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_32 |= ((/* implicit */signed char) (+(((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) - (163)))))));
                    arr_62 [10U] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */long long int) var_12))));
                    arr_63 [i_10] [i_10] [(short)9] [5ULL] [i_8] [(short)9] = ((/* implicit */short) var_5);
                }
                for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((long long int) var_12)))));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 3; i_18 < 10; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned int) var_5);
                        var_35 *= ((/* implicit */_Bool) (+(((long long int) var_2))));
                    }
                }
                arr_69 [i_0] [(short)6] [i_10] = (~(var_8));
                /* LoopSeq 1 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_1))));
                    arr_74 [i_19] = ((/* implicit */_Bool) (short)-22948);
                }
                arr_75 [6U] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                /* LoopSeq 2 */
                for (unsigned char i_20 = 1; i_20 < 9; i_20 += 3) 
                {
                    var_37 = var_0;
                    arr_79 [i_20] [i_8] [(short)8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                    arr_80 [6ULL] [(unsigned char)6] [i_20] [i_20] [(unsigned char)6] [i_0] = var_10;
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)163)))) - (237)))));
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-27980)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7))));
                    var_40 = ((/* implicit */unsigned char) min((var_40), ((unsigned char)108)));
                    var_41 = ((/* implicit */short) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_5))));
                }
            }
            arr_84 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_8)));
        }
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_42 -= ((/* implicit */short) (+(var_8)));
        var_43 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) : (var_10)));
    }
    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 2) 
    {
        arr_90 [i_23] &= ((/* implicit */short) var_6);
        arr_91 [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_12)))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_4))))))) ? (2097151U) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) var_11)), (var_3)))))))));
    }
}
