/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84360
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_0] [(unsigned short)8] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((13658418028821987821ULL), (((/* implicit */unsigned long long int) ((1130268240753447221ULL) <= (14431255804571525195ULL))))));
                                arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_4] [i_0]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) (((~(arr_8 [i_0] [1] [i_0] [i_0]))) / (min((((/* implicit */long long int) var_10)), (arr_8 [i_2] [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned short) 17316475832956104386ULL);
}
