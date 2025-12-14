/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58905
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_4))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(signed char)4] [(short)14] |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_3 [(short)0] [i_0])))) != ((-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) arr_4 [i_0]))))))));
                arr_7 [i_1] [10U] = ((/* implicit */signed char) var_0);
            }
        } 
    } 
}
