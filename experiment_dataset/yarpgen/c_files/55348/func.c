/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55348
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
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))) == (var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((10248423189906635872ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        arr_5 [i_0] [i_0] = (_Bool)1;
        arr_6 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_9 [i_1] [7] = (unsigned short)65532;
        arr_10 [i_1] = ((/* implicit */unsigned char) var_7);
        arr_11 [i_1] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))))));
    }
}
