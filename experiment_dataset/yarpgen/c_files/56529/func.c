/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56529
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)-127))))));
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_0 [i_1 + 1])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 + 3])))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) arr_10 [(_Bool)1] [i_2 + 2] [(_Bool)1]))))));
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)119)));
            }
        } 
    } 
}
