/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66011
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) arr_2 [i_0] [i_0]))));
        var_11 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) & (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_12 -= ((/* implicit */short) (!(((/* implicit */_Bool) -4933480360150890400LL))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_3])))) ? (arr_9 [i_3] [i_1] [i_0]) : (((((/* implicit */int) arr_4 [(unsigned char)14] [i_2] [i_3])) << (((((arr_9 [i_0] [i_1] [i_3]) + (1029342313))) - (15)))))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [9U] [i_3 + 1]))))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_3]))) & (arr_2 [i_3] [i_1])))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned int) var_3))));
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))));
}
