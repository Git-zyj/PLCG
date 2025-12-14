/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69416
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-32752)) ? (-660460693218590571LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32752)))))));
        arr_2 [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
    }
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
}
