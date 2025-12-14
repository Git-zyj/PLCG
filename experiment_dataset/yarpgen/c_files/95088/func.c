/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95088
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_0 [i_0])))), (((var_2) >> (((3240252778U) - (3240252771U)))))))), (max((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */long long int) arr_0 [i_0])))))))));
                var_13 = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_3] = arr_10 [i_3];
                var_14 = ((/* implicit */signed char) arr_10 [i_3]);
                arr_12 [(unsigned short)20] [i_3] [i_3] = ((/* implicit */short) arr_5 [20ULL]);
            }
        } 
    } 
    var_15 = ((/* implicit */short) (-(((/* implicit */int) var_12))));
    var_16 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_5))));
                    var_18 *= ((/* implicit */short) ((-430174175) - (((((((/* implicit */int) arr_9 [i_4] [i_5])) - (430174175))) / (((430174166) ^ (((/* implicit */int) arr_17 [i_4]))))))));
                }
            } 
        } 
    } 
}
