/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64500
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
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_6))))) : (arr_2 [i_0] [11LL] [i_2])))));
                    var_13 = ((/* implicit */unsigned char) ((min((min((var_7), (((/* implicit */long long int) (unsigned char)121)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) < (((/* implicit */long long int) ((2308335035U) << (((((/* implicit */int) (short)24810)) - (24793))))))));
                }
            } 
        } 
    } 
}
