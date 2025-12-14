/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92685
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) (+((+(min((((/* implicit */long long int) arr_0 [i_1])), (7541691343917515753LL)))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1 + 2] [i_1 + 2])))) ? (min((var_11), (var_4))) : (var_4))))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((((-7541691343917515731LL) + (9223372036854775807LL))) >> (((14342202099726839122ULL) - (14342202099726839122ULL)))))) ? (((/* implicit */int) (signed char)-13)) : ((-2147483647 - 1)))) + (2147483647))) >> (((min((var_6), (((/* implicit */unsigned long long int) (-(var_9)))))) - (501454296ULL)))));
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 21ULL)) ? (0U) : (((/* implicit */unsigned int) 1453776213))));
                    arr_12 [i_0] [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) min((18446744073709551594ULL), ((-(min((arr_7 [i_0] [i_0] [i_1 + 3] [i_3]), (18446744073709551600ULL)))))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    var_15 = ((/* implicit */signed char) arr_1 [i_4]);
                    var_16 &= ((/* implicit */unsigned int) ((1453776213) & (((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))));
                    arr_15 [i_4] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) (unsigned short)15613);
                    var_17 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_4 - 1]);
                }
                var_18 -= arr_10 [i_0] [i_1];
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)61845))))));
    var_20 &= (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61845))) | (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967285U))))) : ((~(1453776232))))));
    var_21 |= ((/* implicit */unsigned long long int) (unsigned short)1452);
    var_22 = ((/* implicit */unsigned long long int) (-((-(var_8)))));
}
