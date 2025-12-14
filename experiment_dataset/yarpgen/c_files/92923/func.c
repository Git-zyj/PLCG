/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92923
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
    var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_8)), ((+(var_11))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_9)), (var_2))))))));
    var_14 |= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) max((2071324176U), (2071324175U)));
                arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) max(((-(arr_3 [i_0] [i_0 + 2]))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-32743))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((var_6), (((/* implicit */unsigned long long int) 61619765U))))))))))));
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_3 [i_0 + 2] [i_0 + 2]), (arr_3 [i_0 + 1] [i_0 - 1])))), (max((((/* implicit */unsigned long long int) var_7)), (var_3)))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_7);
    var_18 = ((/* implicit */unsigned short) var_1);
}
