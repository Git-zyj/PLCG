/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96836
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) < (var_1))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-26125)))) : (((((/* implicit */long long int) ((/* implicit */int) (short)26125))) % (var_2)))))) ? (var_3) : (var_8)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(1608667599)))), (((((/* implicit */_Bool) ((short) -5515624244420046570LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : ((-(arr_3 [i_0])))))));
        var_14 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1136982436)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (short)-26125))))) ? (((((/* implicit */_Bool) -1272018538)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1272018538))))) : (max((1272018538), (((/* implicit */int) arr_2 [i_1] [i_0])))))) : ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)26155)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
            arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-1272018538) : (((/* implicit */int) (short)-26126))));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)26155))) | (var_3)))) ? (var_2) : (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))) : (((/* implicit */long long int) var_6))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((short) var_6))) : (((((/* implicit */int) (short)-26126)) & (((/* implicit */int) (short)-26156))))));
            arr_14 [i_0] [(signed char)13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (unsigned short i_6 = 4; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_25 [i_3] [i_5] [21ULL] = ((/* implicit */_Bool) arr_17 [i_3] [(unsigned char)12]);
                        var_16 = ((/* implicit */int) ((arr_22 [i_3] [6] [i_5] [i_6 - 2] [i_6 - 1]) ? (2110076306U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26777))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
                        {
                            {
                                arr_39 [i_7] [i_8] [(unsigned short)9] [i_9 - 1] [i_10] [i_7] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])) : (((((/* implicit */_Bool) arr_23 [i_7] [i_7 - 1] [i_7])) ? (((/* implicit */int) (short)26125)) : (((/* implicit */int) arr_20 [i_10] [i_7 + 1] [i_7 + 1]))))));
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_10 + 1] [i_11 - 1]))));
                                arr_40 [i_7] [i_8] [i_9 - 1] [i_10] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [0U] [i_11 - 1] [i_7 - 1])) ? (((/* implicit */int) (short)-26125)) : ((-(((/* implicit */int) var_9))))));
                                var_19 *= ((/* implicit */unsigned short) 68719476735LL);
                            }
                        } 
                    } 
                    arr_41 [8ULL] [i_7] = (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-26777)) + (2147483647))) << (((((/* implicit */int) var_9)) - (138)))))));
                }
            } 
        } 
        var_20 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [20U])) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (arr_16 [(_Bool)1] [(_Bool)1])))));
        arr_42 [i_7] = ((/* implicit */unsigned char) var_3);
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        arr_46 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_12 + 1] [i_12]))))) ? ((-(arr_8 [i_12 + 1] [i_12 + 1] [i_12 + 1]))) : (((/* implicit */int) (!(((((/* implicit */int) (short)32749)) != (((/* implicit */int) arr_2 [i_12] [i_12 + 1])))))))));
        var_21 = var_4;
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32749)) : ((+(((((/* implicit */int) (unsigned char)56)) - (((/* implicit */int) (short)26777))))))));
}
