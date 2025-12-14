/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95766
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (short)-12024);
                    arr_9 [i_0] = ((/* implicit */signed char) (~(arr_3 [i_0])));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_4 [i_0]);
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) var_9);
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (short)20052))));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_14 [i_3] &= ((/* implicit */short) -5474022337003845886LL);
        arr_15 [(signed char)5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 8388607)), (min((arr_11 [i_3]), (((((/* implicit */unsigned long long int) -8388588)) + (arr_11 [i_3])))))));
    }
    for (short i_4 = 3; i_4 < 22; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_1))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(unsigned short)14])) ? (max((((/* implicit */unsigned long long int) -8388608)), (7663815686470351186ULL))) : (((/* implicit */unsigned long long int) -3832851486970566893LL)))))));
        arr_20 [i_4] &= ((/* implicit */unsigned char) var_0);
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1077871050U)))))));
    }
    var_19 |= ((/* implicit */_Bool) (unsigned char)166);
    var_20 ^= ((/* implicit */unsigned int) (unsigned short)46000);
}
