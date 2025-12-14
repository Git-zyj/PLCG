/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94549
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
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-11))))) : (var_12)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) ((82746171U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_16 = ((/* implicit */unsigned long long int) 1378786897);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)19326);
                        arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) var_8);
                        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                    }
                }
            } 
        } 
        var_18 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))));
        var_19 += ((/* implicit */unsigned char) var_8);
    }
}
