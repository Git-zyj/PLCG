/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73220
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (-(max((max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_7 [i_2] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))))))));
                    var_14 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_2])), (arr_4 [i_0] [(_Bool)1] [i_2])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min(((short)18360), (((/* implicit */short) arr_0 [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */short) max((((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) 635800347U)))))), (min((((long long int) (signed char)-87)), (((/* implicit */long long int) max(((short)-1), ((short)-22688))))))));
}
