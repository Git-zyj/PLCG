/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94250
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)4)) || ((_Bool)0)));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_13)))))) + (min((((/* implicit */int) var_1)), (min((var_11), (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) var_14));
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_16)))));
                            arr_27 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                            var_24 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_19 [i_6 - 1] [i_1 - 2] [i_0 + 1])));
                        }
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_14))));
                            arr_34 [i_9] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */long long int) ((arr_4 [i_6 - 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 2])))));
                        }
                        arr_35 [i_0] [i_0 - 2] [i_0] [i_5] [i_0 - 2] = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    }
                    arr_36 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */signed char) var_2);
                }
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [5ULL])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_10])) : (((/* implicit */int) arr_22 [i_10])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_0])), (arr_17 [i_10] [i_1] [i_1] [i_10])))) : (arr_37 [i_10] [i_10] [i_10] [i_10]))))))));
                    arr_39 [i_0] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)12), (arr_32 [i_1] [i_10] [i_1] [i_1] [(short)15])))))))));
                    arr_40 [i_0] [i_10] [i_10] |= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_1] [i_0] [i_1])) ? (-1303461616088806738LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) * (((min((((/* implicit */long long int) arr_22 [i_10])), (arr_4 [i_10]))) >> (min((((/* implicit */int) (_Bool)1)), (arr_17 [i_10] [i_10] [i_10] [i_10])))))));
                    arr_41 [i_0] [i_10] |= ((/* implicit */unsigned short) max((min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */int) ((arr_1 [i_0]) != (var_4)))))), (((/* implicit */int) (!((_Bool)1))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) (((_Bool)1) && ((_Bool)1)));
                            var_27 = (_Bool)1;
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)94))))) ? (((/* implicit */int) (unsigned short)17246)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 11; i_13 += 2) 
    {
        for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) 
        {
            {
                var_29 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_31 [i_13 - 2] [i_14] [i_14] [i_14] [i_14])))));
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [i_14] [i_14 - 1] [i_14] [i_14] [i_14])), (var_15))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3)))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_13] [i_13] [(_Bool)1]))) + (arr_44 [i_13] [i_13] [i_13] [i_13])))))) : (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((unsigned long long int) 0ULL));
}
