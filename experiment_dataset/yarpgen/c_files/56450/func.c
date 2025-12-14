/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56450
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) -1309733759);
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50389))) | (max((((/* implicit */long long int) -1309733759)), (var_1)))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_0] [i_0])))))))));
                var_21 = ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_1] [i_0])), (min((var_15), (((/* implicit */long long int) var_14))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_22 = var_10;
                    var_23 = ((/* implicit */signed char) (-(((long long int) min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */int) arr_5 [i_2])))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_1);
    var_25 = ((/* implicit */_Bool) var_7);
}
