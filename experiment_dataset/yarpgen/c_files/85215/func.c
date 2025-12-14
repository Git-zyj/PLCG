/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85215
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */int) (short)-11741))))) : (((long long int) ((((((/* implicit */int) (short)-9971)) + (2147483647))) >> (((arr_0 [i_0]) - (153642868))))))));
        var_17 = ((/* implicit */int) 1265502908U);
        arr_2 [i_0] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((unsigned int) (+(3488931255U))))));
        var_18 += ((/* implicit */unsigned short) min((((284333045U) | (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (~(arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_1 + 1]))) ? (((/* implicit */unsigned int) var_8)) : (var_2)));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((((806036025U) / (arr_1 [i_1 + 2]))), (((unsigned int) arr_5 [i_1 + 3]))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1 + 3]);
    }
    var_20 = ((/* implicit */short) ((var_13) > (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) (short)32604)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4010634251U))))))))));
    var_21 += ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_22 = arr_12 [i_2] [(unsigned short)20];
                arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) arr_11 [i_2 + 1] [i_2 - 3]);
            }
        } 
    } 
}
