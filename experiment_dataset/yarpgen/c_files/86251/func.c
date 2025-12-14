/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86251
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) % (((/* implicit */int) var_8)))) ^ ((~(((/* implicit */int) min((((/* implicit */short) arr_3 [(short)2])), (arr_1 [(signed char)5]))))))));
        var_14 = ((/* implicit */unsigned char) (signed char)-6);
        var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)-7)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned long long int) var_5)), (9117739635291677855ULL)))) ? (-1764066700) : (var_3)));
    }
}
