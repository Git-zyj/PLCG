/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55361
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)109)))) + ((+(((/* implicit */int) var_12)))))))));
                    arr_8 [i_0] [i_1] [8ULL] [i_2] &= max((((/* implicit */unsigned short) (signed char)93)), (((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_2) : (var_11)))));
                    arr_9 [8ULL] |= ((/* implicit */signed char) 2093433197540456569ULL);
                    arr_10 [i_0 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((int) arr_6 [i_0 - 1] [i_0] [i_0 - 1])), ((-(-1285681117)))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) var_17)))), (((((/* implicit */int) arr_4 [i_0 + 1] [(short)14])) / (((/* implicit */int) arr_4 [i_0] [(short)6]))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0 - 1] [i_0])))) - (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))));
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_20 [i_3] [i_4 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_4 - 1])), (var_15)))) % (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_3])), (arr_19 [i_3] [i_4] [i_3] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 8; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), ((unsigned short)24592))))) > (max((8167936339899973300ULL), (((/* implicit */unsigned long long int) (unsigned short)2401))))))), ((+(((/* implicit */int) arr_17 [i_4] [i_5]))))));
                                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)80))));
                                var_21 *= ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_5]))))), (((((/* implicit */_Bool) (unsigned short)63133)) ? (((/* implicit */int) var_1)) : (var_13))))));
                                arr_28 [i_3 + 1] [(unsigned short)7] [i_6] = min((((((/* implicit */_Bool) ((510657346U) >> (((((/* implicit */int) (unsigned char)250)) - (227)))))) ? (((unsigned long long int) (unsigned char)202)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_3] [i_4] [i_3] [1] [i_7] [i_4 + 1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3] [i_3 - 1] [i_4] [i_3] [i_6] [i_7]))))) + (arr_15 [i_4 - 1] [i_3 - 2] [i_7 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        arr_32 [i_3] [i_4] [i_5] [i_8 - 1] = max(((+(8974439612247200272ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */int) var_8)) + (((/* implicit */int) arr_30 [i_3] [i_4] [i_5] [i_8 - 2]))))))));
                        var_22 = ((/* implicit */long long int) ((arr_31 [i_3] [i_4] [i_5] [i_8]) < (((/* implicit */unsigned long long int) var_11))));
                    }
                    arr_33 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) arr_29 [i_3] [i_4] [i_5] [i_5]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (unsigned short)63114)) + (((/* implicit */int) (unsigned char)31)))));
}
