/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57550
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
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 &= ((/* implicit */signed char) var_2);
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((var_1) > (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (var_4)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) ((_Bool) ((var_7) / (var_13))));
        arr_4 [i_0] &= min((min((((/* implicit */int) (unsigned short)4095)), (2007803609))), (((int) var_16)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_15)), (min((var_10), (((/* implicit */long long int) var_3)))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))) / (6839638653659536464LL)))))));
            arr_9 [i_0] &= ((/* implicit */int) ((signed char) -6839638653659536473LL));
        }
        arr_10 [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned short) ((long long int) var_1)));
    }
}
