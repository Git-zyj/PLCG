/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57953
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
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 &= ((((((/* implicit */_Bool) (short)-13911)) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)227)))) : (((/* implicit */int) (short)-13911)))) >> (((/* implicit */int) (_Bool)0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (18446744073709551591ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)14), ((unsigned char)200)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    var_16 += ((/* implicit */short) arr_8 [i_0] [i_0] [(unsigned char)6] [i_0]);
                    arr_9 [i_2] [i_1] [i_1] [i_1] = (unsigned char)200;
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_0] = ((unsigned char) ((short) var_12));
                    arr_14 [i_0] [i_1] [i_3] = (~(((((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2])) << (((var_12) - (1910375372))))));
                }
                var_17 += ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-13925), (((/* implicit */short) var_1))))) ? ((~(((((/* implicit */_Bool) (unsigned char)48)) ? (arr_12 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_9)))))))));
                var_18 = ((/* implicit */long long int) 4184793902U);
            }
        } 
    } 
}
