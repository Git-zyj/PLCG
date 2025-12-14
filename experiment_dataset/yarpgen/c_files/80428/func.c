/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80428
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
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((unsigned long long int) -163323408));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */int) (short)20374)), (-163323405)))) ? (max((-163323397), (((/* implicit */int) arr_0 [i_0] [i_0])))) : (-163323410)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                arr_10 [i_1] [18] [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)130)) <= (((/* implicit */int) (unsigned char)13)))) ? (((/* implicit */unsigned long long int) 163323390)) : (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1])));
                arr_11 [i_3] = ((/* implicit */int) var_1);
            }
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_15 [(short)0] [19] [(short)0] [19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_1])))) : ((-(((/* implicit */int) arr_14 [i_4] [i_2] [i_1]))))));
                arr_16 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((int) var_5));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        arr_23 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_16) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70)))))) : (((((/* implicit */_Bool) -163323408)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        arr_24 [8U] [8U] [i_5] [i_2] [i_1] = ((/* implicit */_Bool) (+(arr_19 [i_2 - 3] [i_2 - 2] [i_2 - 1])));
                        arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) -163323413)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)227)))) == (((/* implicit */int) var_11))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_19 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 163323413))))) ? (max((((/* implicit */unsigned long long int) arr_18 [(unsigned char)0] [i_1] [14ULL])), (arr_19 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_18 [i_1] [18ULL] [i_1]))))))));
        var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23596)) << (((arr_8 [i_1]) - (6271172145270153423ULL)))))) ? (((/* implicit */unsigned long long int) -163323413)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12278255311321745004ULL))))))));
    }
    var_22 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
}
