/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92753
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
    var_13 |= ((/* implicit */unsigned char) (+((((+(((/* implicit */int) var_7)))) >> (((((/* implicit */int) (short)-8192)) + (8206)))))));
    var_14 -= ((/* implicit */unsigned int) ((unsigned short) (((-(var_10))) & (((/* implicit */int) (!(((/* implicit */_Bool) 3807761159U))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_7);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((var_11) + (2147483647))) << (((487206163U) - (487206163U)))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) (unsigned char)73);
        var_15 = ((/* implicit */unsigned char) ((var_11) - ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) == (15891613898917835125ULL))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
    {
        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))));
        arr_14 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned char) var_4));
        var_17 = ((/* implicit */unsigned char) (~((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27875)))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) - (2555130174791716490ULL)));
}
