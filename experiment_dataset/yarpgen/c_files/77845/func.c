/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77845
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
    var_15 = ((/* implicit */short) ((((((/* implicit */int) ((short) (+(((/* implicit */int) var_5)))))) + (2147483647))) << (((((((/* implicit */int) var_13)) + (58))) - (17)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 = max(((short)0), ((short)-23245));
                    arr_8 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9)))) && (((((/* implicit */int) (short)23245)) != (((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)12])) <= (((/* implicit */int) arr_3 [i_0 - 2])))))))));
                    var_17 = ((/* implicit */signed char) min(((short)23250), ((short)-23251)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), ((short)-23243)))))))));
                                arr_15 [i_0 - 2] = ((short) max((var_1), (min((((/* implicit */short) var_12)), (arr_1 [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
