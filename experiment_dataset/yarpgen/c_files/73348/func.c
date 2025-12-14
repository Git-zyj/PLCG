/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73348
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (var_10) : (((/* implicit */int) (unsigned short)10024))))))))) : (var_9)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((int) arr_3 [i_0] [i_1]));
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_2] [i_0]))) ? (max((arr_7 [i_2] [i_0]), (((/* implicit */long long int) (unsigned short)55513)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_2] [i_1]))))))))));
                }
            } 
        } 
    } 
}
