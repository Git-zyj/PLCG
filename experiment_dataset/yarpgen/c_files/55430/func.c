/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55430
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
    var_10 = ((((/* implicit */_Bool) 9550825857788116483ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7515))) : (14596333926670072463ULL));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((70366596694016LL) + (((/* implicit */long long int) var_7))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) -899553666);
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4132419798U)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((169711969), (((/* implicit */int) (short)-1)))) != (899553666)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) 18225314162918882657ULL))))), (min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
    }
}
