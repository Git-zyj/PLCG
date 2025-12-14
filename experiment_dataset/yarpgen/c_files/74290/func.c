/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74290
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = 7592387398468434676LL;
        arr_3 [i_0] = ((/* implicit */_Bool) (signed char)16);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)120);
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_1 [i_0] [i_0]));
        arr_6 [i_0] = arr_0 [i_0] [i_0];
    }
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_1))) ^ (2147481600)));
}
