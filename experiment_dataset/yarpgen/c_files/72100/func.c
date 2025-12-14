/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72100
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */int) var_7)) < (arr_2 [i_0])))), (((arr_0 [i_1] [i_0]) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (arr_3 [i_1] [i_1] [i_1])))))));
                var_17 = ((/* implicit */unsigned short) ((short) max((min((-1105272246), (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) var_2))))));
                arr_7 [(signed char)8] = ((/* implicit */unsigned long long int) (short)-18);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_16 [i_2 - 1] [i_2 - 1] [i_2] [i_2] = ((/* implicit */int) var_4);
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_19 [0U] [0U] [i_4] [i_5] &= ((/* implicit */unsigned char) (+(max((arr_14 [i_2 + 1] [i_2 + 1] [(unsigned short)2] [(unsigned short)14]), (((((/* implicit */_Bool) 9417839876515396423ULL)) ? (var_11) : (((/* implicit */int) arr_15 [i_2] [i_4]))))))));
                        arr_20 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 2])))));
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)-111)) != (((/* implicit */int) arr_10 [i_3] [i_2])))));
                        arr_22 [i_2] [i_2] [i_4] [i_5] = ((((/* implicit */_Bool) (signed char)99)) ? (max((3537655296836935347LL), (((/* implicit */long long int) (unsigned char)143)))) : (((/* implicit */long long int) max((-163633550), (((/* implicit */int) (signed char)-58))))));
                        arr_23 [i_2] [i_2] [2ULL] [i_5] |= ((/* implicit */signed char) min((((/* implicit */long long int) (-((((_Bool)1) ? (-1016895606) : (((/* implicit */int) (unsigned short)51011))))))), (((long long int) arr_10 [i_2 + 1] [2]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_26 [i_2] [i_4] [i_2] = (~(((/* implicit */int) arr_11 [i_2 + 1] [i_2])));
                        arr_27 [(signed char)10] [i_2] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-99))))) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) (short)-32755)));
                        var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                        arr_28 [i_2] [i_3] [i_3] [0LL] [i_4] [i_2] = ((/* implicit */signed char) ((((int) arr_8 [i_4] [i_4])) < (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (var_16)));
                        var_20 = ((/* implicit */long long int) arr_30 [i_2 - 1] [i_2]);
                        arr_31 [i_2] [i_2 - 1] [(unsigned short)4] [i_2 - 1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_2] [i_2 - 2]))));
                    }
                }
            } 
        } 
    } 
}
