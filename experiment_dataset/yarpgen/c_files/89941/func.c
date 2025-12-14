/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89941
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
    var_14 = ((/* implicit */unsigned long long int) var_5);
    var_15 *= ((/* implicit */short) (unsigned short)5054);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = (+(((/* implicit */int) var_12)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = var_3;
                    arr_7 [i_0] [i_0] [i_1] [i_2 + 3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 2]))) : (18014398509449216ULL)))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) max(((unsigned short)38014), (arr_1 [i_2] [i_1]))))))), (var_9)));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) (unsigned short)55220);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_6))));
}
