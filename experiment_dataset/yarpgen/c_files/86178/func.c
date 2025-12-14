/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86178
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
    var_13 |= ((/* implicit */unsigned int) var_9);
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 74973591U)) ? (var_9) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24132))) : (((unsigned long long int) var_0))));
    var_16 = ((((/* implicit */int) ((max((((/* implicit */long long int) 4294967279U)), (6483956216757595986LL))) != (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (2010676215U))))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_2))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2010676215U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (unsigned short)52061)))));
                            arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) (unsigned char)17));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)12] [i_0]) <= (2010676217U))))) <= (var_0))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))));
            }
        } 
    } 
}
