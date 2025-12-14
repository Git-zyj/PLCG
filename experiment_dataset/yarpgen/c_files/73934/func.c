/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73934
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
    var_12 -= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_0);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))) : (((/* implicit */unsigned long long int) -1789339667))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (978956765U) : (16U)));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 9151314442816847872LL)))));
    }
    var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)140))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10443)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)81))))))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) -6861672269807681193LL))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) ^ (3817999168U)))) : (max((167110395325747267LL), (var_3)))))));
}
