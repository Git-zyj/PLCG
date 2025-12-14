/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60668
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)15720)))))));
        arr_2 [i_0 + 3] [i_0 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_16))))) : (max((462745556), (-462745563))))) + (((/* implicit */int) (unsigned short)16376))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1 + 1] [i_1] = ((/* implicit */signed char) arr_6 [i_1 + 1] [i_1]);
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */long long int) (~(1610612736U)));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) > (var_3))))));
        var_22 = (+(((unsigned int) arr_5 [i_1 - 1])));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) 462745556)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_18 [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_3]))));
                    var_23 = ((/* implicit */signed char) (!(((var_5) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_2])) < (((/* implicit */int) arr_15 [i_2]))))))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) arr_14 [i_2] [i_3 - 1] [i_4])))), ((+(((/* implicit */int) (unsigned short)47949))))))))));
                    var_25 = ((/* implicit */unsigned char) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                }
            } 
        } 
    } 
}
