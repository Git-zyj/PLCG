/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72986
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) 2130719092859067921ULL);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(2130719092859067921ULL))) + (16316024980850483678ULL)))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 1])), (17332607150270255911ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            var_14 = var_6;
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_12 [i_3] [i_3] [(unsigned char)7] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1114136923439295733ULL)))))));
                        var_15 *= ((/* implicit */short) ((var_5) + (arr_4 [i_2 - 1])));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_2 - 2]);
        }
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_7] [i_6] [i_0] [i_0]))))) : (var_8)));
                        arr_23 [i_0] [i_7] [i_5] [i_0] [i_7] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_5]))))) : (2130719092859067915ULL));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_5 + 2] [i_5 + 2] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_5 + 1])) ? (((/* implicit */long long int) var_7)) : (-1042119286893070122LL)))));
                            arr_31 [10] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (int i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) arr_33 [i_12 - 2] [i_12 + 3]);
                        arr_42 [i_14] [i_13] [i_12] [i_13] [i_11] = ((/* implicit */short) (-(((/* implicit */int) arr_39 [i_13] [i_13] [i_12] [i_11]))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
    }
    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3)))))) : (((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            for (unsigned char i_17 = 2; i_17 < 9; i_17 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) arr_11 [i_15] [i_15] [i_15] [i_17]);
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) var_4);
                        var_25 *= ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (short)25510)), (arr_17 [i_18 + 1] [i_18] [i_17 - 2])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65402))))))));
                            var_27 += ((/* implicit */unsigned char) 16316024980850483700ULL);
                            var_28 = (~(((/* implicit */int) var_11)));
                            var_29 = ((/* implicit */unsigned long long int) -1924691897);
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            var_30 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) % (arr_38 [i_17 - 1] [i_16] [i_17 + 1]))) != ((~(arr_38 [2] [i_16] [i_17 + 1])))));
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) 1924691896))))) : (1924691894)))) <= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_3)))) ? (arr_30 [i_18 + 1]) : (((17332607150270255911ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))))));
                        }
                    }
                    for (short i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) arr_55 [i_15] [i_15] [(unsigned char)4] [i_21] [i_16] [3U] [i_21]);
                        /* LoopSeq 1 */
                        for (short i_22 = 0; i_22 < 10; i_22 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_47 [i_17 - 1] [i_22]))));
                            var_34 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_5)) & (arr_15 [i_16] [i_15]))) | (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6)))))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                    {
                        var_35 -= ((/* implicit */unsigned int) var_7);
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)10409)) ? (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_15] [i_15] [i_17]) <= (((/* implicit */unsigned long long int) 1924691897))))))));
                        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_23]))));
                        arr_63 [i_23] [i_15] [i_16] [i_23] = ((/* implicit */unsigned short) 18085349003834501757ULL);
                    }
                    arr_64 [i_15] [i_16] [i_17] [i_16] = ((/* implicit */short) var_4);
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1924691913)) ? (var_5) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-907))) : (3942670643152529529ULL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_24 = 0; i_24 < 14; i_24 += 1) 
    {
        arr_69 [i_24] = ((/* implicit */unsigned int) ((arr_0 [(unsigned char)9]) ^ ((~(((/* implicit */int) (signed char)6))))));
        var_39 = var_7;
        var_40 = ((/* implicit */short) ((arr_41 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [8ULL])) ? (((/* implicit */int) arr_9 [i_24])) : (((/* implicit */int) var_10)))))));
        /* LoopNest 2 */
        for (unsigned char i_25 = 1; i_25 < 11; i_25 += 3) 
        {
            for (unsigned int i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                {
                    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_25 + 2] [i_25 + 1] [i_25 + 2] [i_25] [i_25 + 2])) ? (arr_18 [i_25 + 3] [i_25] [i_25 + 2]) : (2130719092859067916ULL)));
                    var_42 = arr_37 [i_24] [i_24];
                }
            } 
        } 
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)27)) ? (var_2) : (((/* implicit */unsigned long long int) arr_72 [i_24])))))));
    }
    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((((var_7) & (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_1))))))) : (17332607150270255895ULL)));
        var_45 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1924691901)) ? (var_3) : (((/* implicit */unsigned int) 1924691898))))) ? ((-(16316024980850483699ULL))) : ((-(arr_76 [i_27] [i_27]))))) / (((arr_38 [(unsigned short)2] [i_27] [i_27]) / (min((((/* implicit */unsigned long long int) -1924691901)), (arr_38 [i_27] [i_27] [i_27])))))));
        var_46 *= ((((/* implicit */_Bool) (+(1707176079U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (1114136923439295705ULL));
    }
    for (unsigned char i_28 = 0; i_28 < 17; i_28 += 4) /* same iter space */
    {
        var_47 *= (unsigned char)92;
        var_48 &= ((/* implicit */unsigned int) arr_38 [i_28] [i_28] [i_28]);
    }
    /* vectorizable */
    for (unsigned char i_29 = 0; i_29 < 17; i_29 += 4) /* same iter space */
    {
        var_49 ^= 6195164927741768011ULL;
        /* LoopSeq 1 */
        for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 1) 
        {
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_51 = ((/* implicit */signed char) var_10);
            arr_87 [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_37 [i_29] [i_29]))));
        }
    }
}
