/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76104
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
    var_16 -= ((long long int) ((var_1) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-4540930077074017080LL)))));
    var_17 = ((/* implicit */long long int) 13089542649688538652ULL);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((+(var_9))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                arr_9 [i_1] = ((((((/* implicit */_Bool) var_10)) ? (-1482744640841877758LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) % (((/* implicit */long long int) var_3)));
                var_19 += ((/* implicit */short) arr_5 [i_0] [i_0]);
            }
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                var_20 = ((/* implicit */long long int) (+(arr_7 [i_0] [i_1] [i_3 + 2])));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                arr_16 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4])))));
                var_22 = ((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4]);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    arr_20 [i_0] [14ULL] [i_4] [14ULL] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
                    arr_21 [i_0] [(_Bool)1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) - (arr_14 [i_0] [i_1])));
                    arr_22 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((arr_7 [i_0] [i_0] [i_4]) > (((/* implicit */unsigned long long int) 1482744640841877757LL)))))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_6]))));
                arr_26 [i_0] [i_1] [i_6] [i_0] = arr_4 [i_0];
            }
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((+(7LL))) % (((/* implicit */long long int) var_6)))))));
                            var_25 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_28 [i_0])) || (((/* implicit */_Bool) 28LL))))));
                            var_26 |= ((/* implicit */unsigned long long int) 3280026688U);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_43 [i_1] [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_10]))) / (arr_7 [i_0] [i_1] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [6LL] [i_1] [0U] [0U]))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_4))));
                            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) var_7)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_13 = 3; i_13 < 14; i_13 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((+(var_5))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_4))))))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_30 |= -1311339107118509290LL;
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_41 [i_0] [i_1] [i_13] [i_14] [12ULL])))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((arr_24 [i_0] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    var_33 = -1482744640841877758LL;
                    var_34 = ((/* implicit */int) 2754518198U);
                    var_35 = ((/* implicit */long long int) (-((-(2254144763U)))));
                    var_36 = ((/* implicit */int) arr_24 [i_0] [i_1] [i_0]);
                }
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_16])))))));
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    arr_56 [i_16] [i_1] [i_16] [i_18] = ((/* implicit */unsigned long long int) arr_54 [10ULL] [10ULL]);
                    var_38 = ((unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    var_39 = ((/* implicit */unsigned int) var_13);
                    var_40 += ((/* implicit */unsigned char) arr_58 [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_52 [i_0] [i_1] [i_1] [i_19]) >= (((/* implicit */int) arr_55 [i_0] [i_1] [i_16] [14U] [i_20])))))));
                        arr_62 [i_0] [i_16] [i_19] [i_1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [10LL] [10LL] [i_16] [10LL])))))));
                    }
                }
            }
        }
        for (long long int i_21 = 1; i_21 < 13; i_21 += 2) 
        {
            var_42 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_9))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
            arr_65 [8U] [i_21 - 1] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_21]) : (((/* implicit */unsigned long long int) ((arr_36 [i_0] [i_21] [i_21]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
            arr_66 [i_0] = (-(var_11));
            arr_67 [i_0] [i_21 - 1] [i_21 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) 5357201424021012963ULL))));
            var_43 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (var_5)));
        }
        for (short i_22 = 3; i_22 < 13; i_22 += 2) 
        {
            arr_72 [i_22] = ((/* implicit */short) (((!(((/* implicit */_Bool) -28LL)))) ? (5357201424021012961ULL) : (((/* implicit */unsigned long long int) -4540930077074017080LL))));
            arr_73 [i_22] [i_22 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_22 - 2] [i_22] [i_22 - 2]))));
            var_44 = ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_22 + 1] [(unsigned char)7] [i_0]));
            arr_74 [i_22] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_47 [i_22 - 1] [i_22 - 2] [i_22 - 3] [i_22] [i_22 + 2])) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        }
        for (unsigned char i_23 = 2; i_23 < 13; i_23 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_24 = 2; i_24 < 13; i_24 += 4) 
            {
                var_45 = ((/* implicit */int) max((var_45), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_24 + 1] [i_0] [i_0]))))) >> (((((/* implicit */int) arr_33 [i_0] [i_0] [i_23] [i_24] [i_24])) - (17)))))));
                var_46 = ((/* implicit */unsigned int) arr_59 [i_0] [i_23 + 2] [i_0] [i_23 + 2] [i_0]);
                var_47 = ((/* implicit */unsigned char) var_7);
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_48 = ((/* implicit */unsigned char) (_Bool)1);
                var_49 = ((/* implicit */unsigned char) ((unsigned int) (+(var_10))));
                var_50 += ((/* implicit */unsigned long long int) var_3);
                var_51 |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2254144763U))))) >> (((/* implicit */int) var_4))));
            }
            arr_82 [i_0] [i_0] [i_0] = ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        }
        var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) (-((-(arr_14 [i_0] [i_0]))))))));
        var_53 -= ((/* implicit */unsigned int) var_12);
    }
}
