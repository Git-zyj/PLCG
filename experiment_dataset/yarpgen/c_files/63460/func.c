/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63460
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((int) var_9)) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483624)) || (((/* implicit */_Bool) (unsigned short)0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (1170592569)))) ? (((3803491352U) >> (((((/* implicit */int) var_5)) - (160))))) : (var_9))))))));
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -470071818)) - (min((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)100)), (arr_1 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0] [i_0]))))) ? (-386111163524683249LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)194)) + (-2147483625))))))));
                    var_15 = var_10;
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) ((3921146242U) ^ (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 3])))))));
        arr_6 [i_0 - 2] = ((/* implicit */int) arr_2 [i_0] [i_0]);
    }
}
