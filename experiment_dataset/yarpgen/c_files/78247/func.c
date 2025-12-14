/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78247
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) arr_8 [i_1] [i_2] [i_3] [i_4]));
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) var_15);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((unsigned long long int) 10444214099683674255ULL);
                }
            } 
        } 
    } 
    var_19 = var_14;
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */unsigned char) var_7);
}
