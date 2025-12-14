/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62700
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) ^ (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) min((var_2), ((_Bool)1)))) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [(_Bool)1] = (!(var_1));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_5 [i_1])) << (((/* implicit */int) arr_5 [i_1]))))));
        arr_6 [i_1] [(_Bool)1] = var_2;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (arr_7 [i_2])));
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))) ? (((arr_5 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((arr_8 [i_2]) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))))) ? (((arr_5 [i_2]) ? (((/* implicit */int) max((arr_4 [i_2]), (var_1)))) : (((/* implicit */int) ((var_3) && ((_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_0))) <= (((/* implicit */int) ((_Bool) (_Bool)1))))))));
    }
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0)))), (min((((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))), (((((/* implicit */int) var_5)) / (((/* implicit */int) (_Bool)1))))))));
}
