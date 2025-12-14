/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7851
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
    var_19 &= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) -1098998988686122392LL))))), (-1098998988686122392LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = var_5;
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1098998988686122392LL)) ? (((/* implicit */int) (_Bool)0)) : (-986381644)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_21 = ((/* implicit */signed char) (+(arr_3 [i_0 - 1] [i_0])));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_0] [i_1 + 3] [i_0 + 1]));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = (+(6693318131962751178ULL));
            arr_10 [i_0] [22] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_0]))) : (arr_1 [i_2])));
        }
    }
}
