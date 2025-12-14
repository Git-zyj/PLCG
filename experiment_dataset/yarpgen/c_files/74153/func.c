/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74153
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
    var_11 *= ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)43)) >= (((/* implicit */int) (unsigned char)79))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [5ULL] = ((/* implicit */unsigned long long int) var_9);
                            var_13 = min((((/* implicit */int) var_7)), (arr_2 [i_0]));
                            arr_13 [i_3 - 2] [i_3] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)79)) << (((((/* implicit */int) (short)-32767)) + (32776))))), (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) arr_6 [i_3 - 2] [i_2 - 1] [i_3] [i_2 - 1])) : (arr_7 [i_3] [i_2 - 1] [i_2 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
