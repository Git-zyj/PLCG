/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87765
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1])) != (((/* implicit */int) (unsigned short)35249))));
        var_13 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)35249)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24986))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) (unsigned char)173);
        arr_7 [i_1] = var_3;
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_11)))));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    arr_16 [i_2] [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_8 [i_2 + 1]))) + ((+(-858901463)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_23 [i_6] [i_5] [i_4] [i_3] [i_6] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) >= (((((/* implicit */_Bool) (short)24986)) ? (16555517523567663994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_3])))))))), (((((/* implicit */_Bool) 18189589244188902823ULL)) ? (((/* implicit */int) (short)-7930)) : (((/* implicit */int) (short)24986))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) 4294967295U))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_28 [i_2 + 1] [i_2 + 1] [i_7 - 1] [i_7] = ((/* implicit */unsigned short) 15698732617763966335ULL);
                    var_18 = ((/* implicit */int) var_2);
                    var_19 = var_12;
                }
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 1; i_10 < 24; i_10 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_31 [i_10] [i_8 - 1] [i_3 - 1] [i_2 + 1])), (max((((((/* implicit */_Bool) (short)3840)) ? (arr_27 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_24 [i_8] [i_8] [i_8] [4U])))), (((/* implicit */unsigned long long int) ((signed char) arr_24 [i_2] [i_3 + 2] [i_8] [i_9])))))));
                                arr_37 [(signed char)11] [i_3] [(signed char)11] [i_3] [(signed char)11] [i_8] = ((/* implicit */_Bool) max((18189589244188902823ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_21 [i_2] [i_3 + 3] [i_8] [i_9] [i_10]))))));
                                arr_38 [i_8] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (unsigned short)13732)) ? (arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11291))))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_9)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(arr_21 [i_8 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_2]))), (((/* implicit */long long int) ((short) var_1)))))) && (((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_6))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */int) ((signed char) arr_21 [i_8 + 1] [i_3] [i_3 + 1] [i_2 + 1] [i_2]))) != ((-(((/* implicit */int) (signed char)32))))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_2))));
                }
            }
        } 
    } 
}
