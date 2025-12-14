/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55324
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
    var_18 ^= ((/* implicit */int) ((((unsigned long long int) (unsigned short)17976)) == (((/* implicit */unsigned long long int) max((((long long int) 2147483647)), (var_0))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) var_12)), (var_6))))) ? (((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (arr_1 [(unsigned short)17] [i_0]));
        var_19 = ((/* implicit */signed char) ((long long int) arr_1 [i_0] [i_0]));
        var_20 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_1 [i_0] [18])))))) && (((/* implicit */_Bool) (unsigned short)17976))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
    }
}
