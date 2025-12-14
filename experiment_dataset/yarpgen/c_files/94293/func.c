/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94293
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
    var_15 = ((/* implicit */_Bool) (short)8257);
    var_16 = ((unsigned char) ((short) (_Bool)1));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-8258))));
        var_18 ^= ((/* implicit */long long int) ((_Bool) (short)-11768));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_0 [i_1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) -5199433348902955892LL);
        var_20 ^= ((/* implicit */short) ((-705731279087162548LL) & (((/* implicit */long long int) ((/* implicit */int) max((((short) arr_5 [i_1])), (((short) arr_5 [i_1]))))))));
    }
    for (short i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) (unsigned char)47);
        var_21 = ((/* implicit */unsigned int) (short)8282);
    }
}
