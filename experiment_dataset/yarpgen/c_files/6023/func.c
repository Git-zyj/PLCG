/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6023
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((unsigned int) 0)))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1])) : (((int) (~(((/* implicit */int) (unsigned short)65529)))))));
                            var_20 = ((/* implicit */unsigned int) arr_5 [i_2] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_21 [i_4 - 2] [1] [7] [i_4 - 2] [i_1] [(unsigned short)6] |= ((/* implicit */short) ((min((((0) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_19 [i_0] [i_1] [11] [i_4 + 1] [i_5] [i_6] [15U])))) << (((((_Bool) (signed char)112)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-113))))) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_2 [i_1] [i_6]))))))));
                                var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (_Bool)1)) > (-1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 4; i_10 < 13; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned short) -1);
                                arr_35 [i_7] [i_7] [(_Bool)1] [i_7] [i_11] [(unsigned short)11] [i_7] = arr_13 [i_10] [i_10 - 2] [i_10 - 4] [i_10 - 4];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned short) arr_20 [16] [i_7]);
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((short) (unsigned short)30)))));
                                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_7] [i_8] [i_9] [i_12] [i_9]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_24 [9U])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15] [i_14] [i_9] [(unsigned short)3] [i_8] [i_7])) ? (((/* implicit */int) (unsigned short)4080)) : (2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_7] [i_9] [i_14]))))) : ((~(1073741824U)))))));
                                var_27 -= ((/* implicit */unsigned int) ((signed char) (signed char)-64));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (max((arr_5 [i_7] [i_7]), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7] [i_14] [(short)0] [i_8] [i_7]))))))));
                                var_29 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) var_6)) ? (arr_22 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8] [i_8]))))))) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)14)) >> (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 2; i_17 < 13; i_17 += 1) 
                        {
                            {
                                arr_51 [i_7] [i_8] [i_16] [i_16] = ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_16]))))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_31 [i_8] [i_9] [i_17]))))) : (((/* implicit */int) min((((/* implicit */short) arr_38 [i_17 - 1] [i_16] [i_9] [i_8] [13])), (arr_47 [i_7] [i_16] [i_17 - 2]))))))));
                                arr_52 [i_16] [i_16] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 24; i_18 += 1) 
    {
        for (long long int i_19 = 3; i_19 < 23; i_19 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    for (signed char i_21 = 2; i_21 < 24; i_21 += 3) 
                    {
                        for (long long int i_22 = 2; i_22 < 23; i_22 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) max((var_30), (arr_60 [i_19 - 2])));
                                arr_67 [24U] [i_19] [i_20] [i_19 - 1] [i_18] [i_19] [i_18 - 1] = ((/* implicit */unsigned int) ((arr_60 [i_22]) ? (((/* implicit */int) (unsigned char)248)) : (((((-1) + (2147483647))) >> (1)))));
                                arr_68 [i_19] [i_20] [i_19] = ((/* implicit */short) max((arr_66 [i_18] [i_18] [i_18] [i_18] [i_21] [i_22 - 2]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) << (((var_16) - (372150824464207096LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_19] [i_19])) ? (arr_64 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_19] [i_19] [i_21 - 1])))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    for (int i_24 = 1; i_24 < 23; i_24 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 3221225472U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (arr_64 [i_19])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((1), (((/* implicit */int) (unsigned short)65535))))) ? (min((var_13), (arr_64 [i_19]))) : (((/* implicit */unsigned int) (-(3)))))))));
                            arr_74 [i_19] [i_23] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_71 [i_18 - 1] [i_23] [i_18 - 1])) ^ (((((/* implicit */_Bool) arr_71 [i_24 - 1] [i_19 + 1] [i_18])) ? (((/* implicit */int) arr_71 [i_18 - 1] [i_18 - 1] [i_24 + 1])) : (((/* implicit */int) arr_71 [i_24 + 1] [i_23] [16U]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
