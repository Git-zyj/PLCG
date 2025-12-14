/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64388
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
    var_15 = ((/* implicit */unsigned short) var_9);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned int) var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_4 [i_0] [8LL]))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1550386693278469520LL)) ? (((/* implicit */int) ((unsigned short) ((var_0) << (((arr_0 [i_0 - 1]) - (5955014019967999693LL))))))) : (((/* implicit */int) (short)24537))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_1] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) 2147483647);
                                arr_14 [i_0] [(unsigned short)6] [i_2] [i_1] [i_3] [8] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)56890));
}
