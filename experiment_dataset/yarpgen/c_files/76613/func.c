/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76613
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) var_9);
                    arr_7 [i_0] = ((/* implicit */int) var_10);
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) var_10);
        arr_10 [i_0] = ((/* implicit */long long int) var_9);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    arr_21 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned int) var_3);
                    arr_22 [i_3] [i_3] [18] [i_5] = ((/* implicit */long long int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_27 [i_3] [i_3] [i_5] [i_6] [i_7] = var_1;
                                arr_28 [20ULL] [i_5] [i_6] [4] [i_5] [i_3] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_35 [i_3] [i_4] [i_3] [i_8] [12ULL] [i_8] [i_3] = ((/* implicit */_Bool) var_3);
                                arr_36 [i_9] [i_3] [22U] [i_3] [22U] = var_7;
                                arr_37 [i_5] = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_3] = ((/* implicit */short) var_6);
        arr_39 [0LL] &= ((/* implicit */_Bool) var_9);
        arr_40 [i_3] [20ULL] = ((/* implicit */unsigned int) var_8);
    }
    var_11 |= ((/* implicit */_Bool) var_3);
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */signed char) var_3);
}
