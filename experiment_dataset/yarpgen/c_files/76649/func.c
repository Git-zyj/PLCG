/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76649
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (min((((/* implicit */int) var_15)), (((((/* implicit */int) var_3)) - (((/* implicit */int) var_6))))))));
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    var_18 = ((/* implicit */long long int) (-(arr_4 [i_2 - 4] [i_2 - 4] [i_2 - 4])));
                    arr_8 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned char)12] [i_2])))))));
                    arr_9 [i_2 + 1] [i_0] = ((/* implicit */_Bool) (-(-1353473335)));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_12 [i_0] = ((/* implicit */long long int) ((arr_4 [i_0] [i_1] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)7] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (-1353473335) : (((/* implicit */int) arr_2 [i_4 - 2]))));
                                var_19 |= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)1055)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1]))) : (arr_14 [i_0] [i_1] [15] [i_4] [i_4] [i_5]))) >> (((arr_1 [i_1]) + (1356229819)))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)83))) : (9223372036854775807LL)))) ? (((/* implicit */int) arr_6 [i_0] [i_4 - 1] [i_3] [i_1])) : (arr_13 [0] [0] [i_5] [i_4]))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_3] = ((/* implicit */_Bool) 9223372036854775798LL);
                    arr_21 [(unsigned short)11] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_16 [i_3]) >= (((/* implicit */unsigned int) arr_1 [(unsigned char)5]))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = arr_2 [i_0];
                        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_6]))))));
                        arr_24 [i_0] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [i_6])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [4] [4])))));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_7] [i_7]);
                    var_24 = ((/* implicit */_Bool) arr_2 [i_7]);
                    arr_29 [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_7] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_7] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_7])))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_3 [i_7]))));
                }
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    arr_34 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_14 [i_0] [i_8 + 1] [i_0] [i_0] [i_0] [(unsigned char)9])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (9223372036854775807LL)))))) / (((arr_26 [i_0] [i_8 - 2] [i_8] [i_8 - 2]) / (arr_26 [i_0] [i_8 - 2] [i_8 + 1] [i_8])))));
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_8 + 1] [i_8 - 1]);
                    var_26 -= ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_8 - 2] [i_8 - 2] [i_8 - 2]));
                }
            }
        } 
    } 
}
