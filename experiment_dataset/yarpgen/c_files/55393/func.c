/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55393
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))) << (((((/* implicit */int) var_14)) - (22895))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [8ULL] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_4)))));
                    var_21 = ((/* implicit */unsigned char) ((_Bool) max((arr_1 [i_0] [i_1]), (arr_1 [i_2] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_2 [i_3] [i_4] [i_3])) : (var_11)))) ? (max((arr_2 [i_3] [i_4] [i_3]), (((/* implicit */long long int) arr_7 [i_3] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_14))))));
                arr_14 [i_3] [i_3] = arr_4 [i_3] [15] [i_4];
            }
        } 
    } 
}
