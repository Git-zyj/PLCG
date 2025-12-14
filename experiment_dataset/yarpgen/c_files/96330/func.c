/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96330
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
    var_13 = ((/* implicit */unsigned short) -2147483646);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max(((~(min((((/* implicit */int) var_0)), (arr_4 [i_2]))))), (((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_2 [i_1])))) | (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-25579)))))))))));
                    arr_7 [i_1] [i_0] = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
}
