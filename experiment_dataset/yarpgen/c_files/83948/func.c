/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83948
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = arr_0 [i_0] [9U];
                                var_15 = ((/* implicit */int) arr_1 [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_26 [i_6] [i_1] [i_5] [(_Bool)1] [i_1] [i_6] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                            arr_27 [i_6] [i_1] [i_1] |= ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_1]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= (signed char)24;
}
