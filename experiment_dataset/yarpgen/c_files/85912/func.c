/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85912
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
    var_16 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15)))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1)))))));
    var_17 -= ((/* implicit */unsigned long long int) (unsigned char)0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [13U] = ((/* implicit */_Bool) var_3);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((var_7) + (2147483647))) >> (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_2 - 1]))) : (-6531130632200128658LL)))) & (((((/* implicit */_Bool) -685064280)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) var_15);
                            var_19 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */short) (+((~(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_4] [(_Bool)1] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 685064279)))))) <= (var_3)));
                                var_21 = ((/* implicit */int) max((((var_6) + (((/* implicit */unsigned long long int) (~(-8340489493406287613LL)))))), (((/* implicit */unsigned long long int) ((unsigned int) min((arr_18 [2] [i_1] [i_1] [i_1] [i_1] [i_1]), (-8340489493406287638LL)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((-(var_8))) % (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (var_7)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_13);
}
