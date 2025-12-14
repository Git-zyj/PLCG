/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72972
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) ? (((/* implicit */int) arr_6 [(signed char)6] [i_1] [(signed char)12] [i_2])) : (max((((var_5) - (((/* implicit */int) arr_7 [i_1] [(short)9] [i_1])))), (max((var_5), (((/* implicit */int) arr_5 [i_0])))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [(_Bool)1] [i_0] [i_0])))));
                    var_12 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_2 [i_2])), (arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_7))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4 - 1])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_2 [i_3]))));
            arr_14 [i_3] = ((/* implicit */unsigned int) ((unsigned char) var_0));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_15 |= (~((~(((/* implicit */int) arr_4 [i_3] [i_3] [19U])))));
            var_16 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_5]))) : (arr_16 [7U]))) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5])))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_17 *= ((/* implicit */unsigned int) (~(arr_18 [i_6 - 1] [i_6 - 1] [i_6])));
            var_18 = (~(arr_18 [i_6 - 1] [i_6 - 1] [i_3]));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_8))));
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_7] [i_7]))))) < (((arr_20 [i_7] [i_7]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        arr_23 [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_7]))));
        arr_24 [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned int) var_8));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (~((~(((/* implicit */int) arr_25 [i_7]))))));
                    var_21 = ((/* implicit */unsigned int) arr_29 [i_7] [i_7] [i_8] [i_7]);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) (~(var_6)));
}
