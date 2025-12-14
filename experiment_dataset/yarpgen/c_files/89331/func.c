/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89331
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
    var_16 = 502260556;
    var_17 |= ((/* implicit */short) ((((max((var_7), (((/* implicit */long long int) 9)))) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_19 = ((/* implicit */signed char) arr_2 [i_0]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((15) >= (((/* implicit */int) (signed char)126))))) >> ((((+(((((/* implicit */_Bool) var_5)) ? (8186361210909966276LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) - (8186361210909966271LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_21 = max((((/* implicit */long long int) ((short) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) (short)31)))))), ((~(max((((/* implicit */long long int) arr_3 [i_1])), (var_12))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [14]))))) ? (((/* implicit */long long int) ((arr_11 [i_1] [i_2] [i_2] [i_4]) - (((/* implicit */int) arr_5 [i_2] [i_4]))))) : (arr_10 [i_3] [i_2] [i_3] [i_3])));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
            var_24 = ((((/* implicit */_Bool) arr_4 [12LL] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1])));
            arr_12 [i_2] [i_2] [(unsigned short)13] = ((/* implicit */short) arr_6 [i_1] [i_1] [i_1]);
            /* LoopSeq 1 */
            for (int i_5 = 3; i_5 < 16; i_5 += 2) 
            {
                var_25 = ((/* implicit */signed char) arr_11 [i_5 + 2] [i_2] [i_2] [i_1]);
                arr_15 [i_1] [i_2] [(short)2] = ((/* implicit */signed char) (+(arr_11 [i_5 - 2] [i_1] [i_1] [i_1])));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_18 [i_1] [i_2] [i_5] [i_1] |= ((/* implicit */short) (+(arr_8 [i_1] [i_2] [i_5 + 2] [i_6])));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_3 [i_6]))));
                    var_27 = ((/* implicit */long long int) arr_9 [i_6] [i_1] [i_1] [i_1]);
                }
                arr_19 [i_1] [i_2] [i_5 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (-633511821237719396LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))))) : (((arr_8 [i_1] [i_2] [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
            }
        }
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12280)))))) : (var_7))))));
    }
}
