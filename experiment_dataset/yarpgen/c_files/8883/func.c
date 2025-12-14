/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8883
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((-266708344) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) arr_6 [i_1] [i_1])) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1 - 2] [1U])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1]))))) ? (((/* implicit */int) (short)29731)) : ((~(((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1 - 1] [i_1 - 2]))) ? (((/* implicit */int) max((arr_0 [i_1 - 2] [i_1 + 1]), ((short)29720)))) : ((-(((/* implicit */int) (unsigned char)13))))));
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_14 = min((((unsigned int) arr_4 [i_1 + 1])), (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned int) var_0)), (arr_6 [i_1] [i_2 + 1]))))));
            var_15 = ((/* implicit */short) var_7);
        }
        for (short i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            var_16 = arr_11 [i_1];
            arr_13 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_3 - 1]);
            var_17 = (~(((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) (short)-22622)) : (((/* implicit */int) var_12)))));
        }
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) (-(var_10)));
                arr_20 [4LL] [i_4] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
            }
            for (int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
            {
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_8 [i_4] [i_4])))) ? (((/* implicit */int) (short)-28520)) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_5))))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) arr_9 [i_4]))))) : (arr_14 [i_1 + 1] [i_4] [i_1 - 2]))) : (min((((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_1 + 1])), ((+(arr_17 [i_1] [i_4] [i_4] [(signed char)8])))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)207)))))));
            }
            var_22 = ((/* implicit */unsigned int) (+((+(2147483625)))));
            /* LoopSeq 2 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_1] [i_1 + 1]))));
                            var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3950204937715645580LL)) ? (arr_14 [i_7 - 1] [i_4] [i_1 + 1]) : (arr_14 [i_7 - 1] [i_4] [i_1 + 1])))) : ((~(((long long int) arr_25 [i_1] [9] [i_7]))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((max((arr_14 [i_1] [i_1] [i_1]), (arr_14 [i_4] [i_1] [i_9]))), (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned int) 1548929809)) : (arr_14 [i_8] [i_1] [i_4]))))))));
                            arr_30 [i_1] [i_4] [i_7] [i_4] [14U] = var_5;
                        }
                    } 
                } 
                arr_31 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_4]))));
            }
            for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 13; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (~(-55050913)));
                            var_27 = ((/* implicit */unsigned char) max((min((max((((/* implicit */int) arr_26 [i_1] [i_4] [i_10 - 1] [i_11] [(unsigned char)13] [i_12])), (arr_34 [i_1] [i_4] [i_10 + 1] [i_11 - 2]))), ((-(((/* implicit */int) (unsigned char)216)))))), (((/* implicit */int) (((-(arr_6 [i_4] [i_10]))) < (min((arr_29 [i_1] [i_1] [i_10] [i_11] [(unsigned char)9]), (arr_11 [i_10]))))))));
                            arr_38 [i_12] [i_4] [i_10] [i_11] [i_12] &= ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1 + 1] [i_1])), (266708344)))) ? (((/* implicit */long long int) 738002038)) : (9223372036854775806LL));
                            arr_39 [i_12] [i_12] [i_10 - 1] [i_12] [i_1] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((-3154332013170582841LL) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            arr_40 [i_1] [i_11] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_17 [i_1 - 2] [i_4] [i_1 - 2] [i_12])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_10] [i_1] [i_10 - 1] [i_10 + 1])) ? (arr_17 [i_1 - 1] [i_4] [i_10 + 1] [i_4]) : (((/* implicit */unsigned int) arr_4 [i_11 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_13 = 2; i_13 < 14; i_13 += 4) 
                {
                    arr_44 [i_1 + 1] [i_4] [i_10] [i_4] [i_10] [i_13] = ((/* implicit */short) (-(-1454942114)));
                    var_28 = ((/* implicit */signed char) max((((/* implicit */short) ((((unsigned int) arr_15 [i_1] [i_1] [i_1])) > (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (arr_15 [i_1 - 1] [i_4] [i_1 - 1])))))))), (arr_41 [i_4] [i_4] [i_4] [i_10] [i_13])));
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
                    {
                        arr_47 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_33 [i_1 - 2] [i_10 - 1] [i_13 - 1]), (arr_25 [i_10] [i_10 + 1] [i_13 - 1])))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) min(((unsigned char)36), (arr_26 [i_1] [i_10 + 2] [i_13] [i_13] [i_13] [i_13 + 1]))))));
                        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_1]), (((/* implicit */short) var_5))))) ? ((-(((/* implicit */int) arr_27 [i_1])))) : (((/* implicit */int) min((arr_26 [i_1] [(signed char)5] [i_10 - 1] [i_1] [i_13 + 1] [i_14]), (((/* implicit */unsigned char) arr_9 [i_14])))))))) ? (min((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13]))) & (arr_17 [i_14] [i_10] [i_4] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(-3154332013170582841LL))))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                    {
                        arr_50 [i_1] [i_4] [i_10] [i_13] [i_15] &= ((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_10 - 1] [i_15] [i_13 - 2])) << (((arr_19 [i_10 - 1] [i_10] [i_13 - 2] [i_13]) - (331133668U)))));
                        var_30 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) -284438996)))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_4] [i_15] [i_10 - 1] [i_10 + 1] [i_4])) == ((-(((/* implicit */int) arr_15 [i_4] [i_10] [i_13 + 1]))))));
                        var_32 *= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_1 - 1] [i_4] [i_10])) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_37 [i_1 + 1] [i_10 + 2] [i_13] [i_1 + 1] [i_13 - 1])));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (+((+(arr_23 [i_1] [i_13 - 1] [2U] [i_1]))))))));
                    }
                    for (int i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) -1611362214);
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_29 [i_1] [i_1] [i_10 + 2] [i_13] [i_16]))));
                        var_36 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((signed char) var_9))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        var_37 = ((/* implicit */short) ((unsigned char) arr_43 [i_4] [i_4] [i_13] [i_4]));
                    }
                }
            }
            arr_53 [0U] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_8)))) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) arr_52 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4] [i_1 + 1])) ? (1358084557) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) / (-526719984107989301LL)))) ? (((long long int) (short)(-32767 - 1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_4]))) : (arr_17 [i_1] [i_1] [i_4] [i_4]))))))));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
        var_39 = ((/* implicit */short) max((min((((/* implicit */unsigned int) (unsigned char)0)), (var_8))), (((/* implicit */unsigned int) arr_55 [i_17]))));
    }
    var_40 = ((/* implicit */unsigned char) min((var_2), (var_9)));
    var_41 = ((/* implicit */unsigned int) max(((((+(((/* implicit */int) (unsigned char)200)))) + (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((-55050913), (((/* implicit */int) (short)29747)))) : (((/* implicit */int) var_5))))));
    var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (min((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))));
}
