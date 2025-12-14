/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58960
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (1638630154))))))))));
    var_12 = ((/* implicit */unsigned long long int) (short)-17135);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_1 [(unsigned char)3]))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 20LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (short)-16064))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) : (0ULL)))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_15 = 2147483647;
                        var_16 = ((/* implicit */short) max((var_8), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2859403784460195798LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (1751426861484322459ULL))) <= (((/* implicit */unsigned long long int) arr_7 [i_1])))))));
                        var_17 = ((/* implicit */short) arr_10 [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_2] [i_3]))) ? (max((509160294U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)118)))))))) ? (((/* implicit */int) ((arr_7 [i_2]) > (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) var_1)) : (var_6))))))) : ((-(((/* implicit */int) (unsigned char)159))))));
                        var_19 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) (unsigned char)151)) ? (20LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((max(((~(9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_7 [i_0])) != (466924017806032554ULL)))))) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        arr_15 [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned char) ((((int) 2147483647)) + ((-(((/* implicit */int) (unsigned char)148))))));
        var_21 = ((/* implicit */unsigned char) (-(arr_13 [i_4])));
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (arr_17 [i_5] [i_5])))));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)99)), ((-(((/* implicit */int) (unsigned char)66))))));
        arr_20 [i_5] = ((/* implicit */int) arr_16 [i_5]);
    }
    for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
    {
        var_22 = ((/* implicit */int) var_10);
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((1416240573U) << (((((/* implicit */int) (short)-1)) + (23)))))) ? (((unsigned long long int) min((arr_29 [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) (short)12092))))) : (((/* implicit */unsigned long long int) var_5))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) max((arr_24 [i_7] [i_8]), (((/* implicit */unsigned int) var_2))))) ? (max((arr_29 [i_9] [i_7] [i_9]), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)22388)) : (-908833464)))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [(short)11]))))))))));
                        arr_34 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17137))))), (((((/* implicit */_Bool) 4294967292U)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7860)))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((arr_28 [i_8] [i_7] [i_8]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23281)))))))) ? (((/* implicit */unsigned long long int) arr_30 [i_6] [i_6] [i_6 + 4] [i_7 + 1])) : (min((((/* implicit */unsigned long long int) var_8)), (arr_32 [i_8])))));
                    }
                } 
            } 
        } 
    }
}
