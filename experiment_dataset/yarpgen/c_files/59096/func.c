/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59096
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_2])))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_1 [i_0] [i_0]) : (arr_1 [10LL] [i_1]))))))));
                    var_16 = ((/* implicit */long long int) min((((short) ((long long int) -9026824182585459966LL))), (((/* implicit */short) arr_3 [i_0] [2LL] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                arr_13 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_14)))) ? (-2842632899037497164LL) : (min((((/* implicit */long long int) var_0)), (var_12)))))) ? (-3231427113988744858LL) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)166))))))));
                arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) var_14);
                var_17 = ((/* implicit */signed char) min((max((arr_12 [i_4]), (arr_12 [i_3]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_13)) : (arr_12 [i_4])))));
            }
        } 
    } 
}
