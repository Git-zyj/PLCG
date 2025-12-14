/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56152
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
    var_19 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_3 [(_Bool)1]), (arr_0 [i_0]))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))))))) ? (((((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [(_Bool)0] [(_Bool)0])))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) : (((max(((_Bool)1), (arr_3 [i_1]))) ? (((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((var_6) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max(((_Bool)1), (arr_4 [i_0] [i_0] [(_Bool)1]))) ? (((/* implicit */int) max((var_11), (arr_2 [(_Bool)1] [i_0])))) : (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) ? (((max((arr_3 [i_0]), (arr_1 [i_0]))) ? (((/* implicit */int) max((var_11), ((_Bool)1)))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_1])))))) : (((((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [(_Bool)1]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((arr_3 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((var_0), (var_0)))) : (((/* implicit */int) min((var_8), (var_5))))))) ? (((max(((_Bool)1), (var_4))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((var_8), ((_Bool)1)))))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) max((var_9), (var_16)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
}
