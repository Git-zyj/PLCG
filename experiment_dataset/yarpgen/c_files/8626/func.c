/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8626
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = (!(((/* implicit */_Bool) max((14571998859271326889ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_0] [i_0]))))));
                    var_14 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(unsigned short)7] [i_1]))))), (min((((var_4) ? (arr_3 [i_0] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1]))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-12))))) + (var_13)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
}
