/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76091
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)49902)) : (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))))));
        var_11 *= ((/* implicit */_Bool) ((int) (((((_Bool)1) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) (_Bool)1)))) * (max((((/* implicit */int) (unsigned char)127)), (409335325))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((long long int) arr_5 [i_1])))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 409335325))) - (max((-2147483641), (0)))))) || (((/* implicit */_Bool) (+(arr_4 [i_1]))))));
    }
    var_13 = ((/* implicit */_Bool) var_8);
    var_14 = ((/* implicit */short) -9223372036854775788LL);
    var_15 |= ((/* implicit */int) (_Bool)1);
}
