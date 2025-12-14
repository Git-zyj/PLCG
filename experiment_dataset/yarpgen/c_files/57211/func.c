/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57211
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) ((int) arr_1 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_1] [i_1] [7])))) : (arr_0 [11U]));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)-10459)) : (((/* implicit */int) arr_3 [i_1])))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10459)) ? (arr_6 [i_0] [(short)15] [i_1]) : (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) 2U)) ? (-9214379632064264345LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))) : (((/* implicit */long long int) arr_0 [i_1])))), (((/* implicit */long long int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)10459)) ? (((/* implicit */long long int) var_13)) : (min((((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) max(((short)12820), ((short)14166))))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(var_8))))))) ? (-1575537587) : ((-(((/* implicit */int) var_19))))));
    var_25 = ((/* implicit */unsigned short) var_12);
    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) 20U)))));
}
