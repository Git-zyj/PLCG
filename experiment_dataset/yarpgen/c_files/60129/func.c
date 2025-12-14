/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60129
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_19 += ((short) ((((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(_Bool)1]))) : (((long long int) var_10))));
                                var_20 = ((/* implicit */unsigned char) ((long long int) min(((-(((/* implicit */int) (short)24441)))), ((+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) var_5)), (arr_8 [i_0])))));
                    arr_15 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1])) <= (((/* implicit */int) (_Bool)1)))))));
                    var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_1] [i_2]))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))));
                    arr_16 [i_0] [i_1] = ((/* implicit */short) ((unsigned int) (-(((((arr_4 [i_1]) + (9223372036854775807LL))) << (((var_12) - (4159905534U))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_6);
}
