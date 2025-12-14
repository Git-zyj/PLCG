/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67178
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_4))) & ((~(var_4)))))) ? ((~(((var_4) * (var_3))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) || ((_Bool)1))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 2]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1727097986U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) || ((!(((/* implicit */_Bool) 1617189766U))))));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * ((+(((/* implicit */int) arr_7 [i_2] [i_0] [i_0] [i_0]))))))), (((var_8) - (var_2)))));
                    var_14 = ((/* implicit */long long int) (~(min((var_0), (4294967295U)))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) var_0);
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) (signed char)127);
    }
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_15 |= ((/* implicit */unsigned int) min((3170001550298716789LL), (-3170001550298716790LL)));
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_9)) : (arr_14 [i_4]))))))), (min((((/* implicit */long long int) ((int) var_9))), (-3170001550298716814LL)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_7) : (((/* implicit */unsigned int) var_9)))) >> (((var_1) + (1929379887558437658LL))));
        var_18 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) / (arr_17 [i_5])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] [13U] = ((/* implicit */long long int) (signed char)124);
        arr_22 [i_6] = ((/* implicit */int) var_1);
        arr_23 [i_6] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1))) | (((/* implicit */long long int) (~(var_7)))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-126)))))));
    }
    var_19 += var_5;
    var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) ^ (var_0)))) == (((((/* implicit */unsigned long long int) -3170001550298716816LL)) / (var_4))))) ? (var_4) : (((/* implicit */unsigned long long int) var_0))));
}
