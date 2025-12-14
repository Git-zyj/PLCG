/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73555
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
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-30462)), (3128857665U)));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))) ? ((~(((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) >> (((((/* implicit */int) var_13)) - (16992))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) (signed char)-118))))))))));
                arr_5 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((var_1) && ((_Bool)1)))), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-88)) + (2147483647))) >> (((((/* implicit */int) (signed char)-54)) + (54)))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned short) var_11)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_5] [7ULL] [i_5] [i_6] = var_3;
                                var_16 = var_10;
                                arr_21 [i_2] [i_2] [i_4] [i_5 + 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((~(arr_13 [i_3] [(short)11] [i_5 + 2] [i_5 + 2])))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (short)-32416))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) ((((var_7) != (((/* implicit */int) min(((short)-32416), (var_13)))))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_12 [i_2 + 1] [i_3]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_3);
    var_20 = ((/* implicit */unsigned long long int) var_10);
}
