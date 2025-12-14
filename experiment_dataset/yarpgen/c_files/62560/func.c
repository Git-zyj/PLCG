/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62560
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
    var_10 = ((/* implicit */unsigned short) ((unsigned int) 788109348));
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 - 2]))) : (((((/* implicit */_Bool) (short)-6623)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))))));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1627032699U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) & (arr_0 [i_1])))));
        }
        arr_7 [i_0] = ((/* implicit */signed char) var_7);
    }
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))));
                    var_12 -= ((/* implicit */unsigned char) max(((((_Bool)1) || (((/* implicit */_Bool) 1950701043U)))), ((!(((/* implicit */_Bool) arr_11 [i_3 - 1] [i_2 - 2] [i_4 + 1]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            for (unsigned int i_6 = 4; i_6 < 17; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_25 [i_2] [i_5] [i_6] [i_7] [i_2] = ((/* implicit */unsigned char) arr_9 [i_6]);
                                arr_26 [i_2] [i_5] [i_7] [i_8] = ((_Bool) arr_12 [i_2] [i_5 + 2] [i_6 + 3]);
                            }
                        } 
                    } 
                    arr_27 [i_2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)221)) & (((/* implicit */int) var_3))))) ? (1709660722U) : (var_6))));
                    arr_28 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) arr_20 [i_5] [i_2])), (var_5)))))) < (((unsigned long long int) var_1))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) min((((/* implicit */short) arr_13 [i_2] [i_5] [i_6])), (var_9))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            for (int i_10 = 3; i_10 < 17; i_10 += 2) 
            {
                {
                    arr_33 [i_2] [i_9] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2 - 2] [i_9 + 2] [i_9])))))));
                    var_14 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_2), (((/* implicit */short) (_Bool)0)))))));
                }
            } 
        } 
        arr_34 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((short) (+(18446744073709551608ULL))))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73))) <= (min((var_6), (((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2])))))))));
        var_15 = ((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2667934596U)) ? (((/* implicit */int) (short)-14748)) : (((/* implicit */int) arr_21 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_38 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)));
        arr_39 [i_11] = ((((/* implicit */int) var_1)) & (((/* implicit */int) var_9)));
        /* LoopSeq 1 */
        for (short i_12 = 2; i_12 < 16; i_12 += 3) 
        {
            arr_42 [i_11] [i_11] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            arr_43 [i_12] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)14747)) ? (4294967295U) : (((/* implicit */unsigned int) -1011517630)))));
            var_16 = ((/* implicit */unsigned int) (~(-171808276)));
        }
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_49 [i_11] [i_11] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (arr_32 [i_13] [i_14])));
                    /* LoopSeq 3 */
                    for (short i_15 = 1; i_15 < 14; i_15 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) (~(1429057581)));
                        var_18 = ((/* implicit */unsigned char) ((short) (~((-9223372036854775807LL - 1LL)))));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 1; i_16 < 16; i_16 += 1) 
                        {
                            arr_56 [i_13] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_15 + 2]))));
                            arr_57 [i_14] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29987)) ? (arr_46 [i_11] [i_16 + 1] [i_14 - 1] [i_15 + 3]) : (var_5)));
                        }
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            arr_60 [i_14] [i_14] [i_14] [i_13] = ((/* implicit */unsigned long long int) ((signed char) 5920395428389764323ULL));
                            var_19 += ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                            arr_61 [i_11] [i_11] [i_11] [(unsigned short)2] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_17] [i_17 + 1] [i_17 + 1])) / (((/* implicit */int) arr_18 [i_15] [i_15 - 1] [i_15 - 1]))));
                        }
                        arr_62 [i_11] [i_13] [i_13] [i_15] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_14 - 1] [i_15] [i_15 + 3]))));
                    }
                    for (short i_18 = 3; i_18 < 13; i_18 += 1) 
                    {
                        var_20 |= (!(((/* implicit */_Bool) ((int) (_Bool)0))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (arr_45 [i_13]) : (((/* implicit */int) arr_30 [i_11] [i_13] [i_13]))))) & (((9806636614763786978ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_22 = ((/* implicit */int) arr_37 [i_13]);
                    }
                    for (int i_19 = 1; i_19 < 16; i_19 += 2) 
                    {
                        arr_70 [i_11] [i_13] [i_13] [i_19] = ((/* implicit */short) var_6);
                        arr_71 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) arr_11 [i_19 + 1] [i_19] [i_19]);
                        var_23 = ((/* implicit */short) min((var_23), (((short) (!(((/* implicit */_Bool) var_6)))))));
                        arr_72 [i_11] [i_13] [i_14] [i_19] = ((/* implicit */unsigned int) ((int) -1376940148));
                    }
                }
            } 
        } 
    }
}
