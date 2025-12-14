/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83510
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [8] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44656)) ? (((/* implicit */int) (unsigned short)20879)) : (760781434)))) - (0U)))) & (min((((/* implicit */long long int) (unsigned char)208)), (((((/* implicit */_Bool) -9223372036854775798LL)) ? (arr_0 [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_19 = ((((/* implicit */_Bool) min((arr_2 [i_0] [i_2 - 2]), (((/* implicit */long long int) arr_3 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_3 [(_Bool)1] [i_0])) >= (arr_2 [i_2 + 3] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2 - 2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) -760781435))));
}
