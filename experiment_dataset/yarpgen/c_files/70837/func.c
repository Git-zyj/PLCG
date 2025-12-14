/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70837
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        var_20 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) - (arr_1 [i_0 + 1]))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) -6447344709790117031LL))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (14233037103150927452ULL))) : (arr_1 [i_1 - 1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 1])) ^ (((/* implicit */int) arr_3 [i_1 + 1])))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_1 + 1] [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (arr_2 [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1])))))) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1])))));
        arr_4 [i_1 - 1] = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_1 - 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)27991)))) + (arr_1 [i_1 - 1]))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_9 [i_2] = ((((/* implicit */_Bool) ((unsigned char) 511U))) ? (((unsigned int) arr_3 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294966785U)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) ((unsigned short) var_5)))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_2 [i_3 - 1] [i_3 - 2]))) * (((/* implicit */int) ((unsigned short) -615587744))))))));
                }
            } 
        } 
    }
}
