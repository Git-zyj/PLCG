/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81
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
    var_17 = var_3;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) 0LL)), (arr_7 [i_0] [i_2 - 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19868)) + (var_5))))));
                    arr_11 [i_0] [i_0] [i_0] = ((unsigned char) arr_4 [i_2 + 2] [i_2 - 1] [(unsigned short)5]);
                    arr_12 [i_0] [i_0] [i_2 - 1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (-1564013803) : (((/* implicit */int) arr_2 [i_2 - 1] [i_1])))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [0] [i_1])) : (-207727406)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_7);
    var_19 &= ((((((/* implicit */long long int) var_5)) == (min((((/* implicit */long long int) var_12)), (-1LL))))) ? (min((((/* implicit */long long int) var_9)), (18014398509481983LL))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
}
