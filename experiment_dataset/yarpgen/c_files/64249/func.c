/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64249
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
    var_16 |= ((/* implicit */_Bool) var_14);
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(((((((/* implicit */_Bool) 3895005053U)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (unsigned short)17133)))) >> (((((/* implicit */int) (unsigned char)35)) - (15))))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (((~((-(((/* implicit */int) arr_6 [i_0] [i_0])))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) >= (((/* implicit */int) (!((_Bool)1)))))))));
                    }
                    arr_11 [i_0] [(unsigned short)7] = ((/* implicit */unsigned int) arr_0 [(signed char)0]);
                    var_19 += ((/* implicit */int) arr_8 [i_0] [5]);
                    var_20 ^= ((/* implicit */unsigned int) max(((unsigned char)212), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_0] [i_0])) * (((/* implicit */int) (unsigned char)15))))))) ? (((/* implicit */int) arr_6 [i_4] [i_4 + 1])) : ((-(arr_0 [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_16 [i_1 + 3]))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [10] = ((/* implicit */unsigned int) arr_1 [i_4 + 1] [i_4 + 1]);
                            }
                        } 
                    } 
                    arr_21 [i_4] [i_1 - 2] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [5U]))) ^ (((arr_4 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]) * (arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])))));
                }
                for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_23 -= ((arr_9 [i_1] [i_1 - 2] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3]) ? (((/* implicit */int) (unsigned short)49102)) : (((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_22 [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1])))));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_4 [i_1] [i_1 - 1] [i_1] [i_1 - 1]) != (arr_4 [i_1] [i_1] [i_1 + 3] [i_1 + 3]))) || (((/* implicit */_Bool) ((arr_4 [0ULL] [i_1 - 1] [0ULL] [i_1 + 2]) * (arr_4 [i_1] [3ULL] [i_1] [i_1 + 2]))))));
                    var_24 = ((/* implicit */unsigned short) arr_18 [i_1] [i_1 + 3] [i_1 - 1]);
                }
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_25 = 2953592407U;
                    arr_31 [i_0] [6ULL] [i_0] [6ULL] = ((/* implicit */unsigned int) ((_Bool) ((_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= (arr_27 [i_8] [i_8] [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (int i_10 = 4; i_10 < 14; i_10 += 1) 
                        {
                            {
                                arr_39 [i_10] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_18 [i_10] [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_33 [i_10 - 2] [i_10 - 2])) : (arr_23 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1])))));
                                arr_40 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10] [8U] = ((/* implicit */unsigned char) arr_9 [i_10 + 3] [(unsigned short)15] [i_10 - 3] [i_10 + 1] [i_10 - 3] [i_10 + 2]);
                            }
                        } 
                    } 
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 3407252309U))));
                    var_27 -= ((/* implicit */unsigned int) (_Bool)1);
                }
                for (short i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                {
                    arr_45 [i_0] [i_0] [(unsigned char)15] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_2 [i_0] [i_0]) >> (((arr_18 [i_0] [(unsigned short)11] [i_0]) + (1260297915)))))))) * (((((/* implicit */_Bool) (unsigned short)13785)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0]))) : ((+(928164183U))))));
                    var_28 = (~(((/* implicit */int) ((unsigned short) arr_34 [i_12] [i_12] [i_12]))));
                    var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (((-(((/* implicit */int) (unsigned short)63643)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_12] [(unsigned char)11]))))))))));
                }
                for (short i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                    var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)19184)))))));
                }
                arr_48 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_30 [i_1 + 3] [i_1 - 2] [i_1]))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 2] [i_1])) >= (((/* implicit */int) arr_30 [i_1 - 1] [i_1] [i_1 + 1])))))));
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1 + 3] [i_1 - 2])) ? (((/* implicit */int) arr_14 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_14 [i_1 + 3] [i_1 - 1]))))) * (((1341374889U) & (16U))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        arr_51 [i_14] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_6 [i_14] [i_14])) != (((/* implicit */int) arr_29 [i_14] [i_14] [i_14])))));
        var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_14] [i_14])))))) > (((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_14]))) : (arr_41 [i_14] [i_14])))))));
    }
    var_34 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 2577293565U)) ? (3366803112U) : (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
}
