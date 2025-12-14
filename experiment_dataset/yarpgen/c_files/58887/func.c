/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58887
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
    var_12 |= ((/* implicit */signed char) ((int) var_7));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (min((((long long int) -1711345663)), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [(unsigned short)2])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_1] [6LL])))))))))));
                var_14 = ((/* implicit */short) ((unsigned short) (unsigned short)5095));
                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1711345672)) && (((/* implicit */_Bool) 1740319931))));
                var_16 = ((/* implicit */short) ((signed char) (+(var_9))));
            }
        } 
    } 
}
