/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65596
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 4]))))) | (((/* implicit */int) min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 4]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                            {
                                var_11 ^= ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)72)));
                                arr_14 [i_1] = ((/* implicit */long long int) (-(max((((unsigned int) arr_1 [7U])), (((/* implicit */unsigned int) arr_11 [i_4 - 1] [i_1 + 1]))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_12 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)190)) + (((/* implicit */int) var_8))))) - (((unsigned long long int) 0ULL)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */unsigned int) 2147483647)) : (1016U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
                                arr_17 [i_0] [2ULL] [i_0] [2ULL] [2ULL] = ((_Bool) max((3019182125271695648LL), (((/* implicit */long long int) (_Bool)1))));
                            }
                            var_13 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 |= ((/* implicit */signed char) 1012U);
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_25 [i_7] = ((/* implicit */unsigned short) (~((-(1009U)))));
                arr_26 [i_6 - 2] [i_6 - 2] [i_7] = ((/* implicit */int) (~(arr_6 [i_6 - 2] [i_7])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 1; i_9 < 22; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                {
                    var_15 &= ((/* implicit */unsigned long long int) ((((unsigned int) max((var_0), (((/* implicit */int) (unsigned char)143))))) * (max((4294967267U), (1844183190U)))));
                    var_16 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) arr_29 [(_Bool)1])) : ((~(-6939859405035274345LL)))));
                }
            } 
        } 
    } 
}
