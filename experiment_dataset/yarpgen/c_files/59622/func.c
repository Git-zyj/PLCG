/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59622
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -2712566957208012711LL)) != (7684086252773937778ULL)))) < (((/* implicit */int) ((10762657820935613837ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))))) > (2925489720781075533LL)));
                var_18 = ((/* implicit */unsigned char) ((var_2) / (((/* implicit */long long int) (-(2088960))))));
                arr_6 [i_1] [(unsigned char)3] [(signed char)15] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_4 [9] [9])))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned int) var_7);
    var_20 += ((/* implicit */_Bool) var_5);
    var_21 += ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0)), (var_13)))) || (((/* implicit */_Bool) (unsigned char)64))))));
    var_22 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
}
