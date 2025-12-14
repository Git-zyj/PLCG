/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77541
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
    var_19 = ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1 - 1] [i_1 + 1] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4546)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1])) : (0ULL))))))), (max((((/* implicit */unsigned int) var_5)), (2277139471U))));
                var_20 = ((/* implicit */unsigned int) (signed char)32);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_10))));
                    var_22 ^= ((/* implicit */unsigned short) arr_1 [i_0]);
                }
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(269242084U)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)4608)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_17), (arr_7 [(signed char)0]))))))))));
            }
        } 
    } 
}
