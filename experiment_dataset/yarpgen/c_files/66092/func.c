/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66092
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_3 [i_2])))))))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) ^ (arr_7 [i_0] [i_1] [i_2] [i_2]))))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_3 [i_1]))));
                    var_19 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (var_15))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((max((((arr_7 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */long long int) (short)6434)), ((-9223372036854775807LL - 1LL)))))) >> (((((((/* implicit */long long int) -1)) + (9223372036854775807LL))) - (9223372036854775762LL)))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_2 [10]))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
}
