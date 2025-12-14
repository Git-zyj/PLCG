/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93458
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
    var_17 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_16)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) 8179628704929458665ULL);
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) var_12);
                        var_18 = ((unsigned char) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 13U)))) : (((long long int) 13U))));
                    }
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) (_Bool)1);
                        var_20 = ((/* implicit */_Bool) 4294967282U);
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-100)), (776178992U)))) ? (((/* implicit */int) ((signed char) (signed char)101))) : (((/* implicit */int) ((short) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = ((16724895761315529088ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))));
    var_23 = ((/* implicit */signed char) max((var_23), (var_6)));
}
