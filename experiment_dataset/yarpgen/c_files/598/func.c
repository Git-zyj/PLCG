/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/598
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_5))))));
        arr_5 [i_0] [(short)7] = ((/* implicit */short) var_11);
        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_0]))) >= (((int) ((unsigned int) 14969231506169077774ULL)))));
        arr_6 [i_0] = ((/* implicit */unsigned int) var_9);
        var_18 = ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)188)) & (((/* implicit */int) arr_1 [i_0]))))) - (14969231506169077772ULL))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_19 &= ((/* implicit */_Bool) ((arr_7 [10ULL]) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_1])), (1974257271660598511ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)65))))) : (arr_8 [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [20ULL])))));
        arr_10 [i_1] = ((/* implicit */short) 7677719137287267948LL);
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)53559)) : (((/* implicit */int) arr_9 [i_1 - 1])))) + (((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_21 [i_5] [i_5] [i_5] [i_5] [i_1] [(unsigned short)0] [i_5] = ((/* implicit */long long int) var_11);
                                arr_22 [i_1] [i_1] [i_1] [(unsigned char)13] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)210))) ? (-1796192399) : (((/* implicit */int) arr_17 [i_3] [i_2] [i_3] [i_2] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 2])) && (((/* implicit */_Bool) (-(arr_15 [(short)16]))))))) : ((-(((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) 2133662642);
        var_22 ^= ((/* implicit */unsigned long long int) min((((unsigned short) arr_15 [i_6 - 1])), (((/* implicit */unsigned short) ((7855324116466747702LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))))))));
        var_23 = ((/* implicit */_Bool) ((unsigned long long int) 17023951563191969966ULL));
    }
    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((arr_28 [10LL]) >= (((/* implicit */int) arr_20 [i_7] [i_7] [(short)4] [i_7] [(unsigned short)18])))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (((int) var_10))))) : (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)201)) > (((/* implicit */int) (unsigned char)192)))))))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 3U)))))) ? (((/* implicit */int) ((unsigned short) 0LL))) : ((~(((/* implicit */int) (unsigned char)50)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)180))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1974257271660598489ULL)))))));
            arr_31 [i_7 + 2] [i_7 + 2] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)41939)) * (((/* implicit */int) var_12)))) & (((/* implicit */int) (unsigned char)64))));
        }
        for (int i_9 = 3; i_9 < 18; i_9 += 3) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1802359015)))))) >= (var_4))))) & (((unsigned int) var_14)))))));
            arr_35 [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) (unsigned char)16);
        }
        /* LoopSeq 1 */
        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 2) 
        {
            arr_38 [i_7] [i_10] = ((/* implicit */unsigned short) (unsigned char)45);
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 349845166)) ? (((/* implicit */int) (short)-3867)) : (((/* implicit */int) (unsigned char)205))));
        }
    }
    var_29 = ((/* implicit */unsigned short) ((long long int) var_12));
}
