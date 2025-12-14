/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81093
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
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (signed char)-86))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [(signed char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [(signed char)3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (!((_Bool)1)));
        arr_8 [i_1] = ((/* implicit */signed char) var_9);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (10238177134873675787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] [i_2] [2LL] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                            arr_21 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1])) != (((/* implicit */int) arr_11 [i_1]))));
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [(unsigned short)4]))) | (8208566938835875844ULL)));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2870764652U)))))))) ? (((/* implicit */unsigned long long int) min((arr_24 [i_6]), (((/* implicit */long long int) arr_22 [i_6] [i_6]))))) : (8208566938835875848ULL)));
        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_6]))))), ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_6]))) : ((-(8208566938835875848ULL)))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551602ULL)))))));
        arr_28 [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_7]))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8883938497014839791LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)));
    }
}
