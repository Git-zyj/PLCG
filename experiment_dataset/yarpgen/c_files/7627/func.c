/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7627
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
    var_15 = ((/* implicit */signed char) var_5);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))))) ? (((2408761954U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (var_4)))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)31133)) ? (32368217) : (-1))), ((-(((/* implicit */int) var_14)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 3] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [5])) : (((/* implicit */int) var_11)))))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))))))));
        var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (arr_1 [i_0 + 1])))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_5 [(short)8]);
        var_18 ^= ((/* implicit */short) ((((/* implicit */int) ((arr_1 [i_1 - 1]) >= (arr_1 [i_1])))) << (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) ((arr_5 [i_2 + 3]) / (arr_1 [i_3 - 1])));
                    arr_15 [i_2 + 1] [i_3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_9 [i_2 + 2] [i_3 - 1])));
                }
            } 
        } 
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (arr_10 [8ULL] [i_2] [i_2])))) : (arr_11 [i_2 - 1])));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_20 = ((/* implicit */signed char) var_14);
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) << (((/* implicit */int) (_Bool)1))));
    }
    var_21 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (signed char)64)))))));
    var_22 = ((/* implicit */unsigned char) var_10);
}
