/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65647
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((-1753134141) - (((/* implicit */int) (unsigned short)25717))))), (min((((/* implicit */unsigned long long int) 1753134141)), (4198126247579637837ULL))))), (((/* implicit */unsigned long long int) ((7757379542470401207ULL) != (((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)))))))));
                arr_6 [i_0 + 3] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6507444800745138227LL)) ? (((/* implicit */int) (short)19)) : (1753134154)));
                arr_7 [i_0] [i_1] = ((-3378227075309825899LL) & (-1973173452413143712LL));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)54))))))))) * (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (var_1)))) / ((+((-2147483647 - 1))))))));
    var_15 += ((/* implicit */unsigned long long int) ((long long int) 1753134126));
}
