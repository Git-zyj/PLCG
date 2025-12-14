/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65053
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
    var_14 = ((/* implicit */long long int) 2172807222U);
    var_15 *= ((/* implicit */short) ((min((10581493770309382312ULL), (((/* implicit */unsigned long long int) (unsigned char)215)))) < (((/* implicit */unsigned long long int) min((var_7), (var_2))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (arr_4 [i_0] [i_0] [(unsigned short)9] [10ULL])));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_7), (arr_4 [i_2] [i_2 + 3] [i_2 + 3] [i_2])))) > (((min((var_5), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1] [i_0])))) / (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 - 1] [8U] [i_2 + 2])))))))));
                    arr_6 [i_1] [i_1 - 1] [i_2 + 3] = ((max((12458513993604893794ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_4 [i_0] [10ULL] [i_0] [i_0])))))) < (((/* implicit */unsigned long long int) ((3451699376U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_2 + 2])))))));
                    arr_7 [i_0] [i_1] [i_1 + 1] [i_0] = ((/* implicit */signed char) arr_4 [i_2 + 1] [i_2 + 1] [i_2] [3LL]);
                }
            } 
        } 
    } 
}
