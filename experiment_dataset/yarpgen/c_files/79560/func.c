/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79560
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
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    var_19 |= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((-1591873655336005629LL) < ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) -2022082609))))))) : ((-(((/* implicit */int) ((unsigned char) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (arr_0 [i_0])))));
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-996962536)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (-1) : (((/* implicit */int) (_Bool)1)))) : (696047372)));
                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)0)))));
                arr_6 [i_0] [12LL] [i_1] = ((/* implicit */short) var_14);
            }
        } 
    } 
}
