/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73095
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)6093)) / (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)31868)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((arr_5 [i_0] [i_2]) % (((/* implicit */unsigned long long int) var_12)))))))));
                                var_18 ^= ((/* implicit */_Bool) (unsigned char)166);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((min((min((18143152713151856227ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (signed char)-102)))), (((/* implicit */unsigned long long int) 0U))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62517))) & (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-32764)), (-1891261658616229480LL)))), (((((/* implicit */_Bool) 1125497972U)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 48555981U))))))));
                            var_20 = ((/* implicit */long long int) (unsigned char)102);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((arr_0 [11LL]) ? (((/* implicit */long long int) 48555981U)) : (-7518394843237052775LL)))))) ? (((/* implicit */long long int) (-((~(((/* implicit */int) (short)14761))))))) : (((((var_7) + (9223372036854775807LL))) << (((/* implicit */int) ((448970768) >= (var_1))))))));
                            arr_18 [i_0] [i_6] [i_1] [i_6] [i_1] [(unsigned char)8] = ((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5] [i_5 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (var_12)))), (var_2)))));
    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
