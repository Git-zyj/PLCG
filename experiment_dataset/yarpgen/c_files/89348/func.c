/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89348
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) -7971891160753121171LL);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0]))));
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_8) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) 6594618934821500872ULL))))) : (((/* implicit */int) (short)-16672))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (0LL)))) : ((-(arr_5 [i_1])))));
            }
            for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) 
            {
                arr_14 [i_0] = ((/* implicit */int) ((unsigned char) 0LL));
                var_19 = ((/* implicit */int) (short)-2048);
                var_20 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) < (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_3 + 3])));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 691077172U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)249))))))));
            }
            var_22 = ((/* implicit */unsigned char) 288230376151711744LL);
            var_23 = ((/* implicit */int) (-(((var_9) / (((/* implicit */long long int) var_8))))));
            arr_15 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) & (arr_10 [i_0 - 1] [i_1])))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned short) (unsigned char)120);
            var_24 = ((/* implicit */unsigned short) 0);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) -1LL)) : (10534890060064322689ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_5 [7LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_0] [i_0]))));
                        arr_28 [i_6] [9ULL] [i_6] [i_0] [7] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_7))))) << (((((var_5) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_5] [i_5] [i_5])) : (72057594037927935ULL))) - (3136778346ULL)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_7))))) << (((((((var_5) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_5] [i_5] [i_5])) : (72057594037927935ULL))) - (3136778346ULL))) - (518060201ULL))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_14))));
                    }
                    arr_29 [i_5] [i_5] &= arr_27 [i_0] [i_5] [i_0] [i_6] [i_5];
                    var_27 = ((/* implicit */long long int) arr_8 [i_0] [i_5] [i_5] [i_6]);
                    arr_30 [i_5] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0 + 1] [i_0 - 1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))));
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 13126969150392701587ULL)) ? (137167548U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */_Bool) arr_38 [i_8]);
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8 + 1]))) | (arr_36 [i_8 + 3] [i_8 + 3])));
        }
        for (long long int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            arr_42 [i_8] [13LL] [i_10] = ((/* implicit */short) arr_41 [(_Bool)1]);
            arr_43 [i_8] [(short)16] [i_8 - 1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_37 [18ULL] [i_10]))))));
            arr_44 [i_8 + 3] [i_10] [i_8 + 3] = ((/* implicit */long long int) (!(var_5)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            var_30 += ((/* implicit */short) ((((arr_34 [i_8 - 1]) + (9223372036854775807LL))) << (((((var_11) + (1131359866))) - (55)))));
            arr_48 [i_8] [i_8] [i_8] = ((/* implicit */int) 18446744073709551601ULL);
            arr_49 [i_8 + 1] [i_8] [19] = ((/* implicit */short) (-(((/* implicit */int) arr_35 [i_8 - 1] [i_8 - 1]))));
        }
    }
}
