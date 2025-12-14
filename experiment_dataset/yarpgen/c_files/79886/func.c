/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79886
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_14)));
        var_18 = ((/* implicit */long long int) arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_2 [i_2 - 1]))));
                    arr_8 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)235);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_2] [i_1] [i_1] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((868573244) / (((/* implicit */int) var_5))))) <= (18379751040449539706ULL)));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_14 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_1 + 1] [i_4])))) % (((/* implicit */int) var_14)))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) arr_4 [i_2 - 1] [i_2 - 1]));
                                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) arr_5 [i_0 - 2] [i_2] [i_2 - 1])) * (((/* implicit */int) arr_11 [i_0 - 2]))))));
                                var_22 = var_0;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_5])) && (((/* implicit */_Bool) arr_10 [4LL] [i_5] [20LL] [i_5])))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)242)))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5961)) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_5])))))));
        arr_21 [i_5] [(_Bool)1] = ((int) arr_10 [i_5] [i_5] [i_5] [i_5]);
        var_25 = ((/* implicit */short) arr_0 [i_5]);
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) (signed char)-86))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34676)))) : (((/* implicit */int) (unsigned char)9)))), (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)247))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)16042)) < (arr_23 [i_6]))))))))))));
        arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])), (max((-1479847895), (((/* implicit */int) arr_24 [i_6]))))))) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) >> (((((/* implicit */int) (short)32763)) - (32749))))))));
        arr_27 [i_6] = ((/* implicit */_Bool) -3964899043275436895LL);
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_29 [i_7 + 2]))) ? ((~(((/* implicit */int) (signed char)-27)))) : (((/* implicit */int) (signed char)-61))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-2924513426302130731LL), (-5661751742121539973LL)))) ? ((((!(((/* implicit */_Bool) -7008530611193654120LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_7] [2U] [i_8]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_8]))) + (arr_30 [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)107)) * (((/* implicit */int) (unsigned char)18))))))));
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (int i_10 = 2; i_10 < 20; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_43 [i_11] [i_9] [i_9] [i_7 + 1] [i_8] [i_9] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_7 + 4])) ? (((/* implicit */int) arr_31 [i_7 + 2])) : (((/* implicit */int) arr_31 [i_7 + 2]))))) ? (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_9] [i_7])) : (min((arr_30 [i_8] [i_11]), (((/* implicit */unsigned long long int) (unsigned char)8))))));
                                var_29 ^= arr_18 [i_10];
                                var_30 = ((/* implicit */int) min((var_30), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_32 [i_7 + 2] [i_10])) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_31 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(-5086560196441720503LL))))))));
}
