/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58854
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = arr_0 [i_0];
        var_21 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_22 = ((/* implicit */short) 2147483647);
        arr_3 [i_0] = ((/* implicit */short) var_4);
    }
    var_23 = ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) var_6)) || ((_Bool)1)))))));
    var_24 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_3))))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_16))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] = ((/* implicit */signed char) arr_4 [0ULL]);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_27 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        arr_22 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) var_0);
                        var_29 = ((/* implicit */short) (-(((/* implicit */int) (short)-19721))));
                    }
                    var_30 -= ((/* implicit */unsigned char) arr_20 [i_3] [i_2]);
                }
            } 
        } 
        arr_23 [i_2] [10] = ((/* implicit */short) (signed char)-97);
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97))))) : ((((_Bool)1) ? (((/* implicit */int) var_13)) : (var_0)))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [(short)8])) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_19))));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) (short)19720);
    }
    var_33 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((16383ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)60)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-45)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (18446744073709551610ULL))))));
}
