/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60263
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (((((/* implicit */_Bool) (unsigned short)2047)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), ((unsigned short)63489))), (((/* implicit */unsigned short) ((_Bool) 3284199746U)))))) << (((min((((/* implicit */unsigned long long int) arr_4 [i_1] [(unsigned short)3] [i_1 + 3])), (min((var_17), (var_19))))) - (2602094589ULL)))));
                var_21 |= ((/* implicit */unsigned char) min((((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_2 [i_1 - 1] [(_Bool)1])) + (23323))))), (((((/* implicit */int) arr_2 [i_1 - 1] [(short)0])) >> (((arr_0 [i_1 - 1] [(unsigned short)1]) - (1968038403U)))))));
                arr_6 [4U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((arr_4 [i_0] [i_1 + 3] [(unsigned short)0]), (arr_4 [i_0] [i_1 + 3] [i_0])))) * ((+(((((/* implicit */_Bool) 3284199724U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (-1780545839334863445LL)))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)63488))));
}
