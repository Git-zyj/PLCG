/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69384
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) var_1)) ? ((~(((((/* implicit */_Bool) var_5)) ? (0ULL) : (var_3))))) : (max((1173227141730311473ULL), (((/* implicit */unsigned long long int) (~(-4629945429221413227LL))))))))));
    var_13 += (~(15014554234629651300ULL));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) arr_4 [i_1] [i_1 - 1] [i_1]));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) 4095);
                            var_15 |= ((/* implicit */unsigned int) ((unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) : (arr_0 [i_0]))))));
                            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_8 [(short)17] [(short)17] [i_0]))))) ? (var_5) : (((6138846960485789374ULL) ^ (var_2))))) < (((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1 + 1])) ? (arr_4 [i_1] [(unsigned char)12] [i_1 + 1]) : (arr_4 [i_1] [11ULL] [i_1 - 1])))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_2] [8ULL] [i_2]) : (0ULL))))))) & (((unsigned long long int) (~(var_1)))))))));
                            arr_10 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) (~(min((var_11), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)20)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = var_0;
}
