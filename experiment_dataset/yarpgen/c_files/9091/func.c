/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9091
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
    var_20 = ((/* implicit */unsigned long long int) 5428171415243532978LL);
    var_21 = ((/* implicit */long long int) var_3);
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) >= (var_17)))), (var_17))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_6 [6LL] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 4398046511104LL))))) ? (min((((/* implicit */long long int) arr_2 [i_2] [i_0] [i_0])), (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))), (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)48979)))))))));
                    arr_8 [4ULL] [i_0] [i_0] [i_0] = ((/* implicit */short) max((arr_3 [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned char) ((signed char) arr_3 [i_0 - 1] [7LL] [i_0 - 1])))));
                }
            } 
        } 
    } 
}
