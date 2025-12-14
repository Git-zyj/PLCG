/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61699
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
    var_16 = ((/* implicit */short) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32461))) < (-1064574803067686405LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_0 + 1]), (var_2))))));
                var_18 = max((((/* implicit */unsigned short) var_2)), (((unsigned short) 9604966520577228636ULL)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) var_10)), (var_14))))), (max((var_13), (((/* implicit */unsigned short) ((short) var_15)))))));
    var_20 = ((/* implicit */long long int) (((-(((/* implicit */int) var_10)))) + (((/* implicit */int) var_11))));
}
