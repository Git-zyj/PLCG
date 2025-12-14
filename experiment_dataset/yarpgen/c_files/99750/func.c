/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99750
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 -= ((((/* implicit */_Bool) (short)-32745)) ? ((+(((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) var_18)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32745))))) ? ((+((-9223372036854775807LL - 1LL)))) : (arr_6 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [19LL] [i_0] [8] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)32754);
                                var_22 = (-((+(((/* implicit */int) (short)32761)))));
                                var_23 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32767)), (6936438955295502032ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)84))))) : (1444466018228943553ULL)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_18);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_24 ^= min(((((_Bool)1) ? (((/* implicit */long long int) 2147483648U)) : (-9223372036854775780LL))), (((/* implicit */long long int) 268435328)));
                                arr_22 [i_1] [i_0] [(signed char)0] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                                arr_23 [i_0] [i_1] [7] [i_0] [i_6] = ((/* implicit */unsigned long long int) (~((-(arr_8 [i_0] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = 18446744073709551615ULL;
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
}
