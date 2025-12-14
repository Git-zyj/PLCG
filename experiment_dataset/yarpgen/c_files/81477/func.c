/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81477
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) 1316290657U)) + (var_1))) - (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)170))))) ? (max((((/* implicit */unsigned int) arr_1 [i_0])), (2317481998U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
                    arr_6 [i_0] = ((/* implicit */signed char) ((long long int) max((2995338424U), (((/* implicit */unsigned int) (signed char)-19)))));
                    var_18 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((1739042379), (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-1437))) ? (1739042379) : (((/* implicit */int) var_3))))) : (var_13)));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (((unsigned int) arr_12 [i_3]))));
                    arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_3])))) * (((((/* implicit */_Bool) 2147483647)) ? (8941209970491520410LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_24 [(unsigned short)11] [i_5] [i_5] [i_4] [i_7] [i_5] = ((/* implicit */unsigned char) (signed char)3);
                                var_21 = ((short) ((((/* implicit */_Bool) arr_20 [i_6] [i_7 - 1] [i_6] [i_7 + 1])) && (((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6 + 1]))));
                                arr_25 [i_5] [i_4] [i_4] [i_6 - 1] [i_6 - 1] = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) (unsigned short)45157)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
