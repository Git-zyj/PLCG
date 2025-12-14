/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68534
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
    var_14 &= ((/* implicit */short) ((((((/* implicit */int) var_9)) != (((/* implicit */int) max((((/* implicit */short) var_3)), (var_11)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32766)) & (((/* implicit */int) (unsigned short)55979))));
    var_16 = ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)21)))) - (((arr_1 [i_0] [i_0]) + (((/* implicit */int) (short)-13110))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) (-(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (arr_1 [(unsigned short)21] [i_1]) : (((/* implicit */int) arr_3 [i_1] [i_0]))));
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) & (arr_4 [i_1] [i_4])))));
                        var_21 ^= ((/* implicit */long long int) max(((unsigned char)47), ((unsigned char)209)));
                        arr_14 [i_0] [1ULL] [i_2 - 2] [1ULL] [i_2 - 2] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_3] = ((/* implicit */signed char) arr_1 [i_1 + 1] [i_1 + 1]);
                    }
                    var_22 = var_1;
                }
                arr_16 [i_0] [i_1 - 1] [8] = ((/* implicit */short) var_10);
                var_23 = (((-(((/* implicit */int) (signed char)69)))) + (min((((((/* implicit */_Bool) 3174000775U)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_7)))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((3174000775U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)8744)))));
                    arr_19 [i_5] [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
                    arr_20 [i_5] = var_0;
                    arr_21 [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_12)) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) != (3643457978U))))));
                }
                for (short i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    arr_24 [(_Bool)1] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
                    var_25 -= ((signed char) 7629729598503616364LL);
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_27 [i_7] [10] [i_2 - 1] [i_2] [(signed char)4] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29076)) ? (((/* implicit */int) ((((/* implicit */int) (short)-1180)) < (((/* implicit */int) arr_17 [(short)15] [i_1 - 1] [20ULL] [20ULL] [i_7]))))) : (((/* implicit */int) (short)-9668))))), (((131071LL) | (min((((/* implicit */long long int) 197867818U)), (-131072LL)))))));
                    var_26 &= ((/* implicit */unsigned long long int) (~(((281440616972288LL) << (((2426060214U) - (2426060207U)))))));
                    arr_28 [(signed char)8] [(signed char)8] [i_7] = min((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (134217728U))), (((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_2 + 1])));
                }
            }
        }
        var_27 = ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (4246042826U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) - (4246042820U)))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        var_28 -= ((/* implicit */unsigned int) var_2);
        /* LoopSeq 2 */
        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 1) /* same iter space */
        {
            arr_33 [i_9] [i_9] = 1868907082U;
            var_29 = ((/* implicit */long long int) (-(var_8)));
        }
        for (unsigned char i_10 = 1; i_10 < 16; i_10 += 1) /* same iter space */
        {
            arr_38 [i_10] = ((/* implicit */unsigned int) 1073741823);
            var_30 = ((/* implicit */short) ((unsigned long long int) (unsigned short)33298));
        }
    }
}
