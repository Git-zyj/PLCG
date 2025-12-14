/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73842
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [9LL] [i_1] [i_1] = ((/* implicit */short) -5563001547684460542LL);
                arr_5 [11ULL] [(signed char)12] [i_0] = max(((~(((((/* implicit */_Bool) (short)-25927)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))), (arr_3 [i_0]));
                var_14 = ((((long long int) (_Bool)1)) == (((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned char)221)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) min((-5563001547684460558LL), (((/* implicit */long long int) 4171835851U))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) var_1)), (((int) (short)-1)))));
    var_16 = ((/* implicit */long long int) ((int) (((!(((/* implicit */_Bool) (signed char)-107)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (287171576)))))));
    var_17 = ((/* implicit */int) min((var_17), (var_8)));
}
