/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82240
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
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_17)) ? (14663841676076394946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1767))))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-1771), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((signed char) -7096142672795917920LL))) : (((/* implicit */int) ((short) (unsigned short)7852)))));
                                arr_18 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7096142672795917923LL)) ? (8477263932940066767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 268402688))) ? (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) 2774267810U)) : (2251799813685247LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)31)))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) + (31457280U)))) / (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-1778))))));
                }
            } 
        } 
    } 
}
