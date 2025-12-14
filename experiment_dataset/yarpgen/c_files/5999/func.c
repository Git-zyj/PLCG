/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5999
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_18 = ((((((/* implicit */int) arr_1 [i_1 - 2] [i_1])) == (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (((-2147483647 - 1)) < (1869625790))))))) : (max((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_1 - 3])), (var_2))));
                                arr_17 [i_2] [i_2] [i_4] [i_1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_3])), (arr_6 [i_4])))) ? (min((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])), (2147483647))) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) max((((/* implicit */short) var_14)), (arr_1 [i_0] [i_4])))))) : (arr_6 [i_4]))))));
                            }
                            var_20 ^= ((/* implicit */unsigned int) (((-((((_Bool)0) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) / (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (-(((long long int) max((2147483647), (((/* implicit */int) (unsigned char)73)))))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
                            var_22 = ((/* implicit */unsigned short) arr_8 [i_1] [i_6]);
                        }
                    } 
                } 
                var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1 - 4] [i_1] [i_1 - 4] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 - 4] [i_1] [i_1] [i_1 - 4]))) / (-8737192430400538815LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)12500)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_25 = ((/* implicit */int) ((-633165840334327489LL) != (((/* implicit */long long int) (-(-1291680117))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (short i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            {
                arr_29 [i_7] = ((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_8] [i_7] [i_8]);
                var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_16 [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 1]), ((-(arr_16 [i_7] [i_7] [i_7] [i_7])))))) ? (((((/* implicit */_Bool) arr_14 [16LL])) ? ((-(var_5))) : (((/* implicit */int) max((var_17), (var_15)))))) : (((/* implicit */int) var_9))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                {
                    arr_36 [i_9] [i_9] = (-(((((((/* implicit */_Bool) (unsigned short)18715)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_33 [i_10] [i_10])))) - (26912))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 3) 
                        {
                            {
                                arr_43 [i_13] [i_12] [i_12] [i_10] [i_9] = ((/* implicit */unsigned short) arr_42 [i_12]);
                                arr_44 [i_9] [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_40 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12]);
                                arr_45 [i_9] [i_9] [i_11] [i_12] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) 543108964U)) != (1568272740322939561LL)))) & ((+(((/* implicit */int) var_17))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)248))))))) : (((/* implicit */int) arr_11 [i_13])));
                                var_27 = ((/* implicit */unsigned char) var_16);
                            }
                        } 
                    } 
                    var_28 = var_11;
                }
            } 
        } 
    } 
}
