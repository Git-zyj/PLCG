/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78624
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((signed char) arr_0 [i_0] [i_0]));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) 3854811814795211124LL));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = (unsigned char)143;
        var_15 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)1)), (4294967295U)))) || (((/* implicit */_Bool) 4294967292U))))) >> (((min((((/* implicit */unsigned int) min((arr_5 [i_1 - 1] [i_1 - 1]), (var_5)))), (var_3))) - (117U)))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_6))) < (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */short) min((((/* implicit */int) min((var_6), (((/* implicit */short) max((var_4), (((/* implicit */unsigned char) (_Bool)1)))))))), (max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_1))))))));
}
