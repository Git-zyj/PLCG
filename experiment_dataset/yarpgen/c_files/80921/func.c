/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80921
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 379670212U)) ? ((+(var_5))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? (((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_16)))) ^ (((/* implicit */int) ((-1030830774281473450LL) <= (var_17)))))) : (((int) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [(_Bool)1]);
        var_20 -= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_21 &= arr_0 [i_0];
        arr_3 [4LL] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
