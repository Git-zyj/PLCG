/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77835
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_6)))) >> (((/* implicit */int) (!(var_11))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))));
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (!(var_11))))) % (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (min((var_9), (var_9))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                        arr_13 [i_1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2]))));
                        var_18 = ((/* implicit */short) var_16);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_18 [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) | (((/* implicit */int) arr_9 [(unsigned short)2] [i_0] [i_0])))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_16))))))));
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((var_12) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2])))) : ((~(((/* implicit */int) arr_14 [i_5] [i_2] [i_1] [i_0]))))));
                        var_22 = ((((arr_17 [i_0] [i_0] [i_5] [i_0] [i_2]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))) <= ((~(((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5])))));
                        arr_21 [i_0] = ((/* implicit */signed char) var_15);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) ((short) arr_6 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_35 [(_Bool)1] [i_6] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                                arr_36 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_27 [(short)0] [i_7] [(short)0]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-55)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (signed char)-115)))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_7] [i_6])) <= (((((/* implicit */int) var_3)) * ((+(((/* implicit */int) var_3))))))));
                    }
                    var_27 ^= ((/* implicit */_Bool) (((!(arr_27 [i_7] [i_7 - 1] [i_7 - 1]))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_6] [i_6]) && (var_14))))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7])))));
                    arr_41 [i_6] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_25 [(unsigned short)17] [i_0] [(unsigned short)17]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))))) && (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_12))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_11])) || (arr_25 [i_11] [i_11] [i_11])));
        arr_44 [i_11] = ((/* implicit */unsigned short) var_3);
        var_29 = ((short) arr_32 [i_11] [(unsigned short)3] [i_11] [i_11] [(signed char)9] [(unsigned short)3]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7))))) - (((/* implicit */int) arr_8 [i_13] [i_12]))));
                    var_31 = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
        arr_53 [i_12] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_1))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                for (short i_17 = 4; i_17 < 9; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) arr_26 [i_16] [i_16]);
                        arr_62 [i_16] [i_16] [i_12] [i_15] [i_16] = ((/* implicit */signed char) var_13);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                for (unsigned short i_21 = 1; i_21 < 20; i_21 += 2) 
                {
                    {
                        var_33 = arr_72 [i_18] [(_Bool)1] [i_19] [i_21];
                        arr_73 [i_18] [i_19] [i_20] [i_21 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        arr_74 [i_18] [i_18] [i_18] [i_19] [i_19] [i_21] = var_6;
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */signed char) min(((short)-9766), (((/* implicit */short) (_Bool)1))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) arr_65 [i_18] [i_18]))));
        var_36 = var_3;
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) /* same iter space */
    {
        var_37 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_22])) * (((/* implicit */int) arr_68 [i_22]))));
        arr_77 [i_22] = ((/* implicit */signed char) var_8);
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_68 [i_22])) + (2147483647))) >> (((var_8) - (9999490718516496888ULL))))))));
    }
    var_39 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_12))))))) * (((/* implicit */int) var_3))));
}
