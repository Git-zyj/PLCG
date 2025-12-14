/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62544
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
    var_14 = ((/* implicit */short) ((unsigned short) (((~(var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] |= ((/* implicit */signed char) (((~((-(((/* implicit */int) (short)(-32767 - 1))))))) + (arr_4 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) var_13)) > ((~(var_8))))), ((!(((/* implicit */_Bool) 4011972969U)))))))));
                                arr_13 [i_0] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (min(((~(282994323U))), (max((4011972969U), (((/* implicit */unsigned int) arr_4 [(short)11] [i_0])))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_4 - 1] [i_2] [i_4] [i_4])))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [8ULL] [i_4 + 1] = ((/* implicit */short) max((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned int) (~(arr_4 [i_2 + 1] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) (unsigned short)28636);
            }
        } 
    } 
}
