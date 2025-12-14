/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89122
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
    var_10 = ((/* implicit */unsigned char) (((!((_Bool)1))) && (((/* implicit */_Bool) max((min((var_8), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_6)), (var_1))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) (signed char)-56)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -309307677)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)121))))))))));
        arr_3 [i_0] = ((/* implicit */int) (-(arr_2 [i_0] [5ULL])));
        arr_4 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
}
