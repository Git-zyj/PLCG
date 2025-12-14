/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68701
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_10 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)1))));
        var_11 = ((/* implicit */short) ((var_6) % (var_7)));
    }
    var_12 = ((/* implicit */short) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-4156)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18938))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (11260092410619433237ULL))) ^ (var_4)))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_1);
        arr_7 [i_1] = ((/* implicit */short) arr_5 [i_1] [i_1]);
    }
}
