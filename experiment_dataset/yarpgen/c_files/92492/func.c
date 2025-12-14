/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92492
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_6 [i_2] [i_2] [i_2] [i_1]);
                    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))) | (arr_0 [i_0] [9ULL])))) ? (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (783078929) : (((/* implicit */int) (unsigned short)49261)))) : (-2121378340)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_7);
}
