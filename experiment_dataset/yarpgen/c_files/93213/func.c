/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93213
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 ^= var_15;
                var_21 = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(520192)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)40087)) : (((/* implicit */int) (unsigned char)255))))) / (((var_17) + (12815846159966668517ULL))))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 1738862145)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((int) var_0)))))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_24 = ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (3789929037149713343LL));
                            var_25 = ((/* implicit */long long int) ((2147483647) / (-2147483647)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_6 = 4; i_6 < 13; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) var_2);
                                arr_27 [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)-32763))));
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) (-(((var_14) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_30 [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) -654227227478251614LL)) ? (((/* implicit */int) (unsigned short)45321)) : (1699502139)));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_2)));
                        var_30 = ((/* implicit */short) var_9);
                        arr_31 [i_3 + 2] [i_6 - 2] [i_6] [i_3 + 2] [i_2] = ((/* implicit */short) (-(arr_5 [i_2] [i_3] [i_3])));
                        arr_32 [i_2] [i_6] [i_2] [i_2] = ((((/* implicit */int) arr_21 [9] [i_2] [i_6 - 3] [i_9] [9])) | (((int) (unsigned short)53489)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_3 + 3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_2] [i_10 + 1] [i_10 + 2] [i_10 + 2]))))) : (var_11)));
                        var_31 = ((/* implicit */long long int) min((var_31), (((((-654227227478251603LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)8704)) - (8704)))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) var_18))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 3) 
                        {
                            arr_40 [i_6] = var_17;
                            var_33 = ((/* implicit */short) arr_23 [i_2] [i_3] [i_6] [i_3] [i_2]);
                            var_34 ^= ((/* implicit */short) (unsigned char)60);
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_5 [i_3] [i_3 + 2] [i_2]))));
                        }
                        for (int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */long long int) var_15);
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_25 [i_2] [6] [i_2] [i_11 + 2] [i_13] [i_13]))));
                            arr_44 [i_2] [i_2] [i_6] [i_2] [i_11 - 1] [i_13] = ((/* implicit */int) arr_24 [i_6 + 1]);
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                            var_39 ^= ((/* implicit */signed char) (-(((/* implicit */int) (short)8714))));
                        }
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3670016)) ? (((/* implicit */int) (short)-24373)) : (-2062944956)));
                    }
                    var_41 &= var_4;
                }
                /* vectorizable */
                for (long long int i_15 = 4; i_15 < 13; i_15 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (+(18446744073709551615ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 14; i_17 += 2) 
                        {
                            {
                                var_43 &= ((/* implicit */int) ((short) (unsigned short)6407));
                                var_44 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_42 [i_2] [i_2] [i_3] [i_15] [i_16] [i_16] [i_15]))) - (((/* implicit */int) var_6))));
                                arr_55 [i_2] [i_17] [i_2] [i_16] [i_17] [i_16] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_17] [i_3] [i_15 - 3] [i_16] [i_17])) ? (((int) arr_39 [i_2] [i_15] [i_15 + 1] [i_2] [i_3] [i_17] [i_3])) : (((((/* implicit */_Bool) arr_39 [i_2] [4LL] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_49 [i_16] [i_3] [i_3] [i_16]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 1; i_18 < 12; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 14; i_19 += 1) 
                        {
                            {
                                arr_62 [i_3] [i_3] [i_19] [i_3] [i_19] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)24372)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_19))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
                                arr_63 [i_2] [i_2] [i_19] [i_2] [i_2] = ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
