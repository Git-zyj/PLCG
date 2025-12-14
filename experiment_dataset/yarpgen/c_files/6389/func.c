/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6389
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
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_0] = 812324135;
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 1073741824U)), (var_10)));
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
            var_16 = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (arr_0 [i_0] [(signed char)0])));
        }
    }
}
