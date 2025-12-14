/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91082
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22123))) / (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2279629486U)) : (var_2)))))) ? (var_11) : (((/* implicit */unsigned int) ((var_5) | ((((_Bool)0) ? (var_0) : (((/* implicit */int) (unsigned short)62562))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 1] [i_1])) ? (-1LL) : (((/* implicit */long long int) var_8)))));
                            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2])) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((arr_4 [i_0] [(unsigned short)15] [i_2]) | (var_12)))))))));
                            arr_11 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) (~((~(-22LL)))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) == (arr_4 [i_1] [i_1 + 2] [i_1]))));
            }
        } 
    } 
}
