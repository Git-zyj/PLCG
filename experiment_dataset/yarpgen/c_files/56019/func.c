/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56019
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
    var_17 = ((/* implicit */signed char) (~(((((/* implicit */int) var_2)) / (((((/* implicit */int) (short)32767)) * (((/* implicit */int) (short)32767))))))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */short) var_8)), (var_13)));
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) var_14)), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min((var_4), (((/* implicit */short) var_14)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [(short)20] = ((/* implicit */signed char) ((((/* implicit */int) min(((short)-16), ((short)16)))) * (((/* implicit */int) ((signed char) arr_0 [i_0 - 1] [i_0 + 1])))));
                arr_7 [(signed char)1] [(signed char)1] [i_0] = min((((/* implicit */short) var_1)), (min((arr_5 [i_0 - 2]), (arr_1 [i_0 - 2] [i_1]))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */short) arr_3 [i_1])), ((short)-18558))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_3 [i_0 - 1]))))) : (((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) + (((/* implicit */int) var_7)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-25938), (((/* implicit */short) max((arr_3 [i_0]), (arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) ((short) (short)12553))) : (((((/* implicit */int) ((short) arr_8 [i_2] [i_1] [i_0 - 1] [i_0 + 1]))) / (((/* implicit */int) max((arr_1 [i_0 + 1] [i_0]), (var_13))))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 2])) : (((/* implicit */int) arr_10 [i_0 - 2])))) : (((/* implicit */int) arr_10 [i_0 + 1]))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    arr_16 [i_3] = arr_12 [i_3] [i_3] [i_1] [i_0];
                    var_22 = ((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_10 [i_0 - 2])))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_14 [(signed char)14] [i_1] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) var_10)))) + (25261))) - (13)))));
                    var_23 = ((signed char) ((signed char) arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0]));
                }
            }
        } 
    } 
}
