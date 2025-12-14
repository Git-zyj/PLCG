/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89746
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((short) arr_4 [i_0 - 1]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14108282))));
                                arr_15 [i_0] [i_0] [i_1] [4U] [(unsigned short)5] [4U] [(short)7] = ((/* implicit */_Bool) var_10);
                                arr_16 [i_0 - 3] [i_0 - 3] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) arr_3 [i_3] [i_3] [i_3]);
                                arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) 14108282));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_2 + 2] [i_0 - 1] [(unsigned char)8]);
                }
            } 
        } 
        arr_19 [i_0] [(short)8] = ((/* implicit */int) ((short) ((((/* implicit */int) (short)-17351)) != (((/* implicit */int) (_Bool)1)))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_21 [i_5]), (((/* implicit */unsigned short) arr_20 [i_5])))))));
        arr_25 [i_5] = (+(((/* implicit */int) var_9)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        arr_29 [12] [i_6] = max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)60732));
        arr_30 [0] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) (unsigned short)24643)) ? (arr_22 [i_6] [i_6]) : (((/* implicit */int) var_4)))))), (((/* implicit */int) arr_21 [i_6]))));
        arr_31 [4U] = ((/* implicit */unsigned short) max((((((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_27 [i_6])))))), (((arr_26 [i_6]) >> (((arr_26 [i_6]) - (13371257737354146196ULL)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 4; i_7 < 14; i_7 += 4) 
    {
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                {
                    arr_40 [i_7] [i_8 + 3] [i_8] [(unsigned char)8] = ((/* implicit */unsigned int) var_12);
                    arr_41 [12ULL] [i_7] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                    arr_42 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_39 [i_7] [i_7] [i_7 + 2]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)11674)))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-11674)))) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_8))))))));
}
