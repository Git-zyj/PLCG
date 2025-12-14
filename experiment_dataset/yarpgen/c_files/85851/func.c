/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85851
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
    var_10 ^= ((/* implicit */unsigned int) ((max((((((/* implicit */int) var_0)) + (((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)32236)))))) + ((((-(((/* implicit */int) var_3)))) * ((+(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) (unsigned char)52);
                var_12 = ((/* implicit */unsigned char) max(((+(14143758501813497320ULL))), (((/* implicit */unsigned long long int) (~(arr_7 [i_0 + 1]))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (min((((/* implicit */unsigned int) (unsigned short)1)), (((min((((/* implicit */unsigned int) var_2)), (arr_4 [i_0] [20U] [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)96))))))))));
                arr_8 [i_1] |= ((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)153))))));
            }
        } 
    } 
}
