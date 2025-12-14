/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69245
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((arr_1 [5U] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)1]))))), (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 + 1] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_2] [(short)14])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0])))))));
                    var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (signed char)3)) ? (max((min((((/* implicit */int) (signed char)-21)), (-1))), (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (short)-1))))));
                    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((1735240697) <= (((/* implicit */int) (signed char)6)))) && (((/* implicit */_Bool) -1119093275)))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */long long int) 1048575U);
}
