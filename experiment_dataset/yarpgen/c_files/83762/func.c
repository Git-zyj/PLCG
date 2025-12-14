/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83762
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
    var_12 = max((((/* implicit */int) var_7)), ((+((~(((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(((((/* implicit */int) arr_7 [i_0] [i_0 - 1] [(short)0] [(short)0])) / (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((var_2) > (((/* implicit */long long int) 0U))))) : (((/* implicit */int) var_11))))));
                    arr_9 [i_0] = ((((arr_4 [i_2] [i_1] [i_0 - 1]) % (-8797071909390420712LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2] [i_2]))) == (arr_4 [i_2] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max(((unsigned short)57060), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_8))))))))))));
}
