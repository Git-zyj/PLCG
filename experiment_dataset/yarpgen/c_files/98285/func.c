/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98285
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), ((~(((long long int) (-(((/* implicit */int) arr_5 [i_2])))))))));
                    var_20 = ((int) arr_4 [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */short) arr_4 [(unsigned short)19]);
                var_22 = ((/* implicit */int) (~(arr_10 [i_4])));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (signed char)19)))) : (((/* implicit */int) ((short) var_0))))), ((~((-(((/* implicit */int) var_10))))))));
    var_24 = ((/* implicit */unsigned short) (short)-27730);
}
