/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84321
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2] [(unsigned short)10] [6]))))))));
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (max((((((/* implicit */int) (short)22407)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */short) var_2))))))) : (max((max((-2011893344), (var_8))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))))))));
                    var_12 -= ((/* implicit */int) arr_5 [i_0] [8U] [i_0]);
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_4 [i_0]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_9))));
    var_15 = ((/* implicit */_Bool) ((long long int) (short)-15192));
}
