/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90740
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
    var_10 = ((/* implicit */long long int) (-(-2137825201)));
    var_11 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_8);
                    var_13 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) -2137825201))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((int) var_8)));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) 2137825170);
        var_16 &= min((min((-2595432667947804599LL), (((/* implicit */long long int) (-(((/* implicit */int) (short)18446))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)6])) ? (((/* implicit */long long int) arr_8 [i_3])) : (9223372036854775807LL)))) ? ((-(-1727123360))) : (arr_8 [i_3])))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 1671651877)) ? (((/* implicit */long long int) 268435455)) : (-2595432667947804611LL)));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (-1141902723) : (-2137825201))) + (2147483647))) >> (((var_9) - (1773601027))))))));
        arr_12 [7] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -2595432667947804593LL)))) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) 1141902739)) : (18446744073709551595ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_4]))));
    }
}
