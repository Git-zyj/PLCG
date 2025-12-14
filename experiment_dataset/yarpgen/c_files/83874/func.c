/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83874
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) (-(323584400U))));
        var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-56)) || (((/* implicit */_Bool) var_7)))) && (((950799895) == (1533485826)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_11 *= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_12 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                    arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_9 [i_1]), (arr_9 [i_2]))))));
                }
            } 
        } 
    }
    var_13 *= ((/* implicit */_Bool) var_6);
}
