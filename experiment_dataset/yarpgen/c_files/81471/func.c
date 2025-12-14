/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81471
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [18] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) arr_8 [i_3] [(_Bool)1] [i_1] [15] [i_0 - 1]));
                            var_20 += ((/* implicit */unsigned int) ((min((((/* implicit */long long int) 1088141360U)), (min((4857379499879041478LL), (((/* implicit */long long int) (unsigned short)12838)))))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)54884)) && ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)12091)) != (((/* implicit */int) (short)-11650))))) : (((/* implicit */int) (_Bool)1))))) : (var_14)));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned int) ((var_7) != (((/* implicit */long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)14)) : (((/* implicit */int) (unsigned short)54886)))), (((/* implicit */int) var_13)))))));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) ((4073647868U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))))))) % (5934848686982154089LL)))));
            }
        } 
    } 
    var_21 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) ((var_15) ? (var_14) : (((/* implicit */unsigned long long int) 3859158965301277728LL)))))));
}
