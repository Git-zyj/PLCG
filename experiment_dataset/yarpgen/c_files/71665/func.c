/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71665
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
    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (634179527U)))) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) var_2)))) : (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -11)) ? (max((((((/* implicit */_Bool) arr_0 [i_2])) ? (4294967295U) : (4294967295U))), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) 3660787768U))))))))));
                                var_18 = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 7; i_5 += 3) 
                {
                    arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)153);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1022)) ? (((((/* implicit */int) (signed char)103)) % (((/* implicit */int) (short)13853)))) : (((((/* implicit */int) (short)18444)) % (((/* implicit */int) arr_18 [i_0] [(unsigned char)6] [(unsigned char)2] [(short)5] [i_1] [(_Bool)1]))))));
                                arr_24 [(unsigned char)7] [i_1] [i_1] [5U] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    arr_25 [i_1] [(short)5] [(short)5] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)-13853)) ? (arr_12 [i_0] [i_0] [i_0] [8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))))) >> (((arr_8 [i_1] [i_1]) - (6503186409862931094LL)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-13853)) ? (arr_12 [i_0] [i_0] [i_0] [8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))))) >> (((((arr_8 [i_1] [i_1]) - (6503186409862931094LL))) + (2950993356781659358LL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 4; i_8 < 9; i_8 += 3) 
                    {
                        arr_29 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
                        var_19 = ((/* implicit */long long int) 1046573653);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_14)))))));
                    }
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1367294211) ^ (((/* implicit */int) var_1))))) ? (min((3660787767U), (((/* implicit */unsigned int) ((var_7) / (((/* implicit */int) (short)24859))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)13859), (min((((/* implicit */short) (_Bool)0)), ((short)29269)))))))));
                    arr_33 [(unsigned char)2] [i_1] [i_0] = ((/* implicit */int) (signed char)62);
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_22 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_21 [i_0] [2LL] [9LL] [i_9] [i_9] [i_10]), (((/* implicit */long long int) (unsigned char)102)))))))), (max((((((/* implicit */_Bool) -3834733261633845515LL)) ? (3960279297U) : (4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [(_Bool)1] [i_1] [(unsigned short)5])))))))));
                        arr_36 [(short)8] [(_Bool)1] [(unsigned char)4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65534)) ? (3660787742U) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3660787782U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)13853)))))))));
                    }
                }
                var_23 = ((/* implicit */_Bool) (short)14114);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (unsigned char i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                {
                    arr_46 [i_13] = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) 1046573653)), (18446744073709551595ULL))), (((/* implicit */unsigned long long int) (-(3660787764U)))))), (((/* implicit */unsigned long long int) (short)29273))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_11))));
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_4)))) ? (var_9) : (((/* implicit */unsigned int) min((min((((/* implicit */int) var_11)), (var_7))), (((1046573664) | (((/* implicit */int) var_15)))))))));
}
