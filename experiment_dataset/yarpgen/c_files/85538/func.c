/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85538
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
    var_15 = var_10;
    var_16 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max(((~(var_6))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned short)14] [(unsigned short)8] [i_1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] = ((/* implicit */unsigned char) (-(var_9)));
                                arr_15 [i_1 + 1] [i_1] [i_3 + 2] [(unsigned char)2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max(((short)(-32767 - 1)), ((short)-25930)))), (((unsigned short) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */int) 5ULL);
}
