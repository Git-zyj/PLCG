/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58276
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
    var_17 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        var_18 *= ((/* implicit */_Bool) (-(var_0)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) ((unsigned char) (short)-14741)))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)14764)))))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) (short)-14731))))))))))));
        var_20 = ((/* implicit */int) max((var_20), ((+((-(((/* implicit */int) arr_3 [i_1]))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)14743))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)14735)) : (((/* implicit */int) arr_5 [i_1])))) : ((~(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) (+(arr_4 [i_4 + 1])))) && (((/* implicit */_Bool) ((short) arr_4 [i_4 + 1]))));
                    var_23 &= ((/* implicit */short) (-(((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_5 [i_4])))) * (((((/* implicit */int) (unsigned char)7)) / (((/* implicit */int) (short)-14744))))))));
                }
            } 
        } 
        arr_16 [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) (short)-14741))))) + (max((((/* implicit */long long int) var_12)), (var_4)))))) ? ((-(((/* implicit */int) arr_1 [i_2] [i_2])))) : (((/* implicit */int) ((signed char) (((-2147483647 - 1)) ^ (((/* implicit */int) arr_3 [i_2]))))))));
    }
}
