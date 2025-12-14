/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79031
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
    var_15 = ((/* implicit */short) (-(-2107825754)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */int) (short)32125)), (2076785483)));
                arr_6 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (1760106965U) : (((/* implicit */unsigned int) arr_2 [i_0 - 2])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    arr_17 [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : ((-(2076785483))));
                    arr_18 [i_2] [i_3 - 1] [i_4] [i_3] = ((/* implicit */short) arr_13 [i_4] [i_4] [i_4]);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) arr_20 [i_3] [i_3 + 2]);
                        var_17 = ((((/* implicit */_Bool) (short)-32125)) ? (arr_14 [i_3]) : (((/* implicit */unsigned int) -2076785483)));
                        arr_21 [i_3] = ((/* implicit */int) (short)32125);
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2076785483))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    arr_24 [i_3] [i_3 + 2] [i_3] = ((((/* implicit */_Bool) arr_2 [i_2])) ? (3991726327U) : (((/* implicit */unsigned int) arr_19 [i_3] [i_6] [i_3] [i_3 + 2] [i_3 + 2])));
                    arr_25 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((((/* implicit */_Bool) var_2)) ? (arr_23 [i_3]) : (((/* implicit */unsigned int) -2076785484)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)8192)) >> (((((/* implicit */int) arr_1 [10] [10])) + (7447))))))));
                    var_19 -= ((/* implicit */unsigned int) arr_11 [i_2] [i_3]);
                    arr_26 [i_2] [i_2] [i_6] [i_6] |= ((/* implicit */unsigned int) (-((-(-121925466)))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_7] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7))))) < ((-(((/* implicit */int) arr_16 [i_2] [i_3] [i_7] [i_3]))))));
                    arr_30 [i_2] [4] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_3 - 1] [i_2])) ? (arr_23 [i_2]) : (arr_13 [i_2] [i_3] [(short)0])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_3])) ^ (arr_19 [i_2] [i_7] [i_2] [i_7] [i_3]))))));
                    arr_31 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_3]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((arr_2 [i_2]) == (((/* implicit */int) (short)-32752)))))));
                    arr_32 [i_2] [i_2] [i_3] = ((/* implicit */short) arr_28 [i_3] [i_3 - 1] [i_3 + 1] [i_3]);
                    arr_33 [i_3] [i_3] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2057342217)) ? (((((/* implicit */_Bool) 1902005210)) ? (var_2) : (var_13))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_7])) >= (0))))));
                }
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                {
                    arr_36 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) max(((-(2076785483))), (2076785504)))), ((+(((unsigned int) var_2))))));
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) min((arr_28 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2]), (arr_28 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 2])))), (((((/* implicit */_Bool) -2113543092)) ? (((/* implicit */unsigned int) var_2)) : (arr_23 [i_2])))));
                    var_21 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) arr_28 [8] [i_3 + 2] [i_3 + 1] [i_3 - 1])), (var_4)))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        arr_41 [i_2] &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)1713)) <= (arr_39 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                        var_22 ^= ((/* implicit */short) min(((-(((/* implicit */int) arr_35 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 2])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 1]))))));
                        var_23 = ((/* implicit */unsigned int) min((min((((/* implicit */int) (short)30720)), (-121925466))), ((-(((/* implicit */int) arr_38 [i_2] [i_3 - 1] [i_8] [i_9]))))));
                        arr_42 [10] [i_3] [i_8] [i_3] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned int) max(((+(-121925466))), (((int) var_10))))), (min((4212483193U), ((-(var_4)))))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    var_24 *= ((/* implicit */unsigned int) (-2147483647 - 1));
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_25 ^= ((/* implicit */int) ((unsigned int) ((int) arr_43 [i_11] [i_2] [i_3 - 1] [i_2])));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1]))))) ? ((-(((/* implicit */int) arr_38 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1])))) : (min((-2076785483), (((/* implicit */int) (short)20319))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        arr_50 [i_2] [i_3] = ((int) ((short) (-(-1))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_2])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32125)) ? (arr_45 [i_12] [i_10] [i_3] [i_2]) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */unsigned int) 2076785482)) <= (arr_4 [6U])))))))));
                    }
                    for (int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        var_28 *= max((((/* implicit */unsigned int) (-(2076785482)))), (min((4294967295U), (((/* implicit */unsigned int) -285594524)))));
                        arr_54 [i_2] [i_2] [i_10] [i_13] [i_13] [i_13] |= ((/* implicit */int) min(((+(0U))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10)))))))));
                    }
                }
            }
        } 
    } 
}
