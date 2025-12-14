/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91410
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
    var_11 |= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && ((!((_Bool)1))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)));
            arr_8 [6ULL] [i_1] [6LL] = ((/* implicit */unsigned long long int) var_8);
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [7ULL] [7ULL]);
        }
        var_12 = ((/* implicit */int) arr_0 [i_0]);
        var_13 = ((/* implicit */_Bool) arr_1 [10] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) (-(-2020369857)));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((long long int) -692251872505168396LL));
        var_15 ^= ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-87)))) : ((+(arr_4 [i_2]))));
    }
}
