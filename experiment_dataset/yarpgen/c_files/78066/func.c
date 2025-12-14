/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78066
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
    var_14 = ((/* implicit */long long int) (-(min((((/* implicit */int) var_9)), ((+(((/* implicit */int) (unsigned short)42265))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned short)23271)))));
                arr_5 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((arr_0 [6LL] [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) + (6365)))))))));
                arr_6 [i_1 + 3] [i_1] [i_0 - 3] = ((/* implicit */int) var_10);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (unsigned short)23248);
                    arr_12 [i_1] = ((/* implicit */short) (+(((/* implicit */int) (short)-32753))));
                }
            }
        } 
    } 
    var_16 = -4353405696655753151LL;
}
