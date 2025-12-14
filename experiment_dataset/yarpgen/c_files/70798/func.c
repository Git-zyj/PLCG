/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70798
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((int) var_10)))) >= (var_7)));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)252)), (507904U)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 4]))) : (((((/* implicit */_Bool) 13842378932094296506ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-2267005232468230226LL))))) : (((long long int) (short)0))));
                    var_17 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0] [i_0] [10U]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) var_5);
                                arr_17 [i_1] [(short)6] [i_2] [i_1 - 1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) min((arr_13 [i_1] [i_1] [i_1 + 3] [i_1 + 4]), (arr_13 [i_0] [i_1] [i_1 - 4] [i_1 - 2]))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned short)277))) >= ((~(((/* implicit */int) arr_1 [i_0] [i_1 + 3])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
