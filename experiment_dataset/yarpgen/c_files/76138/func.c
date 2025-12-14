/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76138
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((signed char) min(((signed char)-64), ((signed char)86))));
        arr_3 [i_0] = min((((/* implicit */short) ((((10U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32704))))) <= ((+(4294967291U)))))), (var_3));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_5), (var_10)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_14 [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) (unsigned short)9677)), (4294967288U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1])))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_5])) >= (((/* implicit */int) arr_18 [i_1] [i_4 - 1] [i_3] [i_4] [i_4]))));
                                arr_20 [i_2] [i_2] = ((/* implicit */long long int) (~((~(arr_15 [i_1] [i_1] [i_4 - 1] [i_1] [(short)12])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_3])) + (2147483647))) >> (((min((((/* implicit */long long int) var_5)), (-5289324703078365295LL))) + (5289324703078365304LL)))))), (max((((/* implicit */long long int) var_14)), (arr_6 [i_1] [i_2])))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */short) var_9);
}
