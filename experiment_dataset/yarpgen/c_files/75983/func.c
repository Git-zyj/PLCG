/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75983
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (short)-25724)) : (610449815)));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)24484)), (610449815)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 += min((((/* implicit */int) ((unsigned char) var_17))), (((((/* implicit */_Bool) var_5)) ? (((arr_8 [2LL] [10ULL] [i_0] [2LL]) ? (((/* implicit */int) var_17)) : (var_3))) : (((int) var_7)))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    arr_10 [i_1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24504)) ? (((/* implicit */int) (unsigned short)57111)) : ((~(((/* implicit */int) arr_4 [i_0] [i_0]))))));
                    var_22 += ((/* implicit */_Bool) arr_6 [(unsigned short)0]);
                }
            } 
        } 
    } 
}
