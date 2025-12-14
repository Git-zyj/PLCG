/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6923
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((short) ((short) ((((/* implicit */int) (unsigned short)6)) >> (((/* implicit */int) arr_0 [i_0]))))));
                    var_18 = ((/* implicit */signed char) arr_0 [(short)2]);
                    var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)58812)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 4] [i_1 + 3])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_2))), (((/* implicit */long long int) var_10))))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((var_12) - (18446744073709551601ULL)))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_3))) << (((/* implicit */int) ((((/* implicit */int) (short)32747)) == (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) min((var_9), (max((var_5), (((/* implicit */short) var_0))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24717))) : (var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? ((+((-(((/* implicit */int) var_3)))))) : (((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))));
                arr_11 [i_3 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_8 [i_3 + 1]))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)58812)), (var_14)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((-(((/* implicit */int) arr_0 [i_4]))))))));
            }
        } 
    } 
}
