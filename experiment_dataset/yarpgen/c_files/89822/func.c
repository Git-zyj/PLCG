/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89822
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
    var_14 = ((/* implicit */long long int) (~(377562533)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-91)) != (((/* implicit */int) (_Bool)0)))))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((arr_2 [i_1 - 1] [i_3]) - (((/* implicit */unsigned int) var_3)))))));
                        var_18 ^= var_4;
                        arr_8 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(4294967295U))))));
            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)162)) + (((/* implicit */int) (unsigned char)108))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) -377562534)) : (12U)))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) arr_12 [i_5 + 1] [i_5]))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_6] = ((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_0])) && (((/* implicit */_Bool) var_3)));
                        arr_22 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2191476928U)) ? (((/* implicit */long long int) var_13)) : (6295023858437653371LL))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) var_3);
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        }
        var_22 = ((/* implicit */short) (~(arr_7 [i_0] [i_0] [i_0])));
        var_23 = (((_Bool)0) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_11)));
    }
    for (unsigned long long int i_8 = 2; i_8 < 6; i_8 += 1) 
    {
        arr_26 [i_8] [i_8 + 2] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) var_13)) : (arr_12 [i_8] [i_8]));
        arr_27 [i_8] |= ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) var_0)), (var_5))))));
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (max((((/* implicit */unsigned int) arr_1 [(_Bool)1])), (((((/* implicit */_Bool) (signed char)-114)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
        arr_28 [i_8] = ((/* implicit */_Bool) arr_11 [i_8] [12]);
    }
    for (long long int i_9 = 4; i_9 < 10; i_9 += 2) 
    {
        var_25 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) min((max((var_13), (arr_31 [(unsigned short)2] [i_9 - 4]))), (((/* implicit */int) var_8))));
                        arr_38 [i_9] [i_11] [i_10] [i_11] [i_11] [11ULL] = ((/* implicit */signed char) min((((/* implicit */int) min(((short)-23227), (((/* implicit */short) arr_9 [i_11]))))), (((((/* implicit */int) arr_9 [i_11])) - (((/* implicit */int) (unsigned char)94))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_47 [i_9] [i_13] [i_13] [i_9] = ((/* implicit */long long int) 3603635819U);
                    var_27 *= ((/* implicit */unsigned long long int) var_12);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_15 = 2; i_15 < 13; i_15 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_13] [i_14 - 1]))) < (arr_49 [i_13] [i_14 - 1] [i_9 - 3] [i_9 - 4] [i_13])));
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_17 [i_9] [i_14 - 1] [i_15] [i_9 + 1]) : (var_4)));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_14] [i_14 - 1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_32 [i_14] [i_14] [12ULL])));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (_Bool)0))));
                            var_32 = ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_5)));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_17 = 2; i_17 < 10; i_17 += 2) 
                    {
                        arr_55 [i_13] [i_13] [i_14] = (~(arr_2 [i_9] [i_13]));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_39 [i_14 - 1] [i_9] [i_17])))))));
                        arr_56 [i_13] [i_13] [i_17 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))));
                        var_34 *= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_35 = ((/* implicit */unsigned int) ((arr_35 [i_17 + 3] [i_17 - 2]) << (((((/* implicit */int) (unsigned char)94)) - (89)))));
                    }
                    var_36 -= ((/* implicit */_Bool) min(((-(arr_5 [i_9] [i_9 + 3] [i_9] [i_14 - 1]))), (((/* implicit */int) max((((/* implicit */unsigned char) (!(arr_34 [i_9] [i_13] [i_14] [i_9])))), (arr_18 [i_14]))))));
                }
            } 
        } 
    }
}
