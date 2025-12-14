/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91377
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
    var_12 ^= ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) (short)-20155)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_1] = ((/* implicit */signed char) max((-5424981431317228772LL), (((/* implicit */long long int) (short)13))));
                arr_7 [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)14162))));
                arr_8 [(unsigned short)10] [i_1] = ((/* implicit */signed char) var_9);
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (1162493465U) : (((/* implicit */unsigned int) -1876563733))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_0)))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1]))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [10LL])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1971732334)) && (((/* implicit */_Bool) var_6)))))))), (((unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((var_5) & (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2060381638))))))) < (max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (var_1)))));
}
