/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62066
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_15);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((140737471578112ULL) | (140737471578098ULL))), (18446603336237973504ULL))) | (6459565989454224426ULL)));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(2278333165994788310ULL)));
        arr_8 [i_1] = ((/* implicit */long long int) (_Bool)1);
        arr_9 [i_1] = (+(18446603336237973487ULL));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_1])))) > ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 2]))) : (140737471578122ULL)))));
    }
    var_20 = var_0;
    var_21 = ((((/* implicit */_Bool) 16168410907714763305ULL)) ? (2278333165994788340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))));
    var_22 = ((/* implicit */long long int) ((short) ((min((((/* implicit */unsigned long long int) -8897389771510644633LL)), (16168410907714763282ULL))) / (((/* implicit */unsigned long long int) var_2)))));
    var_23 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (!((_Bool)1)))), (var_0))), (((/* implicit */long long int) var_13))));
}
