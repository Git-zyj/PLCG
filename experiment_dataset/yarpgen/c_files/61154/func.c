/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61154
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = (-(((/* implicit */int) (unsigned short)0)));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))) / (arr_2 [i_0 + 3])));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                {
                    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned int) ((int) arr_10 [i_0 + 1] [i_3 - 3] [i_4 - 2]));
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)28301)) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
            {
                var_21 = ((/* implicit */signed char) var_8);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_5] = ((/* implicit */short) ((var_8) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_6] [i_0])) : (((/* implicit */int) arr_22 [i_0 - 1] [19LL] [i_1 - 2] [i_0] [i_0]))));
                            arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~(var_9)));
                        }
                    } 
                } 
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_31 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(1159619999U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5)))));
                arr_32 [i_0] [i_1] [i_1] [i_1 - 2] = ((/* implicit */short) ((unsigned long long int) arr_20 [i_0] [i_0] [i_1 - 2]));
                var_22 = ((/* implicit */_Bool) ((((int) (unsigned short)5)) >> ((((-(((/* implicit */int) (signed char)31)))) + (50)))));
                var_23 ^= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (unsigned char)11)))));
            }
            var_24 ^= ((/* implicit */int) ((short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1203909920611941937LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1203909920611941937LL)) ? (((arr_11 [i_0] [(unsigned short)8]) + (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [5])))) : (((/* implicit */int) arr_25 [8U] [i_1 - 2] [i_1] [i_1] [i_1] [6LL] [8U])))))));
            var_26 = ((short) var_7);
        }
        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
        {
            arr_36 [20U] [i_0] = ((/* implicit */unsigned char) ((-7503573727722005965LL) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))));
            arr_37 [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) (_Bool)1)));
        }
        for (unsigned short i_10 = 2; i_10 < 21; i_10 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        arr_47 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)64))));
                        arr_48 [i_0] [i_0] [i_11] [i_11] = ((/* implicit */unsigned int) arr_15 [i_0 + 4] [i_0] [i_0] [i_0] [i_10 + 1]);
                        arr_49 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_45 [i_0] [i_0])))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) + (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_0)))))));
                    }
                } 
            } 
            var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) -1091048416484794340LL)) ? (6704275248217038196LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10042)))));
        }
        for (unsigned short i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
        {
            arr_52 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            arr_53 [i_0] [i_13] = ((/* implicit */unsigned char) 10473750722531649629ULL);
            arr_54 [i_13] [i_0] [(unsigned short)18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_13] [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_44 [6LL] [i_0] [i_13 - 1])) : (((/* implicit */int) arr_44 [i_0] [i_0] [i_13 - 1]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                {
                    arr_61 [i_0] [i_14] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) 6212994826162355936LL)))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 3; i_17 < 20; i_17 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(-1203909920611941937LL))))));
                                var_30 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_7)))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [(short)12] [i_14] [i_0 - 1])) - (((/* implicit */int) arr_30 [i_0 + 3] [i_14] [i_0 + 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_35 [i_0 + 1] [i_18]))));
                                var_33 ^= ((/* implicit */signed char) ((_Bool) 32767U));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (short)-21046)))))));
                }
            } 
        } 
    }
    var_35 = (!(((/* implicit */_Bool) (~(var_10)))));
    var_36 = ((/* implicit */unsigned char) -1203909920611941931LL);
    var_37 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) min(((short)4615), (((/* implicit */short) (_Bool)1)))))))), (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
}
