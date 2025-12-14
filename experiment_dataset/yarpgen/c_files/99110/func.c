/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99110
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((min(((+(arr_3 [i_0]))), (((((/* implicit */_Bool) arr_0 [(unsigned short)5] [i_0])) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */int) arr_4 [20ULL] [i_0] [i_0])))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(min((max((arr_0 [i_2] [i_2]), (((/* implicit */long long int) arr_7 [(unsigned short)6] [(unsigned short)6])))), (((/* implicit */long long int) (-(2270534132U))))))));
                            var_13 = ((/* implicit */signed char) (+((-(arr_3 [(_Bool)1])))));
                            arr_13 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */int) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14084)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(var_8)))) ? ((((_Bool)0) ? (2244453552U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
}
