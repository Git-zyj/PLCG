/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86610
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
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_0])))) << (((max(((+(((/* implicit */int) (unsigned short)2289)))), (((/* implicit */int) arr_0 [i_0 + 1])))) - (2272)))));
        var_20 = ((/* implicit */unsigned int) (signed char)105);
    }
    for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (var_14)))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) arr_0 [i_1 + 1]))))))) : ((+(arr_1 [20LL]))));
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2310)) ? (((/* implicit */int) (unsigned short)2261)) : (1835383861)))) ? ((-(((/* implicit */int) (unsigned short)48999)))) : ((-(((/* implicit */int) arr_0 [i_1]))))))) + ((~(6361638139739524650LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_2]))))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) 174757851)) : (arr_8 [20LL] [20LL] [22U] [i_5]))) : (arr_8 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1])));
                            arr_14 [i_3] [i_1] [i_1] [i_3 + 3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((arr_1 [i_1 - 2]) + (9223372036854775807LL))) >> (((arr_13 [i_1] [i_1] [i_1 + 1] [i_3 - 2] [i_3 + 3] [i_3 - 1] [i_5]) - (4249380454321169279LL)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (unsigned char i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_22 [i_7] [i_7] [i_6] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_1])))))));
                            var_24 = ((/* implicit */signed char) ((arr_18 [i_1 + 1] [i_7 - 1]) ? (((/* implicit */int) arr_18 [i_1 - 2] [i_7 + 1])) : (var_8)));
                            var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [i_1 + 1] [i_7 + 1]))) != (arr_21 [i_1] [i_1 + 1] [i_6] [i_7] [i_7 + 1])));
                            arr_23 [i_7] [i_2] [i_2] [i_2] [(short)2] [i_8] [i_8] = ((/* implicit */signed char) arr_4 [i_8] [i_1]);
                            var_26 ^= ((/* implicit */unsigned long long int) (~(arr_12 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_7 + 1])));
                        }
                    } 
                } 
            } 
            arr_24 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 + 1] [(short)12])) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 3] [(unsigned char)6])) : (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 3] [(unsigned short)12]))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        arr_32 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10 + 1]))) == (arr_1 [i_9])));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) 207069205U))));
                            arr_35 [i_1] [i_9] [i_10] [i_10] [(unsigned char)18] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)26))));
                        }
                        for (short i_13 = 4; i_13 < 22; i_13 += 4) 
                        {
                            var_28 &= ((/* implicit */signed char) (-(arr_34 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_13])));
                            var_29 = (+((~(((/* implicit */int) (unsigned char)0)))));
                            var_30 = ((/* implicit */int) (signed char)-96);
                        }
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_40 [i_1] [i_9] [(unsigned short)22] [i_11] = ((/* implicit */_Bool) ((arr_25 [i_1 + 1]) ? (((/* implicit */int) arr_20 [i_9] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_20 [i_9] [i_10 + 1] [i_10 + 1]))));
                            arr_41 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_9] = ((/* implicit */long long int) ((arr_36 [i_1] [19U] [(unsigned short)8] [i_1 - 1] [19U] [i_1] [i_10 + 1]) > (arr_36 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1] [i_9] [i_10 + 1])));
                            arr_42 [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (arr_10 [i_1 - 1] [i_9] [i_9])));
                        }
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((arr_1 [i_1 - 1]) >= ((~(arr_38 [i_1] [i_10]))))))));
                        var_32 = ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_26 [i_9])) : (((/* implicit */int) arr_7 [i_9])))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [13U])) && (((/* implicit */_Bool) arr_9 [i_1] [i_9]))))));
                    }
                } 
            } 
            arr_43 [i_1] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_1 - 1] [i_9] [i_1 - 1] [i_1 - 1] [i_1 - 3]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_3 [i_1 - 1] [i_1 - 3]), (arr_3 [i_1 - 2] [i_1 - 3])))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1436243800265759347LL))))), (arr_38 [i_1 + 1] [i_1 - 2]))))))));
                    arr_50 [i_1] [(unsigned short)10] [i_15] [12LL] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((/* implicit */unsigned int) -1830233684)) : (arr_31 [i_1] [(_Bool)1] [i_15] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)223))))))))));
                    arr_51 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((max((((/* implicit */long long int) -1835383836)), (arr_13 [i_16] [i_15] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]))) >> (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                    arr_52 [i_16] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1]))) & (arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 3] [i_16] [i_16]))))));
                }
            } 
        } 
    }
    var_34 += ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_19))))));
    var_35 += ((/* implicit */short) min((((max((((/* implicit */unsigned long long int) var_19)), (var_2))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)32))))))), (((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) (_Bool)1))))) || (((/* implicit */_Bool) ((var_18) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
    var_36 = ((/* implicit */unsigned char) var_11);
}
