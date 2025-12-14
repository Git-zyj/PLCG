/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70944
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [17] = ((/* implicit */unsigned char) arr_4 [(short)15]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) (+(((long long int) (signed char)28))));
                        var_20 = ((/* implicit */int) arr_0 [i_0]);
                        var_21 = ((/* implicit */short) ((max((2862182600140671417LL), (((/* implicit */long long int) 2147483640)))) << (((((/* implicit */int) (short)2422)) - (2421)))));
                        var_22 = ((/* implicit */unsigned char) 536869888ULL);
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */int) (-(min((((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (51450)))))), (9223372036854775807LL)))));
        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483629))))), (((((/* implicit */_Bool) (signed char)24)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) 2147483638))))));
    }
    var_25 = ((/* implicit */unsigned int) ((short) 2147483640));
}
