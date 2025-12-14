/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66782
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305825417027649536LL)) ? (4611685743549480960LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? ((-(arr_1 [i_0]))) : (((arr_1 [i_0]) / (2305825417027649536LL))))) + (9223372036854775807LL))) << (((2305825417027649518LL) - (2305825417027649518LL))))))));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) max(((~(arr_4 [i_1] [8ULL]))), (arr_4 [i_1] [i_1])));
        /* LoopSeq 3 */
        for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (unsigned short)909)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)57615))))))) << ((((((+((-9223372036854775807LL - 1LL)))) - (-9223372036854775790LL))) + (28LL)))));
            var_20 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((arr_11 [i_3] [i_1]) || (((/* implicit */_Bool) arr_4 [i_3] [i_3 - 2]))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)6] [4LL]))) : (arr_13 [i_1] [i_3] [i_3 - 2]))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) /* same iter space */
        {
            arr_18 [i_1] [i_1] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_12 [i_1])))))) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [(unsigned char)4] [i_4])) == (((/* implicit */int) arr_0 [i_1]))))))) : ((~((~(((/* implicit */int) arr_17 [i_1] [2]))))))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_4 + 1])) & (((/* implicit */int) var_16))));
                    var_24 *= ((/* implicit */unsigned short) arr_16 [i_4 - 1] [i_5 + 1] [i_6]);
                    var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [3ULL] [i_1]))));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 7; i_7 += 2) 
                {
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */long long int) (-2147483647 - 1))) : (2305825417027649536LL))), (((/* implicit */long long int) 122946203U)))))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_20 [i_1]))));
                        }
                    } 
                } 
                arr_29 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_4 + 1] [i_5 + 1]))))) ? (min((((/* implicit */unsigned long long int) (signed char)-56)), (arr_24 [i_4 + 1] [i_4 + 1] [i_5 + 1] [i_5 + 1]))) : (((/* implicit */unsigned long long int) max((arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_5 + 1])))))));
                arr_30 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned long long int) -2305825417027649549LL)) | (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [6LL] [i_4 - 2] [i_4 - 2] [i_4 - 2]))));
            }
            var_28 = ((/* implicit */unsigned int) (-(arr_13 [i_1] [i_1] [i_1])));
        }
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) ((8026580312713796685LL) | (-2305825417027649527LL)))))));
        /* LoopNest 3 */
        for (long long int i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            for (long long int i_10 = 1; i_10 < 8; i_10 += 3) 
            {
                for (unsigned short i_11 = 3; i_11 < 8; i_11 += 4) 
                {
                    {
                        arr_40 [(short)6] |= ((/* implicit */long long int) ((arr_25 [6LL] [i_9] [i_10] [i_11]) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_15))) | (((/* implicit */int) arr_25 [8U] [i_10] [i_10] [i_10]))))) : (max((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (arr_16 [(_Bool)1] [i_9] [(unsigned char)4])))), (((unsigned int) (signed char)98))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 8883894369912641785LL))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (arr_23 [i_1] [i_9] [i_10] [i_11 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305825417027649536LL)) ? (((/* implicit */long long int) 8386560U)) : (var_1)))))) : (((/* implicit */unsigned long long int) (+(arr_6 [i_9 - 3]))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((((((/* implicit */long long int) (+(2158144311U)))) + ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) << (((((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29048))) * (3533938589U)))) - (165208424))))))));
                    }
                } 
            } 
        } 
        var_32 = (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
    }
    /* LoopSeq 1 */
    for (long long int i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (short)1))));
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) arr_42 [7])))) > (((/* implicit */int) arr_42 [i_12]))))) >= (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)65535)))) == (((/* implicit */int) arr_42 [(_Bool)1]))))))))));
    }
}
