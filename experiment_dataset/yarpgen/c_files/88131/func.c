/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88131
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (((~(4169933858U))) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (arr_3 [(short)16] [i_0 + 3] [(short)16]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        arr_11 [8ULL] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10))))));
                        var_14 = (((!(((/* implicit */_Bool) var_11)))) ? (((long long int) var_3)) : (arr_6 [i_0 + 2] [i_1 - 3]));
                        var_15 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_3]))));
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_16 *= ((/* implicit */short) (-(arr_9 [i_4] [i_1 - 3])));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(var_8))))));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0 + 3] [i_0] [i_0] [11LL] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2]))));
                        var_18 ^= ((/* implicit */_Bool) var_9);
                        var_19 = ((/* implicit */unsigned char) arr_4 [i_0]);
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_20 *= ((/* implicit */short) arr_13 [i_5] [i_5]);
                            arr_20 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (!(arr_5 [i_0 + 3] [i_0 - 1])));
                            var_21 = ((/* implicit */unsigned long long int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1])))));
                            var_22 |= ((/* implicit */short) ((unsigned char) var_12));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_0] [(unsigned short)6] [i_2] [i_5] [i_5] |= ((/* implicit */short) arr_13 [i_5] [i_2]);
                            var_23 += ((/* implicit */long long int) ((unsigned int) arr_1 [i_0 + 2]));
                        }
                        for (long long int i_8 = 3; i_8 < 16; i_8 += 4) 
                        {
                            var_24 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) arr_19 [2LL] [i_2]))))))));
                            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((long long int) -2059133758307232637LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)14] [i_5]))))))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned short) arr_27 [i_1] [i_2] [i_1] [i_1] [i_0]);
                    arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [4LL] [i_1]))) : (var_7))))));
                    var_27 = ((/* implicit */unsigned int) ((long long int) (short)-15287));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_28 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [(_Bool)0] [i_9] [6LL]))) : (max((var_12), (((/* implicit */unsigned long long int) 0LL)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((short)17), ((short)15269)))) > (((/* implicit */int) arr_12 [4ULL] [i_9] [i_9] [i_9] [i_9]))))))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9]))) < (arr_0 [i_9]))))) <= (((long long int) min((((/* implicit */unsigned int) var_9)), (var_7))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_23 [3LL] [i_9] [i_9] [i_9] [(unsigned short)3] [i_9])) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */short) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9])))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_1)))))) : ((-(0LL)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)13931)) : (((/* implicit */int) (short)17))));
        arr_37 [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(max((-3026885597682241136LL), (((/* implicit */long long int) (short)-22)))))))));
    }
    for (short i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        var_32 ^= ((/* implicit */short) (((-(((/* implicit */int) ((short) var_6))))) * (((/* implicit */int) ((var_2) > (arr_6 [i_11] [5LL]))))));
        var_33 = ((/* implicit */short) (-(((/* implicit */int) ((arr_13 [i_11] [i_11]) != (arr_13 [i_11] [i_11]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 2; i_12 < 9; i_12 += 4) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) arr_22 [i_11] [i_11] [i_11] [(unsigned short)1] [i_11]))) : (((/* implicit */int) var_10))));
            var_35 = ((/* implicit */long long int) max((var_35), (((((/* implicit */_Bool) ((short) var_7))) ? ((-(-3026885597682241136LL))) : (arr_0 [i_12])))));
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            arr_47 [i_11] = ((/* implicit */long long int) var_5);
            var_36 = ((/* implicit */short) ((_Bool) ((var_2) == (((/* implicit */long long int) var_7)))));
            arr_48 [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_46 [i_11])), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)13931))))))) | (min((((/* implicit */unsigned int) var_0)), (arr_45 [i_13])))));
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_37 = arr_18 [i_16];
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)13915))))) / (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_14] [i_14] [i_11] [i_14]))) % (arr_22 [i_13] [i_13] [i_13] [i_13] [i_13]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [(short)12] [15U] [15U] [i_11] [i_11])) : (((/* implicit */int) (short)-5685))))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_39 = ((/* implicit */unsigned short) var_7);
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-15270)) ? (-1LL) : (((/* implicit */long long int) var_1)))))) ? (min((((/* implicit */long long int) min(((unsigned short)51601), (((/* implicit */unsigned short) (short)17))))), (((long long int) (short)-6021)))) : (((/* implicit */long long int) ((unsigned int) (short)32767)))));
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_3))));
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (arr_51 [i_17] [i_17] [i_17] [i_18] [i_18]) : (((/* implicit */long long int) var_1)))) != (min((var_8), (arr_51 [i_17] [i_17] [3ULL] [i_18] [i_18]))))))));
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_43 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_54 [i_19] [i_18] [i_19] [i_17] [i_17] [i_18]) != (arr_54 [i_17] [i_17] [i_17] [i_18] [i_18] [i_19])))), (min((arr_54 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_54 [i_17] [i_17] [i_17] [i_18] [i_17] [i_19])))));
                var_44 += ((/* implicit */unsigned char) arr_19 [i_17] [i_17]);
            }
            var_45 = (short)-1;
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_46 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_14 [i_17] [4LL] [i_17] [i_17] [i_20])))) : (((/* implicit */int) ((7LL) == (((/* implicit */long long int) var_1))))))))));
            var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28186)) ? (-7244093254921296676LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))))))));
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_48 = ((/* implicit */short) max((var_48), (((short) ((((/* implicit */int) (unsigned char)61)) * (((/* implicit */int) (unsigned short)54525)))))));
                        var_49 = ((/* implicit */long long int) var_1);
                        var_50 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_22])) == (((((/* implicit */int) (unsigned short)13904)) + (((/* implicit */int) (unsigned short)51631))))));
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) var_10))));
                    }
                } 
            } 
            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) var_12))));
        }
    }
    var_53 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (var_8));
    var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) var_0))));
}
