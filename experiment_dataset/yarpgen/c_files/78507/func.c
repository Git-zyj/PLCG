/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78507
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
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned short) ((697813039U) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3597154256U))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-2225616321977378589LL)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_1] [(short)6] [i_1]))) + (697813039U))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned char i_6 = 4; i_6 < 6; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (-(arr_13 [i_6 + 2] [i_0] [i_0] [i_4] [i_0] [i_4])));
                            var_21 = ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))));
                        }
                    } 
                } 
            }
            for (int i_7 = 2; i_7 < 7; i_7 += 1) 
            {
                var_22 = ((/* implicit */_Bool) 697813039U);
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 7; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) 697813039U);
                            arr_26 [i_0] [i_0] [i_1] [i_1] [i_7] [5U] [i_9] = ((/* implicit */signed char) ((170706344) <= (63)));
                            arr_27 [i_0] [(short)0] [i_7] [i_7 - 1] [(unsigned char)3] [(unsigned char)3] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_7 + 1])) != (((/* implicit */int) var_9))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_7 + 1] [i_7 - 2]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_30 [i_0] [i_0] [i_0] [i_7] [5U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-64))))));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(697813039U)));
                    arr_32 [i_0] [i_7 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0]);
                    var_25 += ((/* implicit */_Bool) 3597154256U);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) (~((~(-64)))));
                    arr_36 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                    var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)3586)) ? (arr_21 [i_7] [i_7 + 3] [i_7 + 2] [i_7 + 1]) : (((/* implicit */unsigned int) var_0))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_40 [i_1] [i_1] [i_7] [i_0] [3] [(signed char)2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_20 [i_0] [i_7 - 2] [i_7 + 3] [i_7 + 2]))));
                    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_16 [(_Bool)1] [i_0] [i_0] [i_7 + 2] [i_12])))))));
                    arr_41 [i_0] [i_0] [i_1] [i_0] [i_12] = ((/* implicit */int) (signed char)-72);
                    var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_7 + 2] [i_12])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_7 - 1] [i_7]))));
                }
            }
            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)8543)) > (((/* implicit */int) (unsigned char)246))));
        }
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (signed char i_14 = 1; i_14 < 9; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_51 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */long long int) (+(697813039U)));
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) var_10);
                            var_32 -= ((/* implicit */short) 63);
                            var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0] [i_14 - 1] [i_16 + 1] [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-21088)) + (21090))))))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((3597154257U) << ((((((_Bool)0) ? (4862920278073848265LL) : (((/* implicit */long long int) 38064214)))) - (38064193LL))))))));
                            var_35 = ((/* implicit */signed char) ((unsigned int) arr_13 [i_14] [i_0] [i_14] [(short)7] [i_14 + 1] [i_14 - 1]));
                        }
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                            var_36 = ((/* implicit */unsigned char) var_8);
                        }
                        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)21087))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_29 [i_0] [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 1] [i_15]))));
                            var_38 = ((/* implicit */unsigned int) var_8);
                            var_39 = ((/* implicit */short) var_7);
                        }
                        var_40 = ((/* implicit */signed char) var_11);
                        var_41 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) 1636132776U))), (((((/* implicit */_Bool) (~(-1932358069)))) ? (min((((/* implicit */unsigned int) (_Bool)0)), (363068627U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_43 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6))));
}
