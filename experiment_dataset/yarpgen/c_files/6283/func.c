/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6283
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) max(((unsigned char)181), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) var_1))))), (1210517017U)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_12 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_1] [i_1] [i_2] [i_2] [i_4]))) != (arr_10 [i_0 - 1] [i_1] [i_3 + 1] [i_4])));
                            arr_13 [i_0] [(unsigned char)6] [i_2] [i_3] [i_4] = ((/* implicit */short) var_6);
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_10)))) ^ (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_3 [i_0] [i_1]))))));
            var_14 |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [18ULL] [18ULL] [i_1]))) <= (16773120U))));
        }
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (signed char)-1)))));
    }
    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned int) (_Bool)1);
                                arr_30 [i_5] [i_6 - 1] [i_6 - 1] [i_8] [i_6 - 1] [i_9] = arr_23 [i_7] [i_8] [i_5];
                                var_17 = ((/* implicit */signed char) min((arr_3 [i_8] [i_9 + 1]), (((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))) & (var_0))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) arr_5 [i_7]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            {
                                arr_38 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) < (((/* implicit */int) var_4)))))));
                                arr_39 [i_5] [i_6 + 1] [i_6 + 1] [i_5] [i_11] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                                arr_54 [i_5] [i_5 + 1] [i_12] [i_12] [i_14] [i_5] = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    arr_55 [i_5] [i_13] [i_12] [i_13] |= ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_11 [i_5] [i_12] [i_13])), (var_2)))) ? (((/* implicit */int) min((arr_52 [i_13]), (((/* implicit */short) ((unsigned char) arr_17 [i_13] [i_13])))))) : (((((_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_49 [i_13])) ^ (((/* implicit */int) arr_18 [i_5] [i_5])))))));
                    arr_56 [i_5] [i_5] [(unsigned short)16] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_5] [i_13])) - (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_5] [i_5]))))) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_12] [i_12] [i_12] [i_13] [i_13])) : (((/* implicit */int) ((unsigned char) var_8)))))));
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        var_20 ^= ((/* implicit */int) ((unsigned char) min(((~(((/* implicit */int) arr_35 [i_13] [i_16])))), (((/* implicit */int) arr_52 [i_16])))));
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((unsigned int) var_7)), (((/* implicit */unsigned int) max((var_10), (arr_49 [i_16])))))))));
                    }
                    for (short i_17 = 2; i_17 < 15; i_17 += 3) 
                    {
                        var_23 -= (~(((/* implicit */int) max((arr_16 [i_5 + 1]), (arr_16 [i_5 - 2])))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((arr_52 [i_13]), (((/* implicit */short) arr_3 [i_5 - 2] [i_17]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_13]))) : ((-(arr_26 [(signed char)16]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) 2LL);
                        /* LoopSeq 3 */
                        for (unsigned int i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_48 [i_19] [i_13] [i_18 - 1] [i_19]))))))));
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_13] [i_18 + 2])) * (((((/* implicit */int) arr_35 [i_13] [i_19])) * (((/* implicit */int) arr_20 [i_13] [i_19]))))));
                            var_28 |= ((/* implicit */unsigned long long int) (signed char)121);
                        }
                        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_46 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_18 + 2])))))));
                            var_30 = (!(((/* implicit */_Bool) ((short) var_6))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 17; i_21 += 2) 
                        {
                            var_31 = ((((/* implicit */int) ((signed char) var_3))) > (((/* implicit */int) ((unsigned short) arr_65 [i_5 - 1] [i_12] [i_13] [(short)10] [i_18] [i_21]))));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (arr_58 [i_5 - 1]))))));
                            arr_69 [i_5] [i_13] [i_18 + 2] [i_21] = ((/* implicit */unsigned char) ((unsigned int) 19LL));
                        }
                    }
                    var_33 = ((/* implicit */_Bool) min((var_33), ((!(((/* implicit */_Bool) arr_40 [i_5 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            for (short i_23 = 1; i_23 < 16; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((long long int) var_10)))));
                        arr_77 [i_5] [i_22] [i_23 + 1] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_70 [i_5] [i_23 + 1])), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_70 [i_5] [i_23 - 1])) < (((/* implicit */int) arr_70 [i_5] [i_23 + 1])))))) : (var_0)));
                    }
                } 
            } 
        } 
    }
}
