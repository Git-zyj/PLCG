/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84342
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
    var_11 -= ((/* implicit */short) min((((/* implicit */unsigned int) var_0)), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_1))), (((/* implicit */unsigned int) var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) / (arr_0 [i_0 + 2])));
        arr_4 [i_0] [(unsigned short)9] = ((/* implicit */long long int) var_1);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (var_9) : (var_9))))))));
        var_13 = ((/* implicit */short) ((signed char) ((arr_5 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1]))));
        var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(arr_7 [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (var_5) : (((/* implicit */long long int) arr_6 [i_1])))) : (((/* implicit */long long int) (~(var_8))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_17 [i_1] [i_3] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(var_1)))), (min((7897022688931611774ULL), (((/* implicit */unsigned long long int) 1530170818U))))));
                        arr_18 [i_2] [i_3] [i_4] = var_8;
                        var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_4 - 2])), (arr_6 [i_1])));
                        arr_19 [i_4] [i_3] [20U] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((unsigned int) var_8)) >= (arr_7 [i_1])))), ((+(var_5)))));
                        arr_20 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) arr_10 [i_1] [(unsigned char)16] [(short)14])) : (((/* implicit */int) ((_Bool) (signed char)52)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31814))) ^ ((+(2764796478U))))) : (((/* implicit */unsigned int) max((1769211321), (var_8))))));
                    }
                } 
            } 
        } 
    }
}
