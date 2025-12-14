/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56080
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
    var_10 *= ((/* implicit */unsigned long long int) ((((_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_2)) != (0LL)))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))) + (32779)))))) : (((((/* implicit */_Bool) ((short) 7424474656430222641LL))) ? (((((/* implicit */_Bool) (unsigned short)41188)) ? (4294967290U) : (3515523305U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24369)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 |= ((/* implicit */short) var_6);
                    var_12 = max((((/* implicit */long long int) (unsigned short)41188)), (((max((-1LL), (((/* implicit */long long int) (unsigned short)41181)))) & (min((((/* implicit */long long int) 2147483647)), (9223372036854775807LL))))));
                    var_13 = ((/* implicit */short) 4240812943U);
                    var_14 *= ((/* implicit */short) ((_Bool) ((long long int) ((((/* implicit */int) (short)31825)) & (((/* implicit */int) (unsigned short)24348))))));
                    var_15 *= ((/* implicit */signed char) (((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) % (-7031419757494569149LL))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41188)))));
                }
            } 
        } 
    } 
}
