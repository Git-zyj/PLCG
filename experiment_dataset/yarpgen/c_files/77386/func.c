/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77386
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
    var_17 = ((/* implicit */long long int) var_0);
    var_18 = ((/* implicit */unsigned short) ((signed char) (short)-12109));
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)14] [i_1] [i_1 - 1] [i_1] = var_10;
                    arr_8 [i_1] [i_1] [(short)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)1401))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (signed char)12)) && (((/* implicit */_Bool) (short)(-32767 - 1))));
                                var_20 = ((/* implicit */unsigned short) var_2);
                                var_21 -= ((/* implicit */signed char) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((var_7) != (arr_2 [i_0 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
