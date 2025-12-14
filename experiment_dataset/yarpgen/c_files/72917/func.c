/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72917
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
    var_14 |= ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)14336)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) var_9)))));
    var_15 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_16 = ((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) ((short) 9974390668577674680ULL))) : ((-(((/* implicit */int) arr_3 [i_1]))))))) & (((((unsigned long long int) arr_7 [i_0] [(signed char)4])) * (((((/* implicit */_Bool) arr_7 [(signed char)6] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (224ULL))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(17422183626322619130ULL))))));
                }
            } 
        } 
        var_18 |= ((/* implicit */unsigned long long int) min(((_Bool)1), (((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))));
    }
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) var_13)), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_12))))));
}
