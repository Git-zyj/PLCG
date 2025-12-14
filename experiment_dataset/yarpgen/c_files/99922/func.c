/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99922
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
    var_17 = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */unsigned long long int) (~(((((var_9) + (2147483647))) << (((((((/* implicit */int) var_11)) + (9535))) - (20)))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_2] = ((/* implicit */short) ((unsigned long long int) ((short) arr_10 [i_2] [i_2] [i_1] [i_2])));
                            arr_13 [i_2] = ((/* implicit */signed char) arr_1 [i_1]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1] [i_0] [i_0] [i_0 - 1])) & (((/* implicit */int) (unsigned short)51996))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) >> (((var_9) + (371509487)))))) ? (((/* implicit */int) var_6)) : (((((((/* implicit */int) (short)-19829)) + (2147483647))) << (((((/* implicit */int) (unsigned char)178)) - (178)))))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (short i_5 = 4; i_5 < 24; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((unsigned short) arr_16 [i_5]));
                var_21 = ((/* implicit */short) arr_15 [i_5]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_3);
}
