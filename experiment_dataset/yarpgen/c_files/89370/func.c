/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89370
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [6ULL] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                    arr_9 [i_0] [(signed char)10] [i_2] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((signed char) arr_6 [3ULL] [(signed char)1] [i_0])))))));
                    arr_10 [4ULL] [4ULL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55)))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) ^ (arr_4 [i_0])))) && (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) : (var_5)))))));
    var_16 = ((/* implicit */unsigned long long int) (signed char)15);
}
