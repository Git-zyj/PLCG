/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90566
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (!(arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((1051881260U) == (((/* implicit */unsigned int) arr_0 [i_0])))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0]) : (((/* implicit */int) var_0))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (-465487282) : (((/* implicit */int) arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1 + 4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_1 - 1] [i_3] [(unsigned char)2] [i_3] [i_3]))));
                        var_20 = ((/* implicit */unsigned int) var_6);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                        arr_13 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7646913875718847779LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0]))));
                        var_22 = ((/* implicit */unsigned short) ((((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_8 [i_0])) : (var_16))) / (arr_6 [i_0] [i_1] [i_0])));
                    }
                } 
            } 
        } 
    }
    var_23 |= ((/* implicit */short) var_2);
}
