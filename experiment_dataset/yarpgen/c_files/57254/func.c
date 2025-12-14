/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57254
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)39508)) : (arr_6 [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [(short)12] [i_0] [i_4] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56986))))) == (((/* implicit */int) (!(var_5))))));
                                arr_16 [i_1] [i_4] = ((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [(unsigned short)1] [(signed char)8]);
                                arr_17 [(short)1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) max(((~((~(886979601018793525LL))))), (((/* implicit */long long int) var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_28 [i_7] [i_7] [i_7 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            arr_29 [i_7] [i_7] = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            arr_36 [i_5] [i_6] [i_6] [i_10] [10LL] = ((/* implicit */long long int) arr_31 [i_5]);
                            arr_37 [i_5] [i_6] [i_5] [i_10] = ((/* implicit */unsigned short) ((int) var_10));
                            arr_38 [i_5] [i_6] [(_Bool)1] [i_10] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14485))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        {
                            arr_44 [i_11] [i_12] [i_12] [i_12] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_9))));
                            arr_45 [i_11] [i_11] [i_6] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-21209)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_26 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_12 + 2] [i_11 - 1] [i_12]))));
                            arr_46 [i_11] [i_5] [i_6] [i_6] [i_6] [0] = ((/* implicit */_Bool) (-(min((arr_8 [i_6 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 1]), (((/* implicit */unsigned long long int) var_14))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
