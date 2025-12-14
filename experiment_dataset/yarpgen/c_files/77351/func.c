/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77351
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = arr_3 [i_0] [i_0] [i_0];
                var_12 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)103))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (unsigned short i_3 = 4; i_3 < 8; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_2 [(unsigned char)8])) <= (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [7] [i_3] [i_4] [i_5]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [9] [9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))) ? (2U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3] [i_3]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_2 + 1] [i_3 + 1])))))));
                            arr_18 [i_2] [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3 - 3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [4]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [(unsigned char)1] [(unsigned char)7])))), (((/* implicit */int) arr_0 [i_2] [i_2])))))));
                var_16 += ((/* implicit */_Bool) arr_9 [5LL]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (unsigned char)76);
}
