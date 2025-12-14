/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82317
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_10))) - (((/* implicit */int) (unsigned char)16))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((unsigned char) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), ((-(min((1125899906842623ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), ((+(-5435853712952574702LL)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) (unsigned short)12537);
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((long long int) arr_1 [i_1]))))) | (((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))));
        arr_6 [13LL] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), ((~(((int) (unsigned char)29))))));
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        var_19 |= ((/* implicit */unsigned long long int) arr_7 [i_2]);
        arr_9 [i_2] = ((/* implicit */int) ((_Bool) arr_1 [10]));
        /* LoopNest 2 */
        for (long long int i_3 = 4; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                {
                    var_20 += var_11;
                    var_21 = ((/* implicit */unsigned int) arr_13 [i_2] [(unsigned char)7] [1ULL] [13ULL]);
                    var_22 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_8 [i_2] [i_4 - 2])) + (((int) arr_12 [i_2] [i_2] [4LL] [i_4]))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_0)), (((long long int) var_11))));
    var_24 = ((/* implicit */unsigned short) var_5);
}
