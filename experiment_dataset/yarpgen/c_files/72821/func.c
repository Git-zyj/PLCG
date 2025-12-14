/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72821
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
    var_11 ^= ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4))));
        arr_3 [i_0] = ((/* implicit */short) var_6);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_12 = var_3;
            var_13 = ((/* implicit */_Bool) (-((-((+(var_0)))))));
            var_14 = ((/* implicit */unsigned char) var_6);
        }
        for (short i_2 = 1; i_2 < 7; i_2 += 2) 
        {
            arr_9 [(_Bool)0] [(_Bool)0] [i_2] = ((/* implicit */short) ((16153679335063127397ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_1))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */_Bool) (+(var_4)));
            /* LoopNest 3 */
            for (short i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned char) (~(var_0)));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((var_4) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31797))) != (16153679335063127397ULL))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) var_0);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)));
    }
}
