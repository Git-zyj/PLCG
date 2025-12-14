/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87868
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (signed char)90)))))) ? (var_6) : (min((((/* implicit */int) var_2)), (max((((/* implicit */int) var_8)), (-1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -29)) ? (((((-29) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) : (var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) - (arr_7 [i_0] [i_2] [i_4])))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((_Bool) arr_11 [i_4 - 1] [(_Bool)1] [(unsigned char)10] [i_4 - 2] [i_3 - 2]));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_16 [i_0] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    var_20 = var_16;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_19 [i_6] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_26 [i_8] [(unsigned char)12] [i_6] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((-245680967) == (0))) ? (((/* implicit */int) ((arr_17 [i_7 - 1] [i_7 - 1] [i_7 + 4]) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [(_Bool)1] [i_1] [i_7 + 2])))))) : (((/* implicit */int) max((((/* implicit */signed char) arr_20 [i_0 - 2] [i_0])), ((signed char)-113))))));
                                arr_27 [i_0 - 1] [i_0 - 1] [i_6] [i_1] [i_0 - 1] = ((/* implicit */int) arr_24 [(_Bool)1] [i_0 - 2] [i_7 + 4]);
                                arr_28 [i_0] [i_1] [i_6] [i_7 + 4] [i_8] [i_1] [i_6] = ((/* implicit */int) max(((unsigned char)228), (((/* implicit */unsigned char) (signed char)-90))));
                                arr_29 [i_0 - 2] [i_1] [(signed char)3] [i_0] [i_8] [i_7 - 1] = ((long long int) ((((/* implicit */int) arr_24 [i_7] [i_6] [i_1])) < (((/* implicit */int) arr_4 [i_0]))));
                            }
                        } 
                    } 
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_21 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)12)) ? (-30) : (1))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_9] [(unsigned short)1] [i_0] [i_11] = ((/* implicit */_Bool) (-(((long long int) -1308586592))));
                                arr_38 [(_Bool)1] [i_1] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_4 [i_0 + 1]), (((/* implicit */unsigned short) (_Bool)1))))) >> (((((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [0LL])) - (11620)))));
                            }
                        } 
                    } 
                    arr_39 [11] [i_0] [i_1] [12LL] = arr_33 [i_0 - 1] [i_0 + 1] [i_9] [i_1] [i_1];
                    var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_9] [i_0])) ? (((/* implicit */long long int) arr_14 [i_0 - 2] [i_0 - 2] [i_0])) : (((long long int) -8796093022208LL))))));
                }
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_21 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 2; i_14 < 15; i_14 += 2) 
                        {
                            {
                                arr_49 [i_13] [i_13] = ((/* implicit */unsigned char) ((_Bool) ((long long int) var_12)));
                                var_24 *= ((/* implicit */_Bool) (signed char)-32);
                                var_25 ^= ((/* implicit */unsigned char) var_1);
                                arr_50 [i_0 - 1] [i_0 + 2] = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
