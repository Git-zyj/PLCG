/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98534
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (var_17)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_0)))) : (((/* implicit */int) ((17230247941813801161ULL) == (17230247941813801161ULL)))))) != (max((((((/* implicit */int) var_10)) * (-1))), (((/* implicit */int) var_5)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (17230247941813801155ULL) : (((/* implicit */unsigned long long int) 31744)))))) != (((((/* implicit */_Bool) ((int) var_13))) ? (min((var_7), (((/* implicit */unsigned long long int) var_5)))) : (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_20 = ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (min((2852092883611160167ULL), (var_0)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(arr_1 [(_Bool)1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [3ULL] [3ULL]))))) : (((/* implicit */int) ((1216496131895750441ULL) > (5328940106115008354ULL)))))) * (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) -1)), (arr_1 [i_0] [i_0])))))));
        var_22 = ((/* implicit */_Bool) 1502174909);
        var_23 ^= ((-705472703) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((5328940106115008365ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) 13117803967594543251ULL)) ? (arr_0 [i_0]) : (var_8))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((~(1089042569))) : (((int) arr_0 [i_0])))))));
    }
}
