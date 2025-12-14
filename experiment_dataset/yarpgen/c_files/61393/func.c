/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61393
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 4] [i_2 + 3]))));
                    arr_7 [i_0] [i_1] [i_2 + 1] = ((/* implicit */long long int) ((min((arr_4 [i_0] [9U]), (((/* implicit */unsigned int) (short)15404)))) + (max((1006632960U), (((/* implicit */unsigned int) (short)-15405))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((arr_5 [i_0] [i_0] [i_2 - 1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (short)15405)))))), (var_3)))) ? ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (7865554569547805268ULL))))) : (((/* implicit */unsigned long long int) (((+(var_12))) << ((((-(var_5))) - (2942753267U))))))));
                }
            } 
        } 
    } 
    var_20 -= ((((((/* implicit */_Bool) 2276754290193713051LL)) ? (18178209328207175752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15405))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_10))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-15405), ((short)15405)))))))));
}
