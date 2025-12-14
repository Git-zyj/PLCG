/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74229
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
    var_19 ^= var_15;
    var_20 = (unsigned short)14416;
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((max(((unsigned short)14440), ((unsigned short)14416))), (min(((unsigned short)51120), ((unsigned short)4540)))));
        var_22 = ((/* implicit */int) max((max((6976719196630130142ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned short)51133))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_8), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-25651)), (var_14))))));
                        arr_11 [i_0 - 1] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) 13564128270007187967ULL);
                        var_24 = max((((/* implicit */long long int) (unsigned short)11685)), (max((-1579932092465645704LL), (((/* implicit */long long int) var_3)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) -1224251815650829848LL);
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) var_16);
        arr_18 [i_4] = ((/* implicit */int) var_15);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 |= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)51120)), (var_16)));
        arr_21 [i_5] = ((/* implicit */int) 666940018U);
        var_26 ^= ((/* implicit */short) min((max((var_12), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_4))));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_5)), (3402164757860837266ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)51120), ((unsigned short)19368))))));
        var_27 = ((/* implicit */int) min((min((-1579932092465645704LL), (-5291044680309938955LL))), (((/* implicit */long long int) min((var_4), (((/* implicit */short) (signed char)93)))))));
    }
}
