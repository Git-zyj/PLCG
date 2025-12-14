/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61876
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
    var_15 = ((var_9) != (-3078024617224249800LL));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        var_17 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) == (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */int) (unsigned char)188)) : (((int) (_Bool)1))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] &= ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) && (((/* implicit */_Bool) ((int) (_Bool)1)))))), (((short) ((unsigned int) (_Bool)1)))));
                    var_18 = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25221))) == (11188896276233099467ULL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */int) (_Bool)1);
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((short) var_1));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_19 = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */long long int) 4127461891U)) ^ (33554430LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_5] [i_6])))))) : (((/* implicit */unsigned char) ((((((/* implicit */long long int) 4127461891U)) ^ (33554430LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_5] [i_6]))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (unsigned char)194)) + (((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_4])) & (((/* implicit */int) arr_14 [i_4]))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_22 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]))) * (2305702271725338624ULL));
                                var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_10] [i_5] [i_6] [i_10] [i_10] [i_9 - 1])) && (((/* implicit */_Bool) 7257847797476452122ULL))));
                                var_24 = arr_20 [(short)12] [i_6] [i_6] [i_6];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        arr_44 [i_12] [(signed char)18] [i_13] [i_12] [i_12] [i_12] &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_22 [i_11] [i_11] [i_11])))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)49152)) > (-1170783825))))));
                        var_25 &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11]))) % (((7257847797476452147ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))))))) <= (((/* implicit */unsigned long long int) ((((((arr_26 [i_11] [i_11] [i_13] [i_12]) + (((/* implicit */int) var_12)))) + (2147483647))) >> ((((-(((/* implicit */int) var_6)))) + (260))))))));
                    }
                    arr_45 [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) >= ((-(11188896276233099459ULL)))))), (((long long int) 7257847797476452147ULL))));
                }
            } 
        } 
        arr_46 [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_33 [i_11])))));
        /* LoopNest 2 */
        for (signed char i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            for (short i_16 = 1; i_16 < 19; i_16 += 1) 
            {
                {
                    arr_51 [i_11] [i_15] [i_15] = ((_Bool) (_Bool)1);
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-((-(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                {
                    var_27 = ((/* implicit */short) var_2);
                    arr_58 [i_11] [(short)21] [i_18] = ((/* implicit */short) (+(((((-678425153) + (2147483647))) << (((((/* implicit */int) ((unsigned char) var_12))) - (124)))))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        arr_61 [i_11] [i_11] [i_11] [i_19] = ((/* implicit */int) arr_20 [i_19] [i_18] [i_18] [i_11]);
                        var_28 -= ((/* implicit */short) var_7);
                        var_29 -= ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_8)) / (((/* implicit */int) ((arr_30 [i_19] [i_17] [i_18] [i_17] [i_19]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)112)))))));
                        var_31 &= ((/* implicit */short) var_14);
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((arr_36 [i_11]) != (var_5))))))) - (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */unsigned long long int) -1681726264)) : (min((((/* implicit */unsigned long long int) var_1)), (var_5)))))));
    }
}
