/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55115
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = min((min((max((arr_2 [i_2] [i_0]), (((/* implicit */unsigned long long int) 9045083242556799248LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)9545))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) arr_4 [7LL] [i_1] [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))) : (arr_2 [i_1] [i_1]))))));
                    var_16 = max(((+(var_4))), ((~(arr_6 [(short)2]))));
                    var_17 = (~((~(((((/* implicit */_Bool) var_1)) ? (var_0) : (var_10))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) (short)-16059)) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -4274156398997477751LL)) : (var_14)))))) ? (((((/* implicit */_Bool) ((signed char) var_5))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (var_4)))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
}
