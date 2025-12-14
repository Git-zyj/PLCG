/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91737
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)9488)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)9469)) : (((/* implicit */int) (unsigned short)56070))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9470))) : (274609471488LL))) : (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9467)))) * (var_4)))))))));
    var_11 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 *= ((/* implicit */_Bool) ((unsigned long long int) 3465467617U));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9441)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) var_1);
        var_14 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (arr_4 [i_1]) : (arr_6 [(unsigned short)2]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) var_7);
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                {
                    var_15 = var_5;
                    arr_17 [13ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_13 [i_2] [i_2] [i_2])))) ? ((+(((/* implicit */int) arr_9 [i_3] [i_4 + 3])))) : (var_4)));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56102)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_4]))));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = arr_15 [i_2] [16U] [i_4];
                }
            } 
        } 
        arr_19 [i_2] |= ((/* implicit */int) var_1);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_28 [i_2] = ((/* implicit */long long int) 18263739678223624739ULL);
                        arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) >> (((var_8) - (3541499630U)))));
                        arr_30 [i_2] [16U] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)16815)) << (((-24) + (28)))));
                        var_17 = ((/* implicit */long long int) ((signed char) ((var_8) << (((((/* implicit */int) arr_15 [i_7] [i_5] [i_2])) - (27864))))));
                        arr_31 [(short)9] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1954295176812345697LL))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_5] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_20 [20U] [20U] [i_6]))))));
                        var_18 = ((/* implicit */short) var_0);
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_38 [i_2] [(unsigned short)12] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_24 [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_3))));
                            var_19 = ((/* implicit */long long int) (+(((unsigned long long int) (unsigned short)9428))));
                            arr_39 [i_2] [i_8] [i_6] [i_8] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) arr_24 [i_2] [i_6])))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 24; i_10 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_10]))));
                            arr_44 [i_2] [i_8] [i_6] [i_6] [i_10 - 1] [i_10] [i_8] = ((/* implicit */long long int) arr_40 [i_10 - 2] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_42 [i_6] [i_8]))) ? (((/* implicit */int) ((arr_33 [i_2] [(unsigned char)24]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) var_1)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (6ULL)));
                        arr_49 [i_11] [i_5] [i_6] [i_11] = ((/* implicit */int) (unsigned char)56);
                        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned short)19781)) : (-1525768817)))) ? (((arr_10 [i_11]) ^ (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (+(var_4))))));
                        arr_50 [i_11] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_45 [i_2] [i_2] [i_6] [i_2] [22U] [i_11])) : (((/* implicit */int) (unsigned short)65408))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        arr_53 [i_12] [i_12] [i_6] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) var_5)))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) % ((-(-2LL)))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6195489775560086774LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5]))));
                        arr_54 [i_2] [i_2] = ((/* implicit */unsigned int) arr_32 [i_2] [(unsigned short)19] [i_6] [i_12] [i_12]);
                    }
                    var_26 = ((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_6] [i_2]);
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_2] [i_5] [i_5] [(_Bool)1] [(_Bool)1])) ? (2750445877U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))))))));
                    arr_55 [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) (-(min((var_4), (((/* implicit */int) ((492866442U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19778))))))))));
                }
            } 
        } 
    }
}
