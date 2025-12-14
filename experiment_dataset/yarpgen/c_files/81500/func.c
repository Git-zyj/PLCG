/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81500
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
    var_17 = var_15;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (short)-8280)))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)-25);
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                            var_18 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)255)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
