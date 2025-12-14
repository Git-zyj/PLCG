/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73008
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((8571208691395513147ULL) - (3781381834925866265ULL)))));
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3781381834925866271ULL), (3781381834925866265ULL)))) && (((/* implicit */_Bool) 8719427523510361942ULL))));
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((13LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1492402143U)) ? (4621257662794262835LL) : (-792598601883659186LL)))) ? (((/* implicit */unsigned long long int) min((339694561657131731LL), (((/* implicit */long long int) (short)-29721))))) : (((((/* implicit */_Bool) 8458555875771403095LL)) ? (8719427523510361946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11209)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_3] [i_2] [i_1] [i_0 - 1] [(short)4] = ((/* implicit */unsigned short) 16333714737144202448ULL);
                                arr_13 [i_4 + 1] [(_Bool)1] [i_3] [i_2 - 1] [(unsigned char)3] [i_1] [i_0 + 2] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1897714280U)))))));
                                var_18 -= ((/* implicit */signed char) max((min((2575741428U), (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */long long int) var_13);
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
