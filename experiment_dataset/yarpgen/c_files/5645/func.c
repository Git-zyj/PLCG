/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5645
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) >= (-142311464)));
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((long long int) (signed char)120)))))));
    var_14 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 173809801977663129ULL)) || (((/* implicit */_Bool) -283034601615787992LL)))))))), (173809801977663129ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = 3108177193U;
                arr_7 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))))) < (18272934271731888486ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_11);
}
