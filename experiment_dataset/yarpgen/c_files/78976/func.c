/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78976
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned short)13)))))) > (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1961360191U) : (max((var_6), (1961360167U)))))));
        arr_3 [8U] |= ((/* implicit */unsigned char) ((((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (short)26824))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)44)))))));
        var_13 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_10)) * (((((/* implicit */int) arr_1 [i_0] [(unsigned char)10])) * (((/* implicit */int) arr_1 [i_0] [(short)6])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) && (((/* implicit */_Bool) 1961360201U)))))) : (var_9)));
                    arr_11 [i_3] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)1696)) && (((/* implicit */_Bool) var_11)))) && (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) var_2))))));
                }
            } 
        } 
        var_15 |= ((/* implicit */unsigned int) var_10);
    }
    var_16 = ((/* implicit */unsigned char) ((var_0) + (var_7)));
}
