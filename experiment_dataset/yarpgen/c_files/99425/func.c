/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99425
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_4))))))) ? (((((((/* implicit */int) var_7)) + (2147483647))) >> (((((((/* implicit */_Bool) var_16)) ? (var_6) : (-5829298662136877316LL))) - (3985408728798498778LL))))) : (((/* implicit */int) var_13))));
    var_18 = ((unsigned long long int) var_7);
    var_19 = ((/* implicit */signed char) var_7);
    var_20 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 5829298662136877309LL)) : (var_8))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-9941)) ? (var_9) : (var_9))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-10677))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9941))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_22 -= (short)-10432;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) arr_6 [i_3] [i_3 - 1] [i_1]));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) + (2147483647))) << ((((((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) + (29129))) - (30)))));
                    var_23 = ((/* implicit */unsigned int) ((var_3) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_8)))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [4] [4] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(signed char)4] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0]))));
    }
}
