/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91641
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
    var_14 *= ((short) -157908321);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1])))) ? (((((/* implicit */_Bool) (short)-32767)) ? (18446744073709551609ULL) : (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_1 + 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) var_3);
                arr_8 [i_1] = ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
}
