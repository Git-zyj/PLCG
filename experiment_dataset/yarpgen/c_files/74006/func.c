/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74006
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((arr_0 [i_0]) & (((/* implicit */long long int) (((~(arr_2 [i_0] [i_2]))) >> (((((/* implicit */int) (short)13387)) - (13381))))))));
                    var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (var_7)))) ? (((/* implicit */long long int) var_11)) : (max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)172)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) <= (var_10)))) <= (((/* implicit */int) ((7340032) <= (-7340053)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
}
