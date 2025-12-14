/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83274
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
    var_11 = ((/* implicit */unsigned int) (_Bool)1);
    var_12 = ((/* implicit */signed char) (+((+(((long long int) (unsigned short)0))))));
    var_13 ^= ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), ((_Bool)1)));
        var_15 = ((/* implicit */short) (+((-(-2661622073159353482LL)))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) min((((/* implicit */int) (short)4095)), ((-((-(((/* implicit */int) (unsigned short)65535))))))));
        arr_4 [i_1] &= ((/* implicit */unsigned int) (-((+(((/* implicit */int) min(((short)-1), ((short)3495))))))));
    }
    for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
            {
                for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 1; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_17 += ((/* implicit */short) max((-8484531256866170770LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_7)))))))));
                            var_18 = ((/* implicit */short) 4294967295U);
                            var_19 = ((/* implicit */int) 4081660301U);
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_5])) ? (((/* implicit */int) (short)-18913)) : (((/* implicit */int) var_0)))))))));
                            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                        }
                        for (short i_8 = 4; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            arr_22 [i_2] [i_8 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (short)32050)) - (32034)))));
                            var_22 -= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
                            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((((((/* implicit */int) (short)-3512)) + (2147483647))) >> (((/* implicit */int) (short)7)))))))));
                        }
                        for (short i_9 = 4; i_9 < 22; i_9 += 2) /* same iter space */
                        {
                            arr_25 [i_2] [i_5] [i_4 - 1] [i_3] [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)23518)))) >> ((((-(((/* implicit */int) var_1)))) + (3709)))));
                            var_25 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_11 [i_2 + 2] [i_2 - 1] [i_4 - 2]), (arr_11 [i_2] [i_2 - 2] [i_4 + 1]))))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (3799388275U) : (((unsigned int) var_6))))));
                        var_27 = var_2;
                        arr_26 [i_4] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2661622073159353481LL)) ? (((/* implicit */int) var_1)) : (var_10))) * (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (short)8184))))) ? (max((((((/* implicit */_Bool) -7539594044873531290LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32749)))), (((/* implicit */int) max((var_2), ((short)11838)))))) : (max(((+(((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned char)26)) & (((/* implicit */int) (unsigned char)37))))))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 23; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                {
                    arr_32 [i_11] [i_2] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(2147483630))), ((+(((/* implicit */int) arr_24 [i_2] [i_2] [(unsigned char)8] [i_2 + 2] [i_2] [i_2]))))))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)24430))))), (min((((/* implicit */short) (unsigned char)233)), (var_7)))))) : (((/* implicit */int) max(((short)-14663), (((/* implicit */short) (signed char)127)))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-16746)) / (((/* implicit */int) (short)-14890))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (unsigned short)63385))));
                }
            } 
        } 
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min(((((~(2751136948U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (short)28930)) : (((/* implicit */int) (short)-14886))))))))));
    }
    /* LoopSeq 2 */
    for (int i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        var_32 ^= arr_27 [i_12];
        var_33 = ((/* implicit */unsigned int) var_1);
        var_34 *= ((/* implicit */signed char) var_3);
        arr_36 [i_12] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_24 [i_12] [i_12] [i_12] [i_12] [i_12] [(_Bool)1])) / (((/* implicit */int) (unsigned short)36796)))) + (((((/* implicit */int) arr_35 [i_12])) | (((/* implicit */int) (signed char)-60))))));
    }
    for (int i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        var_35 = ((/* implicit */short) max((2147450880U), (((/* implicit */unsigned int) max((arr_12 [i_13] [i_13] [i_13]), (arr_12 [i_13] [i_13] [i_13]))))));
        arr_39 [i_13] = ((/* implicit */short) -1871222343);
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_13] [i_13] [20LL])) - (((/* implicit */int) (signed char)97)))) != (((((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_13] [i_13])) ? (var_10) : (((/* implicit */int) var_6)))))))));
        arr_40 [i_13] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) (((+(((/* implicit */int) (short)27151)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)12338))))))))));
    }
}
