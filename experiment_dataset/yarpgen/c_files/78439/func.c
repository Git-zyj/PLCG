/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78439
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned char) var_6)), (var_10)));
    var_12 = ((/* implicit */_Bool) min((max(((~(((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned char)122)) | (((/* implicit */int) var_5)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_5))))))));
    var_13 &= ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_2 [i_0]))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)4591)))))));
                var_15 ^= ((/* implicit */unsigned long long int) min((arr_0 [2LL] [2LL]), (min((arr_0 [i_0] [0ULL]), (arr_0 [i_0] [(signed char)0])))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (arr_2 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */unsigned long long int) max((arr_1 [i_1]), (arr_1 [i_0]))))));
            }
        } 
    } 
}
