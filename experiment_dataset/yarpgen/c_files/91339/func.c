/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91339
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
    var_20 = ((/* implicit */int) (unsigned char)118);
    var_21 = ((/* implicit */signed char) (-(((((unsigned int) (unsigned char)255)) / (((/* implicit */unsigned int) ((int) var_16)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] |= ((/* implicit */unsigned int) (short)-24913);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (((+(((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1])))) > ((+(arr_4 [i_0] [i_1] [i_2 + 2]))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((((4294967295U) >> (((((/* implicit */int) var_15)) - (64141))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-24754), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */int) ((4294967295U) > (arr_2 [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_14 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)250)) ? (153669374U) : (arr_0 [i_0] [i_0])))));
                        var_23 = ((/* implicit */long long int) var_2);
                        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (short)26844)) ? (((/* implicit */int) arr_3 [i_3] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((signed char) (((_Bool)1) || (((/* implicit */_Bool) 15728640U)))));
                            arr_19 [i_4] [i_1] [i_2 - 1] [i_3] [i_4] [i_1] = ((/* implicit */long long int) ((arr_2 [i_0]) | (arr_16 [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_2 - 2] [i_2 - 2])));
                            var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_1] [i_0] [i_3] [i_4])))) : ((-(arr_1 [i_2]))));
                            arr_20 [3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)146);
                            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_16 [i_4] [i_3] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) var_19)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (!(arr_21 [(unsigned short)4] [(unsigned short)4] [23] [i_2] [i_3] [i_5] [i_5]))))));
                            var_28 = ((/* implicit */long long int) arr_6 [i_2] [i_2] [i_2 - 3]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_26 [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) ((unsigned char) arr_25 [i_0] [(signed char)24] [i_0] [i_6])));
                        var_29 |= ((/* implicit */short) ((unsigned long long int) arr_3 [i_2 - 2] [i_2] [i_2 + 1]));
                        arr_27 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned char)251))));
                    }
                    arr_28 [i_0] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    var_30 &= ((/* implicit */_Bool) ((1332592518U) + (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (314365953U)))));
}
