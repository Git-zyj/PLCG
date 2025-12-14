/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60923
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
    var_17 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) ((signed char) ((_Bool) var_12)))) : (((/* implicit */int) var_5))));
    var_18 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((((_Bool)1) ? (-496983206) : (((/* implicit */int) arr_5 [i_0])))) + ((-(((/* implicit */int) var_7))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_3))))))));
                        }
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_5))))) != ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        var_22 = ((_Bool) (!(var_16)));
                        arr_17 [(_Bool)1] &= min((-27373757), (((/* implicit */int) var_1)));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 *= ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_0)));
                                arr_24 [(_Bool)1] [i_1] [(_Bool)1] [i_5] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_5]);
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_19 [i_0])), (-72381230)))))) > (min((((/* implicit */unsigned int) (_Bool)1)), (2078232513U))));
                                arr_26 [i_0] [(signed char)4] [i_0] [(signed char)4] [i_0] [i_0] |= ((/* implicit */_Bool) ((((((_Bool) 27373747)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_14 [18U] [i_1] [i_2] [i_1] [18U]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (622770127U)))))));
                                arr_27 [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
                arr_28 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */_Bool) 1516208693)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
