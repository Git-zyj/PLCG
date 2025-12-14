/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7111
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
    var_12 = ((/* implicit */unsigned short) (signed char)54);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = arr_2 [i_2] [i_1] [i_0];
                    var_14 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2]);
                    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) & (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) & (-7967107937474092364LL)))));
                }
            } 
        } 
    } 
}
