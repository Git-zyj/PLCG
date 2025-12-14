/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86091
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1])) + (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) / (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_1 + 1])))))) ? (((/* implicit */int) min((arr_2 [i_0 + 2] [i_1 - 1] [i_1 + 1]), (arr_2 [i_0 + 2] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) min((arr_2 [i_0] [i_0 - 1] [i_1]), (arr_2 [i_0] [i_0 - 1] [5]))))));
                var_12 = ((unsigned long long int) min(((short)-1), ((short)-32767)));
                var_13 = ((/* implicit */signed char) ((int) ((short) arr_2 [i_0] [i_0] [i_0 + 2])));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */_Bool) 4384162783760287948LL)) ? (5281595592410907671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) ((short) (short)-13564)))))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (var_1))))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) != (min((var_6), (((/* implicit */long long int) var_8))))))))));
}
