/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95639
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
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_17))), (((((/* implicit */int) (unsigned short)40768)) >> (((var_8) - (4654487782757139817ULL)))))))) ^ (((max((var_13), (18446744073709551588ULL))) ^ (((unsigned long long int) var_14))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) min((var_17), (((int) arr_0 [i_1]))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(max((arr_2 [i_0]), (((((/* implicit */_Bool) arr_3 [3ULL] [i_1] [i_2])) ? (((/* implicit */long long int) var_18)) : (arr_1 [i_0]))))))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((((~(arr_1 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_2])) != (var_12)))))) : (((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) : (arr_4 [(_Bool)1] [i_2]))))))));
                }
            } 
        } 
    } 
}
