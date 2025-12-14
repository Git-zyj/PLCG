/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75873
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (-2311006724544465704LL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */int) ((unsigned char) arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] &= ((/* implicit */long long int) arr_9 [19LL] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_11 = ((/* implicit */long long int) max((var_11), (((max((((/* implicit */long long int) ((unsigned char) (unsigned char)0))), (-2311006724544465688LL))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_19 [i_6] [i_5] [i_2] [18] [i_0] = var_9;
                                arr_20 [i_2] [i_5] [i_6 + 1] = -1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
