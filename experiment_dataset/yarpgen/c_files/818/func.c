/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/818
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_4 [i_0 + 3]))))));
                    var_15 = ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_9 [i_5 - 1] [i_5 - 1])))), ((~(((/* implicit */int) (unsigned char)173))))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 += ((/* implicit */unsigned short) arr_0 [i_4]);
                        var_18 = ((/* implicit */unsigned short) min((min((var_2), (((/* implicit */long long int) -1656311232)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_5])))))));
                        arr_17 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) arr_2 [i_5]);
                        var_19 = ((/* implicit */_Bool) 1656311232);
                    }
                    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        arr_21 [i_5] = arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_5] [i_7 - 1];
                        var_20 = ((/* implicit */unsigned int) arr_5 [i_5] [i_5] [i_5]);
                        var_21 = ((/* implicit */unsigned short) arr_15 [i_3] [i_4] [i_4] [i_5] [i_5]);
                    }
                    for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        arr_24 [i_3] [i_5] [i_5] [i_8] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_5] [i_3] [i_3] [i_5]))))), (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (arr_20 [i_3] [i_5] [i_3] [i_5] [i_5] [i_4]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))));
                        arr_25 [i_5] [i_5] [i_5] = ((/* implicit */short) ((4294967276U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_26 [i_5] [i_5] [i_5] [i_4] = var_12;
                        arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)22517), (((/* implicit */unsigned short) (signed char)49)))))))) + (min((arr_5 [i_5] [i_5 + 1] [i_5 + 4]), (arr_5 [i_5] [i_5 - 2] [i_5 + 1])))));
                    }
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (int i_9 = 1; i_9 < 20; i_9 += 4) 
    {
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_9 - 1] [i_9 + 1] [i_9 - 1])) <= (((/* implicit */int) arr_7 [i_9] [i_9 + 1] [i_9 + 1])))))));
        arr_31 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)34920))))) <= (max((((/* implicit */long long int) arr_29 [i_9])), (var_12)))));
    }
    for (unsigned short i_10 = 3; i_10 < 14; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            arr_39 [i_10] = ((/* implicit */unsigned short) max((((int) arr_29 [i_10 - 2])), ((-(((/* implicit */int) arr_33 [i_10]))))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (arr_15 [i_10] [i_10] [i_11] [i_11] [i_10]))))) | (((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (signed char)72)))))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    {
                        arr_46 [i_10] [i_10] [i_10] [i_13] [i_10] = ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_12]))))));
                        arr_47 [i_10] [i_10] [i_12] [i_10] = ((/* implicit */unsigned char) arr_20 [i_10] [i_11] [i_12] [i_10] [i_11] [i_11]);
                        var_25 -= ((/* implicit */unsigned short) arr_14 [i_11] [i_10 - 1] [i_11]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_26 = ((/* implicit */int) 3022450320U);
                var_27 = ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_10 - 1] [i_10 - 1])) <= (((/* implicit */int) arr_9 [i_10 - 1] [i_10 + 1]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)92))))));
                arr_51 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_11] [i_10])) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (short)3829)) >> (((((/* implicit */int) (short)7656)) - (7628)))))) % (arr_3 [i_11] [i_10 + 1] [i_14]))) : (arr_2 [i_11])));
            }
            for (unsigned long long int i_15 = 2; i_15 < 14; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_15] [i_15] [i_15]))));
                    var_28 = var_6;
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_38 [i_10] [i_10]))));
                    var_30 = ((/* implicit */_Bool) (unsigned short)26940);
                }
                var_31 = ((/* implicit */unsigned int) arr_11 [i_11] [i_15]);
                var_32 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)54));
            }
            for (unsigned long long int i_17 = 2; i_17 < 14; i_17 += 2) /* same iter space */
            {
                arr_62 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((arr_20 [i_17 - 2] [i_11] [i_10 - 3] [i_17 - 2] [i_17] [i_10]) + (arr_20 [i_17 + 1] [i_17] [i_10 + 1] [i_17] [i_17 + 1] [i_17]))) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) - (arr_20 [i_17 - 2] [i_17] [i_10 + 1] [i_10 + 1] [i_17] [i_17])))));
                arr_63 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((unsigned int) arr_52 [i_10 - 1] [i_10 - 1] [i_10 - 1])) | (((((/* implicit */_Bool) (short)24435)) ? (32U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_18 = 1; i_18 < 14; i_18 += 1) 
                {
                    var_33 = ((/* implicit */short) (+((-(363203095U)))));
                    var_34 = ((/* implicit */unsigned char) 1073741792U);
                    var_35 = (+(arr_44 [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_17 + 1]));
                    arr_66 [i_18] [i_18] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_12 [i_10])))) <= (((((/* implicit */int) arr_52 [i_10] [i_10] [i_10])) * (((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_10] [i_10] [i_18]))))));
                    arr_67 [i_10] [i_10] [i_10] [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_10]))));
                }
            }
        }
        arr_68 [i_10] = (unsigned char)39;
    }
}
