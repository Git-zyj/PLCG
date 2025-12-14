/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69571
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
    var_13 = ((/* implicit */short) (+(min(((-(((/* implicit */int) (short)4965)))), (((/* implicit */int) max((var_11), (((/* implicit */short) var_3)))))))));
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 &= ((/* implicit */long long int) (-(253952)));
                    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (+(var_12)))), (((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) (signed char)-117)), (arr_5 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54693)))))));
                }
            } 
        } 
    } 
}
