/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84897
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
    var_18 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_7 [i_0] [i_0] [i_0] [i_0])))) : (arr_0 [i_0 + 1] [i_0 - 1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (var_17)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) >= (var_13)))) : ((~(((/* implicit */int) (_Bool)1)))));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_0 [i_1] [i_1]) < (((/* implicit */unsigned int) ((int) arr_9 [i_0] [10] [i_2] [i_3])))))), (-2014441175)));
                    }
                }
            } 
        } 
    } 
}
