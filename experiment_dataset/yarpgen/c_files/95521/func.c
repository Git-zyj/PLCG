/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95521
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_9);
                                arr_13 [i_0] [i_1] [(unsigned short)8] [(unsigned char)7] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)79)) ? (133693440U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                                arr_14 [i_1] [i_2] = max((arr_1 [i_1] [i_4]), (((/* implicit */unsigned long long int) arr_6 [18U] [i_3] [2U] [i_3])));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0 - 2] [i_0] = arr_0 [i_0 - 3];
                arr_16 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_1]))) : (((var_9) >> (((((/* implicit */int) var_10)) - (23))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_17 [i_5]))));
        arr_21 [i_5] [i_5] = ((unsigned char) (~(((/* implicit */int) (_Bool)1))));
        arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) : (arr_20 [i_5])));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((7305946539010131781ULL), (((/* implicit */unsigned long long int) (unsigned char)54))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((+(var_7)))));
    var_17 = ((/* implicit */unsigned int) var_6);
}
