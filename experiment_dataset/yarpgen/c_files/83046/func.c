/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83046
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) arr_1 [i_0] [13])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) (unsigned char)131))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1U])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))))) ? ((~(((/* implicit */int) (unsigned short)34955)))) : (((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_6 [i_3 + 1])));
                            var_14 = ((/* implicit */unsigned int) ((unsigned short) var_7));
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_4] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)173)) ? (arr_18 [i_2] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_18 [i_2] [i_3 + 2] [i_3 + 2] [(unsigned char)8] [i_3 + 2])));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((short) ((signed char) var_7))))));
                            arr_22 [(short)4] [i_3] [i_3 - 1] [i_2] [i_3 - 1] [i_1] [i_3 - 1] &= ((/* implicit */unsigned char) ((665135773U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1])))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4160749554U))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_7 [i_6] [i_2] [i_2])) ? (134217726U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        }
                        arr_23 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) var_6)))));
                    }
                } 
            } 
        } 
        var_17 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_1]));
    }
    for (unsigned short i_7 = 3; i_7 < 9; i_7 += 2) 
    {
        var_18 = ((/* implicit */short) max((((unsigned long long int) ((unsigned short) 4160749565U))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_25 [i_7]))))))));
        var_19 = ((/* implicit */long long int) max(((~(min((var_10), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) var_6))));
        arr_26 [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (min((((/* implicit */unsigned short) (unsigned char)137)), ((unsigned short)0))))))));
    }
    var_20 = (unsigned short)38063;
}
