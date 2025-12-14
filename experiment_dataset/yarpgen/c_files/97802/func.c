/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97802
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
    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_12))))));
    var_18 = ((/* implicit */unsigned char) ((int) (short)-32751));
    var_19 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)247))))));
    var_20 = ((/* implicit */short) -331606617);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((((-331606617) + (2147483647))) >> ((((-(((/* implicit */int) var_2)))) - (19))));
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] |= ((/* implicit */signed char) max((max((-331606620), (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1])))), (((((/* implicit */_Bool) arr_8 [i_2 + 3] [i_2 - 1])) ? (((/* implicit */int) (short)-19391)) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 1]))))));
                                arr_14 [i_4] [i_3] [i_0] [(short)12] [i_1] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_1] [7] [i_4]);
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(short)0] [i_1] [i_1])) ? (1577438919) : (((/* implicit */int) arr_11 [i_1] [10LL] [i_2 + 1] [(short)2] [i_2]))))) : (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_12 [20] [i_0] [i_2] [20] [i_1] [i_2] [i_1]))), ((!(((/* implicit */_Bool) var_9)))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_12 [i_0] [i_1] [(short)7] [i_2 + 3] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned int) (-(-331606617)))) : (((((/* implicit */_Bool) 6857267256683962809ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (arr_6 [i_1] [i_1] [i_2]))))))));
                    var_23 = (~(((/* implicit */int) (!(((/* implicit */_Bool) -820487390156913359LL))))));
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [12LL] [12LL] [i_5 - 2] [i_5])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [8]))));
                    arr_19 [i_5 + 1] = ((/* implicit */unsigned short) (+(((var_0) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (long long int i_6 = 2; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((8272206555431875718LL) == (((/* implicit */long long int) var_0)))) ? (((/* implicit */int) (short)-32751)) : (((((((/* implicit */int) (short)-32751)) + (2147483647))) << (((((/* implicit */int) var_1)) - (8235)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (331606614) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_6]))))) ? ((+(((/* implicit */int) arr_20 [i_0] [i_1] [i_6])))) : (((((/* implicit */int) arr_1 [i_6 + 1])) >> (((((/* implicit */int) (short)-26729)) + (26731)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)3755)) : (((/* implicit */int) (unsigned short)39010))))), (arr_16 [i_0] [i_1] [i_6 + 1] [i_6 + 1])))));
                    var_26 = ((/* implicit */int) max((arr_6 [i_0] [i_6 + 1] [i_6 - 1]), (((/* implicit */unsigned int) var_13))));
                }
                for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_27 = (~((-(((/* implicit */int) (short)4284)))));
                    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_7])) ? (var_0) : (arr_0 [i_7] [i_1]))), ((+((-2147483647 - 1))))));
                    arr_25 [i_7] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_24 [i_0] [(unsigned char)10] [i_7] [14]))))));
                    arr_26 [i_7] [(short)6] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)157);
                }
                arr_27 [(short)15] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) <= (((((/* implicit */int) (unsigned char)189)) + (var_5)))));
            }
        } 
    } 
}
