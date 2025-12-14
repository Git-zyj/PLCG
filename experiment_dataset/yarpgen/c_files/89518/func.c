/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89518
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
    var_19 = var_0;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((int) (-(var_7))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min(((+(arr_8 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_0 + 1] [8LL])) ? (((/* implicit */long long int) 1480038754)) : (6364325761882868997LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (-(-6364325761882869012LL)))) ? (((/* implicit */long long int) 2974447459U)) : (6364325761882869012LL))) : (min(((+(7942716871718202418LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))))))));
}
