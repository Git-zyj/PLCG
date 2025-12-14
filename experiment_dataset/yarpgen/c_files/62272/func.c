/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62272
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
    var_14 |= (~(((/* implicit */int) ((unsigned short) (unsigned short)6566))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_1] [9LL] = ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0 + 1] [i_2]) : (((long long int) arr_1 [i_0 - 1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) (-(((long long int) arr_6 [i_0 - 1] [i_2 + 1] [i_4] [i_1]))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) 9223372036854775807LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned short) ((long long int) ((((/* implicit */_Bool) arr_15 [i_6])) && (((/* implicit */_Bool) arr_15 [i_6])))))))));
                var_18 = ((/* implicit */unsigned char) (~(var_0)));
                var_19 = ((/* implicit */unsigned char) ((((((long long int) (~(((/* implicit */int) arr_14 [19]))))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5])))))));
                arr_18 [i_5 - 1] [i_5] [i_6] = (~(((-9223372036854775807LL) | (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_6]))))))));
                arr_19 [i_5] = ((/* implicit */signed char) ((((arr_16 [i_5 + 1]) + (9223372036854775807LL))) << (((((max((-8055590982736699704LL), (((/* implicit */long long int) var_3)))) << (((max((-1633087080), (var_3))) - (847944651))))) - (28452301970604032LL)))));
            }
        } 
    } 
}
