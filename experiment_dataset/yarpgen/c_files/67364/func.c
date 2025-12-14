/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67364
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((2199023255551ULL) / (var_5)));
        var_17 = ((/* implicit */long long int) ((_Bool) arr_2 [i_0]));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned short) -8461422800020863184LL);
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
        arr_8 [12ULL] |= ((/* implicit */_Bool) ((signed char) arr_5 [i_1 - 2]));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) (unsigned short)0);
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) 0LL));
    }
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((_Bool) 34084860461056ULL))))))));
}
