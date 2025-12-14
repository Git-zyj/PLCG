/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63073
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
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = (short)-23055;
                var_16 -= ((/* implicit */_Bool) (short)16899);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_6), (((/* implicit */short) arr_0 [i_0]))));
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) (short)28657)) ? (-1682104009) : (((/* implicit */int) ((short) var_5))))) : (((((/* implicit */_Bool) min(((short)-23055), ((short)-23055)))) ? (((/* implicit */int) ((short) 3196959327U))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_3] [i_2 - 1] [i_1] [i_0 - 4])) ? (arr_5 [i_0]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (short)-8797))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-4001))))))))));
                                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_2 - 2] [(_Bool)1] [8])) ? (((/* implicit */int) arr_4 [i_2 - 2] [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_2 - 2] [i_2] [i_0 - 4])))) >> (((/* implicit */int) ((4U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                var_21 += ((/* implicit */int) (short)480);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */int) (short)7020);
    var_23 = 4294967295U;
    var_24 &= (short)-15789;
}
