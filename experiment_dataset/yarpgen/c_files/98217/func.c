/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98217
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
    var_14 = ((/* implicit */unsigned char) var_6);
    var_15 = ((/* implicit */unsigned char) (+(((min((((/* implicit */unsigned int) var_13)), (var_1))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))))));
    var_16 = ((/* implicit */unsigned long long int) (+(max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) (short)-13021)) <= (((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */unsigned int) (+((-((+(((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) max(((short)-13079), (arr_1 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2421733868714576317LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-1)))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(6542376117581355056ULL)));
            }
        } 
    } 
}
