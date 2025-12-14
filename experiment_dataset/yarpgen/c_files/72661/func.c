/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72661
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) var_15))), (((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned long long int) var_11)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) ((4503582447501312LL) >= (((4503582447501296LL) | (arr_7 [i_0] [i_1] [i_0] [i_1])))));
                    var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) var_6)))))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_1] [i_1])))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (8759225104395414736ULL) : (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) var_8))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_6 [i_0])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (var_16)))), (arr_0 [i_1] [i_1])))));
                    arr_10 [i_0] [i_1] [i_2 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-28)) * (((((/* implicit */int) var_14)) >> (((4503582447501296LL) - (4503582447501291LL))))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (4575657221408423936LL))))));
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) ((var_19) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) : (var_0)));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_22 [i_3] [i_4] [i_5 + 2] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)20243)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))));
                    arr_23 [i_3] [i_4] [i_5] = arr_20 [i_3] [i_4] [i_5] [i_5];
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_3] [i_4 - 2] [i_4] [i_6 - 1])))))));
                        arr_27 [i_3] [i_4 + 1] [i_5 + 2] [i_3] = ((/* implicit */unsigned int) arr_13 [i_3] [i_4 - 2]);
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5762)) || (((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_18)))) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))));
        arr_31 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5769))) <= (var_13)));
        var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((signed char) var_7))) ? (max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_7] [i_7]))))))), (((((/* implicit */_Bool) arr_30 [i_7])) ? (((/* implicit */unsigned long long int) (~(var_16)))) : (arr_30 [i_7])))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7])) ? (((long long int) (~(var_13)))) : (4916800956462772371LL)));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 2; i_9 < 16; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    arr_41 [i_8] [i_9] [i_8] [i_10] = ((/* implicit */unsigned short) ((arr_30 [i_9 + 3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_27 = ((/* implicit */short) (-2147483647 - 1));
                    arr_42 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_8 - 1] [i_9 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) : (5253384651807522723LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_11 = 2; i_11 < 17; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 4; i_12 < 19; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (int i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_34 [i_8] [i_11])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                                arr_55 [i_12] [i_11] [i_12 - 4] [i_13] [i_11] [i_11] [i_12 - 4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_51 [i_8] [i_11] [i_12] [i_13] [i_14])) ? (arr_54 [i_12] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                                arr_56 [i_12] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_33 [i_8 - 1])) : (((/* implicit */int) var_3))));
                                arr_57 [i_8 + 1] [i_11] [i_11] [i_13] [i_14] &= arr_39 [i_8 + 1] [i_12 + 1] [i_13 - 1];
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) (+(-4916800956462772370LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) (signed char)123);
                                arr_63 [i_8] [i_8] [i_8] [i_8 - 1] [i_12] [i_8 - 1] [i_8] = ((arr_34 [i_8] [i_11]) | (((/* implicit */int) (signed char)94)));
                                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_11 - 1] [i_12 - 1] [i_15])))))) : ((-(18446744073709551598ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)94))));
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 2; i_17 < 14; i_17 += 2) 
    {
        for (unsigned int i_18 = 1; i_18 < 14; i_18 += 2) 
        {
            {
                var_33 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_10))))) & (((((/* implicit */_Bool) 1302841469)) ? (var_5) : (((/* implicit */long long int) var_1)))))) & (((/* implicit */long long int) (-((~(arr_60 [i_18] [i_18 - 1] [i_18] [i_18 + 1]))))))));
                /* LoopNest 2 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned int i_20 = 1; i_20 < 13; i_20 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_17)))))));
                            var_35 = ((/* implicit */_Bool) ((signed char) ((arr_53 [i_17 + 1] [i_17 + 1] [i_18 - 1] [i_19 - 1] [i_19] [i_20 + 2] [i_18]) ^ (arr_53 [i_17 - 2] [i_18] [i_18 + 1] [i_19 - 1] [i_18] [i_20 - 1] [i_18]))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_73 [i_17 + 1] [i_18] [i_18] [i_20 + 2] [i_20 + 1])) / (arr_39 [i_18] [i_19 - 1] [i_20 + 2]))), (((/* implicit */int) (unsigned short)38990))))) ? ((-(((/* implicit */int) min((var_8), (((/* implicit */short) (unsigned char)30))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 6313162899399566637LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_17 + 1] [i_18] [i_17 - 1]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))));
                            arr_75 [i_17] [i_18 - 1] [i_18] [i_20] [i_18 + 1] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                        }
                    } 
                } 
                var_37 = ((_Bool) arr_45 [i_17 + 1] [i_18] [i_18 - 1] [i_17]);
                arr_76 [i_17] [i_18] [i_18] = ((/* implicit */signed char) min((((int) min((var_1), (var_1)))), (((((/* implicit */_Bool) ((int) (signed char)127))) ? (((((/* implicit */int) (unsigned short)26448)) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned long long int) (-(((int) (-(((/* implicit */int) (short)-24816)))))));
    var_39 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) 1262388625U)), (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-80))))))))));
}
