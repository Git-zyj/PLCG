/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57722
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) 1022634889U);
                    var_14 = 3272332396U;
                }
            } 
        } 
        arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)97)) ? (((((/* implicit */unsigned long long int) 4294967295U)) + (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) 1022634889U)));
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0]));
        arr_8 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)181))));
        var_15 |= ((/* implicit */signed char) 2462870199U);
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            for (signed char i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                for (long long int i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_3]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4]))) | (1022634894U))))));
                        var_17 -= ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_10 [i_3] [i_3]))));
        arr_18 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]) >> (((3372315872U) - (3372315860U)))))) : (var_10)));
    }
    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        var_19 = ((unsigned char) ((((/* implicit */_Bool) 3272332406U)) || (((/* implicit */_Bool) (short)32754))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-57)) ? (((arr_20 [i_7 + 2] [i_7 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((786432LL), (((/* implicit */long long int) arr_19 [i_7]))))) && (((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_19 [i_7])))))))))));
        var_21 += ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_5)))));
        var_22 = (unsigned char)128;
        var_23 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-48)))))));
    }
    var_24 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((var_3) << (((var_2) - (7582778043139855942LL)))))) ? (max((var_7), (((/* implicit */unsigned int) (unsigned char)48)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1022634889U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205)))))))))));
}
