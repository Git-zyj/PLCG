/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69025
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                arr_5 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)2)))))) / (min((arr_3 [i_0] [3ULL]), (((/* implicit */unsigned long long int) var_6))))))));
                var_14 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))) > (var_6)))), (((((/* implicit */_Bool) 5636068448731677754ULL)) ? (1158037500U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-29))))) > (((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_0 + 2])))));
                arr_6 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) arr_2 [i_0] [i_0 + 2])));
            }
        } 
    } 
    var_16 = var_2;
    var_17 = ((/* implicit */unsigned int) var_6);
}
