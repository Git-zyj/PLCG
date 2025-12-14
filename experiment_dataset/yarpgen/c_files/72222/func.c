/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72222
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_5))));
    var_11 = ((/* implicit */unsigned int) ((((var_2) >> (((var_4) + (449381643))))) << (((var_5) - (95086511U)))));
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_13 |= ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) | (705108301U)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((var_9) == (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2 + 1] [i_2 + 1])))) ? (arr_4 [i_0] [i_2 + 1] [i_0 + 1]) : (((unsigned int) var_1)))))));
                    }
                } 
            } 
        } 
        arr_13 [(signed char)8] = ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]);
    }
    for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((arr_14 [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3589859015U)))))) == (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967283U)) >= (1061034735712105218ULL))))))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (var_3)));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((arr_14 [i_4]), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)116)), (arr_15 [i_4 + 2] [i_4 + 1])))))))));
        arr_16 [i_4 - 3] = ((/* implicit */unsigned int) var_2);
    }
}
