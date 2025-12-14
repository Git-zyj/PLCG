/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93515
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
    var_15 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = (unsigned char)47;
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (max((127ULL), (arr_2 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = (+((+(((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) var_5);
                    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(arr_10 [i_1 + 3] [i_2 + 1])))) : (((/* implicit */int) arr_8 [i_1 + 3] [i_2 - 2] [(unsigned short)5]))));
                }
            } 
        } 
    }
}
