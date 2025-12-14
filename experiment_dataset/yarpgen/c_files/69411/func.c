/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69411
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) arr_8 [i_4]);
                                var_12 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] = ((((/* implicit */_Bool) max((arr_5 [i_2] [i_2 + 1] [i_2 + 1] [i_2]), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0])) + (1263387915)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((int) 0U))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                    arr_14 [1U] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (((arr_7 [0ULL] [i_1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */unsigned long long int) -1263387916)), (arr_8 [i_2 - 4])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((315177U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) (short)14981)) : (((/* implicit */int) (_Bool)0)))), (1263387915)));
}
