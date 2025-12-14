/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76712
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
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (4294967267U))))) == (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) & (4294967251U));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned char) 24U);
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [(unsigned short)13]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(45U)))) ? (866356167U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))));
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((-466868543) * (((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_15 [i_2] = ((/* implicit */short) arr_1 [i_2] [i_2]);
        var_16 |= ((((/* implicit */_Bool) ((arr_1 [i_2] [i_2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)12832))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (short)-12828)) == (((/* implicit */int) arr_13 [i_2]))))));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_22 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(arr_12 [i_3] [i_5]))), (((/* implicit */int) arr_1 [i_3] [i_5]))))) ? (((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (arr_14 [i_4 - 1]) : (arr_12 [i_4 + 1] [i_4 + 1]))) : (((/* implicit */int) (_Bool)1))));
                    arr_23 [i_3] = ((((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_3])))) >= (((/* implicit */int) ((((/* implicit */int) arr_13 [(unsigned char)6])) == (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_31 [i_3] [(short)3] [(unsigned char)5] [i_6 + 1] = ((/* implicit */signed char) (+(((arr_11 [i_4 - 1]) * (((/* implicit */int) arr_1 [i_7 - 1] [i_6 - 1]))))));
                                arr_32 [i_6] [i_4] [i_5] [i_4 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3] [i_3])) + (((/* implicit */int) arr_24 [i_7] [1U] [i_5]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) ((arr_27 [i_4] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((-(9874577667198614589ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))))));
                                arr_33 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_27 [i_3] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (1309931484U)))) ? ((+(arr_16 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3])))))));
                                var_17 += ((/* implicit */unsigned long long int) 3428611130U);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_5 [i_3] [i_3])))));
    }
    var_19 = var_3;
}
