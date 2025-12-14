/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77863
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_12 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 = max((min((min((((/* implicit */unsigned long long int) (signed char)-100)), (33554176ULL))), (max((((/* implicit */unsigned long long int) var_4)), (10556429565233982058ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 2] [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                    var_14 = ((/* implicit */unsigned int) var_10);
                    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [i_0 + 2])))), ((+(((/* implicit */int) arr_5 [i_0] [i_0 - 2]))))));
                }
            } 
        } 
    } 
    var_16 = max((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) (unsigned short)53655)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) min((var_1), (((/* implicit */short) ((_Bool) var_3)))))));
    var_17 = ((/* implicit */long long int) var_1);
}
