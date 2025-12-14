/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7565
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_3] [i_2]);
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_9 [i_3 + 2] [i_3 - 3] [i_3 - 2] [i_3] [i_3 + 2] [(_Bool)1] [i_3 + 2]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) - (32395)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 6; i_6 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(3066190053058985911ULL))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((short) 15380554020650565684ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_3);
}
