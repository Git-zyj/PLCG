/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9829
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
    var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0 + 1] |= ((/* implicit */signed char) var_14);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 + 1] [i_2 + 2]))) <= (arr_4 [i_0 + 1] [i_2 + 2] [i_4 - 1]))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) (signed char)-95))));
                                arr_16 [i_0] [i_1 + 1] [i_3] [i_3] [(unsigned char)19] [i_3] = ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_3] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) (signed char)-76);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_4 [i_5] [i_6] [i_7]), (((var_15) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30355)))))))), (max((arr_24 [i_5] [i_5] [i_7]), (((/* implicit */long long int) ((short) 746371316781406832LL)))))));
                    arr_26 [i_6] [i_6] [i_7] &= ((/* implicit */unsigned char) arr_13 [i_5] [22]);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */signed char) ((int) (((_Bool)0) ? (14613583780531483487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
}
