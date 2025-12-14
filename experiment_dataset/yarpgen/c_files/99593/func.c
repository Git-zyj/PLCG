/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99593
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
    var_13 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned char) arr_4 [i_3]);
                            var_15 = ((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0])))))) ^ (arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]));
                            arr_11 [i_0] [i_2] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]);
                            arr_12 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) (-(arr_4 [i_0]))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_3 [i_0 - 1]) >> (((/* implicit */int) ((unsigned short) arr_9 [i_0 + 1] [i_0] [i_0] [(short)2]))))))));
            }
        } 
    } 
}
