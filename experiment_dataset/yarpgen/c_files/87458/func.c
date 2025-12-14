/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87458
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)98)) * (((/* implicit */int) (unsigned char)98))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) >> (((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)82)) % (((/* implicit */int) (short)18266))))) | (((var_17) * (((/* implicit */long long int) ((/* implicit */int) var_1))))))) - (1051549784445164150LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((((/* implicit */int) var_14)), ((+(max((arr_3 [i_0]), (((/* implicit */int) var_8))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */short) arr_0 [i_1]);
                arr_7 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) << (((((var_9) + (1715164148))) - (16)))))) == (17789704113531630205ULL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
}
