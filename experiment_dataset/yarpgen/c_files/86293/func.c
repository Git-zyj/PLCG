/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86293
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
    var_15 = ((/* implicit */unsigned int) max(((unsigned char)112), (((/* implicit */unsigned char) (signed char)127))));
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) arr_0 [i_0]);
        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_20 = ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_2]) != (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) -6917279350085453986LL))) * ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))));
                        var_22 = ((/* implicit */signed char) var_5);
                        var_23 = ((/* implicit */long long int) ((unsigned char) 65535U));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_10 [i_0]))));
                    }
                    var_25 = ((/* implicit */long long int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_12 [i_0] [i_1] [i_2] [i_2] [(signed char)7]))) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])))));
                    var_27 = ((/* implicit */unsigned int) (unsigned short)46204);
                    var_28 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))));
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    var_29 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5])) >> (((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5] [i_0] [i_2])) - (117)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5])) >> (((((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5] [i_0] [i_2])) - (117))) + (68))))));
                    var_30 = ((long long int) (unsigned short)7353);
                    var_31 = ((/* implicit */unsigned char) (unsigned short)3850);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_5])) >= (((/* implicit */int) (_Bool)1))));
                    var_33 = ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_7 [i_5] [i_0] [i_1]))) * (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)12))))));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)(-32767 - 1))))) <= (((((((/* implicit */int) (short)-8510)) + (2147483647))) >> (((352000800) - (352000772)))))));
                        var_35 = ((/* implicit */long long int) (-(var_4)));
                        var_36 = ((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_0] [i_2] [i_6])));
                    }
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [8LL] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((+(arr_18 [i_6] [i_2] [i_1] [i_0])))));
                    var_38 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)0)))) != (((/* implicit */int) var_11))));
                    var_39 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                }
            }
            var_40 = ((/* implicit */unsigned char) ((int) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_1] [6LL] [i_1] [i_0])) ^ ((-(((/* implicit */int) (signed char)8))))));
                        var_42 = ((/* implicit */int) min((var_42), ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_9]))))));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) arr_8 [i_9] [i_1] [i_0]))));
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_14 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ^ (((/* implicit */int) ((arr_20 [i_0] [(unsigned short)1] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1]))))))));
        }
        for (short i_10 = 1; i_10 < 9; i_10 += 4) 
        {
            var_45 = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_10 + 1] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_46 += ((((/* implicit */_Bool) arr_25 [i_0] [(signed char)2])) ? (var_7) : (((/* implicit */unsigned long long int) arr_30 [i_11] [7ULL] [i_10 + 1])));
                var_47 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]))));
            }
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                var_48 = ((/* implicit */_Bool) arr_8 [i_10 + 1] [8LL] [i_10 + 1]);
                var_49 = ((/* implicit */unsigned char) var_14);
                var_50 = (i_0 % 2 == zero) ? (((/* implicit */long long int) (((((-(arr_0 [i_0]))) + (2147483647))) >> (((((/* implicit */int) (signed char)73)) & (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) (((((((-(arr_0 [i_0]))) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) (signed char)73)) & (((/* implicit */int) var_5)))))));
            }
            var_51 = ((/* implicit */unsigned long long int) var_3);
            var_52 = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0];
            var_53 = ((/* implicit */signed char) (~(var_9)));
        }
        /* LoopSeq 4 */
        for (short i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            var_54 = ((/* implicit */short) var_9);
            var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [i_13] [i_13] [i_13]))) ? (((/* implicit */int) ((signed char) 3759280296U))) : (((/* implicit */int) var_2))));
            var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) arr_40 [i_0]))));
            var_57 ^= ((/* implicit */long long int) ((unsigned long long int) var_14));
            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2200973934U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156)))))) << (((((/* implicit */int) arr_35 [0U] [i_13])) + (49)))));
        }
        for (short i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
        {
            var_59 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(short)1] [i_14])) & (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_14]))))));
            var_60 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned short)7] [(unsigned short)7] [i_0] [i_14] [i_0])) ? (((/* implicit */int) (signed char)-1)) : (arr_4 [i_14] [0LL] [i_0]))))));
        }
        for (short i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
        {
            var_61 = ((/* implicit */signed char) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_62 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65274)) == (((/* implicit */int) (unsigned short)11378))));
        }
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            var_63 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
            var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) <= (arr_4 [i_0] [i_16] [i_16])));
        }
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            var_65 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6793718837242976654LL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (unsigned short)13612))));
            var_66 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)54707))));
            var_67 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_0]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) 
    {
        var_68 = ((/* implicit */unsigned int) var_8);
        var_69 = ((/* implicit */_Bool) var_3);
        var_70 = ((/* implicit */unsigned char) (~(((2784193720977767423LL) / (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_18])))))));
        /* LoopNest 3 */
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            for (unsigned short i_20 = 1; i_20 < 18; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    {
                        var_71 = ((/* implicit */unsigned long long int) ((signed char) (signed char)28));
                        var_72 = ((((long long int) 514982179022202325LL)) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2045725685U)) <= (var_4))))));
                    }
                } 
            } 
        } 
    }
}
