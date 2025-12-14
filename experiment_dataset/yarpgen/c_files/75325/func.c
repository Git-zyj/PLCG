/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75325
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) 81276997U))))));
        arr_4 [13LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_0 + 1] [7U]));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1])) ? (((/* implicit */long long int) arr_2 [i_0 + 1])) : (arr_1 [i_1])));
            var_22 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_0 [(short)7] [11ULL])) : (576460752303390720LL)))));
        }
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
        arr_12 [9U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_9 [i_2 - 1]), (arr_9 [i_2 - 1]))))));
    }
    for (short i_3 = 3; i_3 < 22; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned int) min((((arr_16 [i_3 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7551025470058521788ULL))), (((2598002642338552626ULL) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3922011717U))))))));
        var_23 = ((/* implicit */long long int) ((int) (!(arr_16 [i_3 - 3]))));
    }
    var_24 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((_Bool) var_4)))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)44)) & (((/* implicit */int) (unsigned char)171))));
}
