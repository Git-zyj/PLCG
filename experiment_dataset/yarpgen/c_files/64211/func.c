/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64211
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 &= ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned short)8449)))) << (((((var_5) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) - (27991))));
                arr_6 [0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_9 [i_2]), (arr_9 [i_2 - 1]))))));
                arr_13 [i_2] [i_2] &= ((/* implicit */unsigned long long int) (unsigned char)164);
            }
        } 
    } 
}
