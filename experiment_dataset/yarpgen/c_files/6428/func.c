/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6428
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
    var_20 = ((/* implicit */short) (((~(((int) var_18)))) & ((((~(var_19))) | (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-19))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) -2709289052416853196LL);
                                arr_14 [i_3] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4]))))) != (min((min((((/* implicit */unsigned int) 752128808)), (arr_5 [i_4] [i_3 - 3] [i_2 + 1] [i_1]))), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1] [i_4 + 1])))));
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_2] [i_1] [i_4 - 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (2649816251U)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) * (1296017888U)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_9 [i_5] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((13715002109893151311ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)19)) < (((/* implicit */int) (_Bool)0))))))))) / (((/* implicit */int) (unsigned char)44))));
                                arr_28 [i_0] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */int) ((_Bool) -5394819488195233942LL));
                                arr_29 [i_0] [i_0] [i_1] [i_5] [i_6 + 3] [i_7] = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_5] [i_5] [i_6 + 2] [i_0]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 1; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((_Bool) arr_30 [i_8] [i_8] [i_8]))), (((((/* implicit */int) (signed char)-26)) | (arr_7 [i_0] [i_0] [i_0])))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_8] [i_8 + 1] [i_9]))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_1)) / ((+(arr_31 [i_8] [i_9])))))));
                                arr_38 [i_0] [i_1] [i_8] [i_9] [i_10] = (~(((2950248962181540955LL) / (((/* implicit */long long int) var_18)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 14; i_11 += 3) 
                    {
                        var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 2])) ? (arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2]) : (((/* implicit */unsigned long long int) 2950248962181540970LL))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8 + 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_8 + 2] [i_8 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 16; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0] [i_0]), (arr_31 [i_12 + 1] [i_8 - 1])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_0] [i_12 - 1])))));
                                arr_49 [i_0] [i_12 + 1] [i_12 + 1] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) 947675333636367399LL)) <= (((((/* implicit */_Bool) -4207749077839119376LL)) ? (((/* implicit */unsigned long long int) var_10)) : (14943147828400321422ULL)))))));
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) arr_1 [i_1] [i_0]))));
                var_28 = ((/* implicit */int) ((signed char) 494941384));
            }
        } 
    } 
    var_29 &= ((/* implicit */unsigned char) var_14);
}
