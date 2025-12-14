/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77733
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (short)63)))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_1])))) ? (((unsigned int) arr_3 [i_0] [i_0 - 1] [24U])) : (arr_1 [i_0]))))));
                var_19 = ((((((/* implicit */_Bool) ((unsigned int) arr_4 [(_Bool)1] [i_1]))) ? (((unsigned int) (short)14465)) : (((arr_2 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))) ^ (arr_1 [i_0 - 1]));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((1498414157U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)30264))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(var_4))) ? (((var_6) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)30261))))))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) != (((/* implicit */int) var_7)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1667979941U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (((((/* implicit */_Bool) (short)30268)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30268))) : (124872305U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32765)) & (((/* implicit */int) max(((short)30272), (((/* implicit */short) (_Bool)1))))))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_23 = ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-30272)) ? (((/* implicit */int) (short)-30258)) : (((/* implicit */int) (_Bool)1))))), (((arr_12 [i_2] [i_3]) / (4160749568U))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_2 [i_3])))) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_0 [i_2]))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-11094)) ^ (((/* implicit */int) (short)30249))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_15 [i_4] = (_Bool)1;
                        arr_16 [i_2] [i_3] [i_2] [i_5] [i_5] &= ((short) ((12U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [(signed char)1] [i_2] [i_4])))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_6] [i_3] = ((/* implicit */_Bool) (+(arr_3 [i_6] [i_3] [i_2])));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [15U] [i_4] [i_4] [i_3] [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (signed char)6))));
                        var_26 &= 1048575U;
                    }
                    arr_21 [20U] [20U] [(_Bool)1] [i_4] = ((((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [i_2]))) : (111781859U))) << (((((((/* implicit */int) arr_13 [i_2] [i_3] [i_3] [i_3])) ^ (((/* implicit */int) arr_6 [i_2])))) - (57))));
                }
                arr_22 [i_2] [i_2] [i_3] = ((/* implicit */signed char) (+(min((((3229620731U) + (3229620731U))), (((/* implicit */unsigned int) ((4294967290U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))))))))));
            }
        } 
    } 
}
