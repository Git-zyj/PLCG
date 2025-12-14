/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75004
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
    var_19 = ((/* implicit */short) var_12);
    var_20 |= min(((+((+(var_9))))), (((/* implicit */unsigned int) (_Bool)1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)10] [i_0]))) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8359770150827097480LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                var_21 = ((/* implicit */unsigned char) (-(((arr_1 [i_0] [i_1 - 1]) & (arr_1 [i_0] [i_1 + 3])))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_1 + 2])))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_16))) : (((/* implicit */unsigned long long int) max((6277920659769385433LL), (((/* implicit */long long int) var_12))))))));
}
