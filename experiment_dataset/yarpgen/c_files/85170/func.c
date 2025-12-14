/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85170
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((short)12766), (((/* implicit */short) (unsigned char)195))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)32750)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (var_1) : (var_0))), (((/* implicit */long long int) var_6))))) : (max((var_9), (((/* implicit */unsigned long long int) (~(var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_0])))), ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned char)56))));
                            var_20 = ((/* implicit */unsigned long long int) arr_10 [i_1 - 2] [i_1]);
                            var_21 = ((/* implicit */short) max((((/* implicit */int) max((arr_2 [i_1 - 3] [i_1 - 3]), (arr_2 [i_1 + 1] [i_1 - 1])))), ((-((~(((/* implicit */int) arr_10 [i_0] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
