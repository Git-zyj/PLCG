/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83895
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)239);
                                arr_14 [i_1] [(unsigned short)18] [i_2 + 1] [i_1] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) var_15))), (max((1005792718101893502LL), (((/* implicit */long long int) var_19))))))) != (((unsigned long long int) var_3))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                var_21 = ((/* implicit */unsigned short) 563057224821051315LL);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (short)-32651);
                            arr_20 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (short)-32650);
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) arr_4 [i_1] [1LL] [1LL]);
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_15);
}
