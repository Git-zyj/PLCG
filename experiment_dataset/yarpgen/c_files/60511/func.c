/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60511
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) (!(((/* implicit */_Bool) 2441777951U))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [2]) : (arr_1 [(short)2])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((var_6) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (var_9) : (((/* implicit */int) arr_8 [i_2 - 1] [i_1] [i_1] [i_3] [i_1] [i_0]))))) : (min((arr_1 [i_2]), (((/* implicit */long long int) 15U)))))) - (((/* implicit */long long int) 0U)))))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_3)) - (arr_0 [i_0]))) == ((+(((/* implicit */int) arr_2 [i_1]))))))) == (((/* implicit */int) ((short) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]))))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_10 [i_0] [12LL] [i_1] [i_2] [i_3]))));
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((arr_5 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) 973728414)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) % (max((((/* implicit */long long int) arr_13 [i_4])), (((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_14 [i_4]) : (8549136665584393347LL)))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_22 [(short)19] [i_6] [i_5 + 1] [i_5 - 1] [i_4] = ((/* implicit */long long int) arr_12 [i_4]);
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7] [i_6] [i_7] [i_6]))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 + 1]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
        {
            arr_25 [i_8] [i_4] = ((/* implicit */short) (~((+(((/* implicit */int) arr_17 [(short)8] [i_8] [(unsigned char)12]))))));
            var_21 ^= ((((/* implicit */int) arr_15 [i_8 + 2] [i_8 - 1])) * ((~(((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_4])))));
        }
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) (+(((((min((var_1), (((/* implicit */long long int) arr_16 [i_9] [i_9] [i_9])))) + (9223372036854775807LL))) << (((((/* implicit */int) ((signed char) (signed char)31))) - (30)))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) arr_21 [i_12 + 1] [i_11] [i_10] [(signed char)5] [i_10 - 1] [i_9]);
                        var_24 = ((/* implicit */_Bool) ((min((max((((/* implicit */unsigned long long int) arr_29 [i_9] [i_10] [i_12])), (13805347104302603189ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_11])) : (arr_34 [i_12])))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9 - 1] [i_10] [i_10] [i_11] [12] [i_12]))) : (arr_14 [i_10]))) + (8549136665584393347LL))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_13] [i_13]))) - (2913908738U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_14])))))) : (((((/* implicit */_Bool) arr_7 [i_9] [i_10 + 1])) ? (var_2) : (((/* implicit */long long int) arr_0 [i_13]))))))));
                        arr_41 [i_14] [i_14] [i_14 - 1] [(_Bool)1] [i_9] [i_9] = ((/* implicit */short) ((((arr_0 [i_9 - 1]) | (((/* implicit */int) arr_12 [i_9 - 1])))) / (max((((/* implicit */int) arr_12 [i_9 - 1])), (arr_0 [i_9 - 1])))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (long long int i_15 = 1; i_15 < 13; i_15 += 2) 
        {
            for (signed char i_16 = 3; i_16 < 12; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    {
                        arr_51 [i_15 - 1] &= ((/* implicit */int) arr_36 [i_9] [i_15] [i_15]);
                        var_26 = ((/* implicit */long long int) arr_26 [i_9]);
                        var_27 += ((/* implicit */int) var_2);
                        var_28 *= ((/* implicit */unsigned long long int) arr_42 [i_9 - 1] [i_17]);
                    }
                } 
            } 
        } 
        arr_52 [i_9] [i_9] = ((/* implicit */int) min(((+(((arr_40 [i_9] [i_9] [i_9] [i_9 - 1]) % (((/* implicit */unsigned int) arr_19 [i_9] [i_9] [i_9])))))), (((/* implicit */unsigned int) arr_8 [i_9 - 1] [i_9] [i_9] [(short)3] [i_9 - 1] [i_9]))));
        arr_53 [i_9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((arr_46 [i_9 - 1]) ? (((/* implicit */int) arr_16 [i_9] [7U] [i_9])) : (((/* implicit */int) var_13))))) == ((~(arr_5 [i_9]))))));
        arr_54 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9 - 1]))) | (((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_9 - 1])))))))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) | ((~(((/* implicit */int) var_3))))))) : (arr_30 [i_9 - 1])));
    }
    var_29 = ((/* implicit */short) var_8);
}
