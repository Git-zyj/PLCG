/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83698
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
    var_11 ^= ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((999793847U) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) == (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)120))))), (arr_4 [i_0] [i_1]))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3295173435U))));
                    arr_8 [i_2] [i_1 + 1] [i_1] [3] = ((/* implicit */short) min((min((((15210391090014746045ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))), (((unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_2])))), (((/* implicit */unsigned long long int) (short)-27266))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)29)) < (((/* implicit */int) (signed char)-30))));
    var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(var_7)))) + (min((var_1), (var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < ((-(((/* implicit */int) var_0))))))))));
}
