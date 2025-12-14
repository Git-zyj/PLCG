/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70046
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
    var_10 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */unsigned long long int) 3374746824U)) : (11578314531933459517ULL))));
                    var_12 = arr_2 [i_2 + 2] [i_2 - 2];
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_2 + 2]);
                        var_13 *= arr_3 [i_2 - 1];
                        var_14 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_1] [18ULL] [i_0]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_1] = ((/* implicit */short) arr_11 [i_4]);
                        var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))));
                        var_16 = ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) arr_12 [i_5] [i_1] [i_1] [i_0])))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 920220472U)))) + ((+(arr_11 [i_0])))));
                        arr_16 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 - 1] [i_1] = ((/* implicit */_Bool) 3374746829U);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_6 + 1] [i_2 + 2] [i_2 + 2]);
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_12 [i_0] [(short)17] [i_2 - 1] [i_6]))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((arr_17 [6ULL] [6ULL] [i_2 + 1] [i_6 - 1] [i_2 + 1]) ? (((/* implicit */int) arr_17 [i_0] [i_6 - 1] [i_2 - 1] [i_6 + 1] [i_0])) : (((/* implicit */int) arr_17 [17ULL] [i_5] [i_2 - 1] [i_6 - 2] [i_6])))))));
                        }
                    }
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 2] [(_Bool)1] [i_2 - 1] [i_2 - 1])) ? (arr_9 [i_2 + 1] [i_2] [i_2 + 1]) : (((4035225266123964416ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58984)))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_19 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)54061);
    }
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) arr_23 [i_7]);
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
        arr_24 [i_7] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3374746824U)) && (((/* implicit */_Bool) -1707217591029003966LL))));
        var_26 = ((((/* implicit */_Bool) max((arr_21 [i_7]), (((/* implicit */unsigned int) var_1))))) || (((((/* implicit */_Bool) arr_21 [i_7])) || (((/* implicit */_Bool) arr_23 [i_7])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
    {
        var_27 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [i_8] [i_8])), (3374746824U)));
        arr_28 [i_8] = ((/* implicit */unsigned long long int) ((arr_21 [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    }
    var_28 -= ((/* implicit */unsigned int) var_9);
    var_29 = ((/* implicit */unsigned short) var_2);
}
