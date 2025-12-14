/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69816
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
    var_19 = ((/* implicit */_Bool) var_18);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_18))))))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)3))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
        arr_4 [i_0 + 2] = max((6006476889495186028ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 10570529121217909788ULL))));
    }
}
