/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67561
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
    var_13 = (signed char)15;
    var_14 = ((/* implicit */long long int) var_12);
    var_15 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */short) ((unsigned char) min((((/* implicit */signed char) var_11)), (var_3)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [(unsigned short)13]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((long long int) 261996225)) | (((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) arr_2 [i_0]))), (((arr_2 [i_0]) - (arr_2 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))))) | (arr_1 [i_0] [i_0])))) | (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)15])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((arr_7 [i_2]) ^ (arr_7 [i_2]))))))));
            var_18 = ((/* implicit */short) max((10397956554389566525ULL), (((/* implicit */unsigned long long int) arr_7 [i_1]))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_2]);
        }
        var_19 = ((/* implicit */signed char) arr_8 [i_1] [i_1] [18ULL]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((short) ((4139028387U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-451)))))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_16 [i_1] [i_4] [i_4] |= arr_15 [i_4];
                arr_17 [(unsigned char)6] [i_4] [i_4] |= arr_6 [(short)14];
                arr_18 [i_1] [i_3] [i_1] [i_4] = ((/* implicit */long long int) (~(arr_11 [i_1])));
                var_21 -= ((((/* implicit */_Bool) ((-344005243) & (((/* implicit */int) (unsigned char)177))))) ? (((((/* implicit */_Bool) arr_12 [14U] [14U])) ? (((/* implicit */int) arr_8 [i_4] [i_3] [i_4])) : (((/* implicit */int) (signed char)104)))) : (((/* implicit */int) arr_12 [i_3] [i_4])));
                var_22 = ((/* implicit */short) ((874151330U) ^ (((/* implicit */unsigned int) arr_9 [i_4]))));
            }
            for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                var_23 = ((/* implicit */short) (-(arr_14 [i_5 - 3] [i_5 - 1] [i_1] [i_5])));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_8 [(signed char)12] [i_3] [(unsigned short)12]))));
                arr_21 [i_1] [(unsigned short)18] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) arr_9 [7LL])) & (arr_13 [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5 + 2] [i_5 + 2] [i_5 - 3])))));
            }
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_3])) ^ (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_9 [i_3]) : (arr_7 [i_1])))));
            arr_22 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_3]))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 3; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    arr_28 [(unsigned char)10] [i_7] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_19 [(unsigned short)13] [i_3] [2] [21LL])) ? (((/* implicit */long long int) arr_15 [6LL])) : (-1750679518100200862LL))));
                    var_26 ^= ((/* implicit */unsigned short) -980320568);
                    arr_29 [i_1] [i_1] [i_3] [i_1] [(unsigned short)8] [(unsigned short)8] = 660372366756096602LL;
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((signed char) 2139095040U));
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_1] [i_7] [i_8]))));
                    }
                    for (unsigned int i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        var_29 -= ((/* implicit */_Bool) arr_26 [i_7] [11LL]);
                        arr_36 [i_1] [19ULL] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_32 [i_1] [i_3] [19] [i_7] [i_9] [i_3] [i_9])))) ? (((/* implicit */int) (unsigned short)55804)) : (((/* implicit */int) (short)15379))));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_27 [i_3] [i_10]))));
                    arr_40 [i_1] [i_3] [i_6] [21U] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_27 [i_3] [i_6]))))));
                    var_31 = ((/* implicit */unsigned short) ((long long int) ((-2065346312348169402LL) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_6 - 3] [i_1]))))));
                    arr_41 [i_1] = ((/* implicit */_Bool) arr_9 [i_10]);
                }
                arr_42 [9U] [2ULL] [i_1] [9U] = ((/* implicit */long long int) arr_26 [i_1] [i_3]);
            }
            for (long long int i_11 = 3; i_11 < 19; i_11 += 2) 
            {
                arr_46 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_11 + 3] [i_11 + 3] [i_1] [i_11])) ? (((/* implicit */int) arr_8 [i_1] [(unsigned short)11] [i_11])) : (((/* implicit */int) arr_19 [i_11 + 2] [i_11 + 3] [i_11] [i_11 - 3]))));
                arr_47 [i_1] [i_1] [6] = ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_1]));
            }
        }
    }
}
