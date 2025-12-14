/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71641
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
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_8)), (var_5))) - (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (var_13) : (((/* implicit */long long int) arr_2 [i_0 - 2]))))));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) var_14)))) ? ((+(arr_4 [i_0 + 3]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_4 [i_0 + 3]) : (((/* implicit */long long int) var_8))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((((var_5) < (((/* implicit */long long int) arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [3ULL]) <= (var_16))))) : (arr_4 [i_1 + 1]))), (((/* implicit */long long int) max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 3]))))));
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) var_15)) ^ (var_7))) : (((/* implicit */unsigned long long int) var_15)))) + (((/* implicit */unsigned long long int) ((((var_16) < (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_16) : (var_8)))) : (((var_6) % (((/* implicit */long long int) var_4))))))));
    var_20 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_21 ^= ((/* implicit */int) min((arr_6 [10LL]), (max((min((((/* implicit */unsigned long long int) var_8)), (arr_6 [18LL]))), (((/* implicit */unsigned long long int) arr_7 [8LL]))))));
        var_22 = ((/* implicit */int) arr_6 [i_2]);
    }
    var_23 = var_2;
}
