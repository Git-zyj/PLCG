/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92933
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_4 [0U] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_0))) * (((/* implicit */int) ((unsigned short) -1416053592)))));
        var_14 = -1416053594;
        var_15 = ((/* implicit */unsigned int) (-(((long long int) arr_3 [i_0]))));
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) var_3);
        arr_6 [i_0] = ((unsigned int) ((((/* implicit */_Bool) (signed char)32)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) 1416053594))));
    }
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] = 1416053603;
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) var_8));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_17 [i_1] [2ULL] = ((/* implicit */int) min((((long long int) arr_15 [i_3 - 2] [i_3 - 2] [i_1])), (((/* implicit */long long int) -1416053592))));
                    arr_18 [i_1] [(signed char)3] [i_3 + 1] = ((/* implicit */int) arr_14 [i_2] [i_2] [i_3]);
                    arr_19 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1] [i_2]);
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_23 [5LL] = ((/* implicit */short) arr_21 [i_4]);
        var_17 = ((/* implicit */unsigned int) var_4);
        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) min((min((arr_20 [i_4]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_1)))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    arr_30 [i_6] [i_5] [8] = ((/* implicit */long long int) var_11);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_35 [i_8] [i_7] [i_6] [i_5] [i_8] = ((/* implicit */int) ((unsigned char) var_7));
                                var_19 = ((/* implicit */unsigned short) ((int) ((long long int) (~(((/* implicit */int) (unsigned char)93))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            {
                                arr_40 [i_4] [2U] [i_9] [i_10] = ((/* implicit */long long int) var_5);
                                arr_41 [i_10] [0U] [12ULL] [i_5] [i_10] = ((/* implicit */long long int) ((signed char) arr_27 [i_4]));
                                var_20 = ((/* implicit */signed char) arr_20 [(unsigned short)15]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) 1473939711U);
        var_22 = ((/* implicit */int) arr_42 [i_11] [i_11]);
        var_23 = ((/* implicit */unsigned char) arr_2 [i_11] [20ULL]);
        arr_44 [i_11] = ((/* implicit */_Bool) ((int) 1416053586));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((((long long int) min((((/* implicit */signed char) var_7)), (arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */long long int) (-(var_13))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_15] [i_14] [i_12] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((1416053600), (((/* implicit */int) var_7))))) ? (1416053596) : (((/* implicit */int) (unsigned short)30310))));
                            arr_57 [i_11] [i_12] [i_13] [i_13] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) ? (arr_2 [i_11] [i_11]) : (arr_2 [i_11] [i_11])))) ? (arr_2 [i_11] [i_11]) : ((~(1416053580)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                        {
                            arr_62 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */int) arr_42 [2U] [i_14]);
                            arr_63 [(unsigned short)19] [i_12] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned int) 323589093U));
                        }
                        /* vectorizable */
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                        {
                            arr_67 [i_11] [i_12] [i_17] [i_14] [i_12] [i_14] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_11] [i_12]))) * (20U)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) : (((unsigned long long int) arr_52 [i_11] [i_12] [(signed char)11] [i_13] [i_14] [i_17]))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */_Bool) -7453155967400374291LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_11] [i_12] [i_13] [i_11] [i_14] [(unsigned short)16]))) : (3373650718U))))));
                    }
                } 
            } 
        } 
    }
}
