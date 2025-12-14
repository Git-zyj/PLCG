/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63425
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
    var_16 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1 - 1] [18ULL] [i_3] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 4019616169U)) : (var_9)))));
                        var_17 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                    }
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4019616168U)), ((((_Bool)1) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_0] [i_1] [i_2] [i_0 + 1])))) : (2634590308U)));
                }
            } 
        } 
    } 
}
