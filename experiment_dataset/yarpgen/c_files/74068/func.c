/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74068
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_9))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 4; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) var_12);
                        var_20 *= ((/* implicit */unsigned int) min((((long long int) var_4)), (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_14))))));
            arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) arr_6 [i_0] [i_0]))))) || (((/* implicit */_Bool) var_14))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_0))));
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(((((var_3) + (2147483647))) >> (((((/* implicit */int) var_17)) - (1307))))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (var_3))), (((/* implicit */int) ((((/* implicit */int) (signed char)4)) != (((/* implicit */int) var_14)))))))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (short)7493)))) : ((~(arr_13 [i_4] [i_4])))));
            var_25 &= ((/* implicit */signed char) var_9);
            var_26 = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (signed char)-99)))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [(signed char)8] [i_0] [10LL]))) ? (((/* implicit */long long int) max((arr_8 [(unsigned short)14] [i_4] [i_4] [i_0]), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19584))))) ? (2190433320960LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))))));
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_27 [i_7] = ((/* implicit */unsigned int) var_7);
                            var_28 = ((/* implicit */signed char) (-(340042029)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (short i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    {
                        arr_34 [i_10 - 1] [i_10 - 1] [i_9] [i_10 + 4] = ((/* implicit */signed char) ((int) var_10));
                        arr_35 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17))));
                        arr_36 [i_0] [i_5 + 1] [i_9] [i_10] &= ((/* implicit */int) arr_19 [i_0]);
                    }
                } 
            } 
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned int) arr_24 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 15; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))));
                        arr_45 [i_0] [i_11] [i_12] [i_13 + 3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1475592307)))) ? (arr_28 [i_0] [i_12] [i_11] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(var_16))))));
                        arr_46 [i_12] [i_13] [i_12] [i_13 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                        arr_47 [i_12] [7U] [i_12] [i_12] = ((/* implicit */signed char) var_16);
                    }
                } 
            } 
            arr_48 [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_33 [i_0] [i_0] [i_0] [i_11] [i_11 + 1]));
            arr_49 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) var_6)) : (17U)));
        }
    }
    for (short i_14 = 0; i_14 < 24; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) min(((+(var_2))), (((/* implicit */unsigned int) max(((unsigned short)11967), (((/* implicit */unsigned short) arr_56 [i_14] [i_15] [i_16])))))));
                    var_32 *= ((/* implicit */unsigned int) (short)31792);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_17 = 1; i_17 < 23; i_17 += 3) 
        {
            var_33 = ((((/* implicit */_Bool) (signed char)30)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14686))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max(((unsigned short)9), ((unsigned short)65520))))));
            arr_61 [i_17] [i_14] = ((/* implicit */unsigned int) ((signed char) max((var_4), (((/* implicit */short) arr_60 [i_17 + 1] [i_17 + 1] [i_17 - 1])))));
            arr_62 [i_14] [i_17] [i_17] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_58 [i_17 + 1] [i_17 - 1] [i_17 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)14)))))) : (var_10)));
        }
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (~(var_5))))));
    }
    /* vectorizable */
    for (short i_18 = 0; i_18 < 20; i_18 += 3) 
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_56 [i_18] [i_18] [21U])) : (var_3)));
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((unsigned short) var_14)))));
        var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (short)5103)))))));
    }
}
