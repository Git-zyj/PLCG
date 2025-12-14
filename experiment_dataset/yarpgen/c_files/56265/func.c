/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56265
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) 2835226271U);
                var_10 &= ((/* implicit */int) ((((/* implicit */_Bool) max((2835226271U), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_1]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_0)))) : (((/* implicit */int) ((arr_4 [i_1 + 2]) > (arr_4 [i_0]))))))) : (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 2])) ? (1459741024U) : (((/* implicit */unsigned int) var_4))))));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_1 + 2])))) ? ((~(arr_0 [i_1 - 2]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)147)), (1459741024U))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 11465996315448863916ULL)) ? (2835226262U) : (2835226262U)))) ^ (((long long int) (signed char)(-127 - 1)))))) ? (min((var_4), ((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) ((signed char) (unsigned short)47232)))));
    var_13 = ((/* implicit */int) var_2);
}
