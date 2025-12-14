/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94158
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
    var_10 = ((/* implicit */_Bool) ((max((((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) var_7)))) * (min((var_1), (((/* implicit */long long int) ((var_2) >= (var_1))))))));
    var_11 = ((/* implicit */short) var_9);
    var_12 = ((/* implicit */signed char) var_1);
    var_13 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [i_0 + 3] [i_0]), (arr_2 [i_0 + 1] [i_0])))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_7)))))));
                    arr_10 [i_0] [(unsigned short)0] [i_0 + 4] [i_0 - 1] &= ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (arr_3 [2LL])))) <= (max((max((((/* implicit */long long int) (unsigned short)0)), (var_8))), (((/* implicit */long long int) var_9))))));
                }
            } 
        } 
    } 
}
