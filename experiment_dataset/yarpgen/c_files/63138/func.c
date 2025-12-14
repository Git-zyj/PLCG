/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63138
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)0)), (18420468163196357678ULL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */signed char) var_4);
                    arr_11 [i_0] [i_0] [i_2] = 133693440U;
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_10), (0LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */long long int) 1)), (var_3))) : (((/* implicit */long long int) var_6))));
    }
    var_15 ^= ((/* implicit */unsigned char) var_12);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58305))) != (max((((/* implicit */long long int) 1)), (0LL)))))))));
    var_17 |= ((/* implicit */short) (((+(((/* implicit */int) (_Bool)1)))) / (var_9)));
}
