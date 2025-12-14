/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76524
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */short) ((int) arr_2 [i_1]));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) var_2);
                            arr_14 [i_0] [i_1] [i_2] = arr_5 [i_0] [i_1] [(signed char)24];
                            arr_15 [i_0] [i_1] [11LL] [i_3] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [7LL] [i_1] [i_2] [i_3]);
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_3] [20LL] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0])) * (max(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned char)173))))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */signed char) min((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_5 [i_0] [(unsigned short)15] [i_1])) + (((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)63)))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)17973))))));
    var_17 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) -9103984506766935510LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)47568)))) / (((/* implicit */int) (unsigned short)24759)))), (((/* implicit */int) (short)-22036))));
    var_18 = ((/* implicit */unsigned int) var_0);
}
