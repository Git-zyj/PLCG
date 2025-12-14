/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68848
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
    var_20 = min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_8)));
    var_21 &= ((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (786432U)))), (((/* implicit */unsigned long long int) (short)32256))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 -= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) | (arr_2 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (957260887) : (((/* implicit */int) (short)0)))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~((~(((/* implicit */int) (short)-32257)))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_2 [(short)6])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_25 &= ((/* implicit */signed char) (short)32754);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)50746))) ? (3174391984267039325ULL) : (((arr_2 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) max((((/* implicit */short) ((signed char) arr_0 [i_0] [9]))), ((short)32256)))) : (((((/* implicit */_Bool) (signed char)-125)) ? (max((arr_4 [i_0]), (957260887))) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_1])))))));
            var_27 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) != (-3228680630370507381LL))))))), ((+(arr_2 [i_0 - 1])))));
            var_28 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) / (arr_0 [i_0 - 1] [i_0 - 1]))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */int) arr_2 [i_0 - 1]);
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 3]) ^ (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 3]))))));
                    arr_14 [i_0] [i_0 - 1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0]);
                    arr_15 [(signed char)3] [3ULL] [i_3] [i_3 + 3] [(signed char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((~(arr_9 [i_0]))) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                    var_31 += arr_7 [i_0];
                }
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) (short)-32285);
                            var_33 = ((/* implicit */unsigned short) ((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 3]) > (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 - 4] [i_3 - 4])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_7] [i_2] [i_0] = ((/* implicit */signed char) ((arr_17 [i_0 - 1] [i_3] [i_3 - 2] [i_7 - 1]) > (arr_17 [i_0 - 1] [i_2] [i_3 - 3] [i_7 + 1])));
                            var_34 = var_8;
                        }
                    } 
                } 
            }
        }
        for (signed char i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    {
                        var_35 *= ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_10 - 2] [i_10]))));
                        var_36 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)32754)) != (((/* implicit */int) (_Bool)1)))));
                        var_37 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32258))));
                    }
                } 
            } 
            var_38 *= ((/* implicit */unsigned int) arr_32 [i_0] [i_9] [i_0] [i_9]);
            var_39 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)5829)) ? (((/* implicit */int) (short)32256)) : (arr_31 [(signed char)6] [(signed char)7]))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((((/* implicit */unsigned long long int) (unsigned char)103)), (min((((/* implicit */unsigned long long int) (short)-21)), (3174391984267039325ULL)))))));
        }
    }
}
