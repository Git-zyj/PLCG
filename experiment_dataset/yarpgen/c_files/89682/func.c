/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89682
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */short) var_10);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -235642517)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)3704))));
                }
            } 
        } 
    } 
    var_19 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (18446744073709551615ULL))) + (((unsigned long long int) var_11)))) < (((/* implicit */unsigned long long int) min((max((var_8), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12235)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))))));
}
