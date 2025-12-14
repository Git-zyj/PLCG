/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99745
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
    var_13 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((short) (_Bool)0))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = (~(((unsigned long long int) ((long long int) (unsigned short)46044))));
        arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) ((short) var_9))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_10 [(signed char)8] = ((/* implicit */unsigned long long int) ((short) ((signed char) 5965773656424796487LL)));
        var_14 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        var_16 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2796823230643787772ULL)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */short) ((unsigned int) ((short) ((signed char) var_7))));
        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((short) 2309372944566334186LL))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -2309372944566334210LL))))))));
}
