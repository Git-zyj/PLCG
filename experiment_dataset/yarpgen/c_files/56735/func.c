/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56735
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
    var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (((var_5) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_14)), ((short)(-32767 - 1)))))))));
    var_17 = ((min((min((((/* implicit */unsigned long long int) var_2)), (var_15))), (((/* implicit */unsigned long long int) 293899268099058839LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    var_18 -= ((/* implicit */unsigned long long int) (~(max(((~(var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32745)) ^ (var_13))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) var_10)) / (arr_4 [i_0 + 1])))));
                var_19 -= ((/* implicit */unsigned char) 14ULL);
                var_20 ^= ((((/* implicit */_Bool) 8696103004925608082ULL)) ? (arr_3 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) 25478771)))));
            }
        } 
    } 
    var_21 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) <= (var_3))))));
}
