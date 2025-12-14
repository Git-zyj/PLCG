/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75897
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_1 [i_0] [i_0])));
        arr_5 [(unsigned short)0] = ((/* implicit */_Bool) (~(arr_0 [i_0 - 1])));
        arr_6 [i_0] = ((/* implicit */unsigned char) var_7);
        var_17 -= ((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (arr_0 [i_0 - 1])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */int) ((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_18 |= (+(((/* implicit */int) (short)13616)));
        var_19 = ((/* implicit */_Bool) ((-1935420134) + (((/* implicit */int) (_Bool)0))));
    }
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) var_2))), (((11109075520918029993ULL) ^ (((/* implicit */unsigned long long int) 1935420134))))));
}
