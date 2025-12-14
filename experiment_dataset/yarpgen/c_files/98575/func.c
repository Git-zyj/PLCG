/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98575
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [4LL])) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((-3664266329236303811LL) | (arr_0 [(short)6]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [(_Bool)1])))))) : (arr_0 [(short)6]))))));
        var_11 ^= ((/* implicit */signed char) ((long long int) arr_1 [(short)2]));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_6 [i_0] [(signed char)5] = ((/* implicit */long long int) ((unsigned long long int) ((long long int) (-(arr_4 [i_0] [i_0 - 1] [i_1] [i_1])))));
                arr_7 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((_Bool) (-(((((/* implicit */_Bool) -1562366946032259708LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_1] [(_Bool)1]))))))));
                arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned long long int) (+(arr_1 [i_0]))));
            }
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) ^ (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_0 [i_0])))) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_0 [i_0])))));
        }
    }
    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_3 - 3]), (1099511627520LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 3]))) : (arr_10 [i_3 + 3]))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_3]) - (arr_10 [i_3])))) ? (min((arr_10 [i_3]), (((/* implicit */long long int) arr_11 [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [18])) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3 + 2])))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_10 [i_3]))) | (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [5LL])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 3]))) : (arr_10 [i_3 + 2])))));
    }
    for (signed char i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4 + 1] [i_4 - 1])) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) 1099511627520LL)) ? (1562366946032259707LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_4 - 1] [i_6]))))) : (936733969175608385LL)));
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    for (int i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) arr_21 [i_4] [i_5])) : (((/* implicit */int) arr_27 [i_6] [i_5]))))) ? (var_7) : (arr_23 [i_8] [i_5] [i_6] [9U] [i_8] [9U])))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_23 [i_6] [i_5] [i_6] [i_7 + 1] [2ULL] [i_5]))));
                            arr_28 [(_Bool)1] [i_4 + 1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+((-(((long long int) arr_20 [i_4 - 3] [i_5] [i_4 - 3]))))));
                        }
                    } 
                } 
            }
            arr_29 [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(arr_23 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_5] [i_5] [i_5])));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_30 [i_9] [i_9] [(short)11] [i_10])))), (((/* implicit */int) (_Bool)0))));
                        arr_34 [i_10] [4ULL] [i_5] [i_4] = ((/* implicit */unsigned int) var_1);
                        arr_35 [i_4] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_4]))));
                        var_17 = ((/* implicit */_Bool) (-(arr_26 [1] [1] [i_9] [i_9] [i_10])));
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_6)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */int) (signed char)125);
        }
    }
    for (signed char i_11 = 3; i_11 < 16; i_11 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_1))));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((_Bool) arr_16 [i_11 + 2]))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_11 - 1])) ? (((/* implicit */long long int) arr_23 [i_11] [i_11 + 1] [i_11] [i_11 - 2] [i_11 - 2] [4LL])) : (arr_33 [i_11] [i_11] [i_11] [i_11]))))));
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 18; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    {
                        arr_47 [i_14] [i_13] [(_Bool)1] [i_11 + 1] [(unsigned short)17] [i_11] = ((/* implicit */unsigned long long int) arr_21 [i_13] [i_14]);
                        var_23 = ((/* implicit */signed char) var_6);
                        var_24 = ((/* implicit */_Bool) arr_24 [i_11 + 2] [i_11 + 2] [i_13] [i_13 - 1] [i_13 - 1] [i_14]);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                {
                    arr_54 [i_15] [i_16] [i_17] [(_Bool)1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_45 [i_15] [i_15] [i_15] [8ULL] [i_15] [(short)2])) ? ((-(8LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [(unsigned short)1]))))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (((short) arr_36 [i_15]))))))));
                    var_25 = arr_42 [i_15] [i_15] [i_17];
                    var_26 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_16 - 1] [i_17]))))) - (((((/* implicit */_Bool) arr_52 [i_15] [(signed char)17] [i_16] [i_15])) ? (((/* implicit */int) arr_11 [i_15])) : (((/* implicit */int) (short)-1784)))))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned char) ((_Bool) (signed char)-35))))));
                }
            } 
        } 
        arr_55 [i_15] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_0)))))) & (max((arr_44 [i_15] [i_15]), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)0)))))))));
        var_28 -= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1]))) : (arr_44 [i_15] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (min((((/* implicit */long long int) arr_24 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])), (arr_50 [i_15] [i_15])))))));
        var_29 = ((/* implicit */unsigned long long int) 6879297204600369747LL);
    }
    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
    {
        var_30 ^= ((/* implicit */int) ((short) ((_Bool) var_8)));
        arr_58 [i_18] = ((/* implicit */unsigned char) arr_40 [i_18] [6]);
    }
    var_31 = var_3;
}
