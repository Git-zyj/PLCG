/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80974
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
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_3 [9U] = ((/* implicit */long long int) (-((~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)17))))))));
        arr_4 [14LL] [i_0] = (-((~(min((((/* implicit */unsigned long long int) var_2)), (var_4))))));
        var_11 = ((/* implicit */int) var_7);
        var_12 = ((/* implicit */_Bool) (((~(max((((/* implicit */long long int) (signed char)27)), (var_6))))) ^ (((/* implicit */long long int) ((int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524)))))))));
    }
    var_13 = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65519))));
    var_14 = ((unsigned int) ((_Bool) var_9));
    var_15 = (!(((/* implicit */_Bool) var_3)));
}
