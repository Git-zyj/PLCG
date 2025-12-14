/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85156
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (((((unsigned long long int) var_1)) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 1] [i_0]), (arr_0 [(short)6] [i_0 - 1])))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min(((~(2389422972U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (1905544316U) : (1905544352U))))))));
        var_11 |= ((/* implicit */_Bool) ((int) ((min((2389422990U), (((/* implicit */unsigned int) (unsigned char)140)))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11329)) ? (((/* implicit */int) (short)-876)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) (~(4820811182884202002ULL)));
        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)0]))));
        var_14 = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_1 - 2]));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((_Bool) arr_0 [i_1 + 2] [i_1 - 1]));
                    var_16 = ((/* implicit */long long int) ((unsigned char) arr_0 [i_2] [i_3]));
                }
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_4 - 2])), ((-(((/* implicit */int) arr_2 [i_4 + 2]))))));
        var_17 = ((/* implicit */long long int) arr_8 [i_4]);
        var_18 = ((/* implicit */unsigned char) (((+(arr_8 [i_4 + 1]))) + (arr_5 [i_4])));
    }
    for (short i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) 1905544309U);
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_5 [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5 - 2] [i_5 - 2]))) : (1905544330U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) max((arr_6 [8ULL]), (((/* implicit */unsigned short) arr_10 [i_5] [i_5] [i_5 - 2]))))))))));
    }
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned short)26718), (((/* implicit */unsigned short) ((unsigned char) 1945580942U))))))));
    var_22 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), ((+(1945580961U)))))), (1099511496704ULL)));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_9))));
    var_24 += ((/* implicit */signed char) var_7);
}
