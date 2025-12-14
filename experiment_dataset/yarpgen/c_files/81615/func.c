/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81615
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = (-(max((var_11), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32270)) + (((/* implicit */int) (unsigned short)32270))))))));
                    arr_6 [i_1] [i_1] [i_1] [(unsigned char)0] |= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */int) arr_3 [i_0] [i_0])), (var_0))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) var_7);
                                arr_20 [i_3] [i_4] = ((min((max((arr_9 [(unsigned short)8] [i_5] [(short)12]), (((/* implicit */int) (unsigned char)74)))), (((var_6) ? (((/* implicit */int) var_10)) : (arr_14 [i_5]))))) | (((/* implicit */int) ((unsigned char) arr_11 [i_4] [i_4] [i_5 - 1] [3]))));
                                var_14 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30200)) || (((/* implicit */_Bool) ((signed char) arr_15 [(short)22] [4ULL] [i_5] [i_5] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_3] [i_4] = ((/* implicit */signed char) arr_10 [i_4] [i_3] [i_3]);
                arr_22 [i_4] = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_4] [i_3]);
            }
        } 
    } 
}
