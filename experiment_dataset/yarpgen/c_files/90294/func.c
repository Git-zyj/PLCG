/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90294
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
    var_15 = ((/* implicit */_Bool) var_12);
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1805794655), (-870752098)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 870752097)) >= (7856424527621491093LL))))) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_17 = (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) < (((/* implicit */int) var_7))))));
            var_18 = arr_1 [i_0];
            arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483620)) ? ((-2147483647 - 1)) : (var_12)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-823)))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) -5320876775854177687LL)) ? (-870752082) : (((/* implicit */int) (_Bool)1)))))));
        }
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) ((_Bool) var_5));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned char) arr_8 [i_2 + 1])))));
                            var_22 = (((!(((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_8))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((/* implicit */int) var_11)))))));
                            arr_17 [i_3] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((unsigned char) arr_1 [i_0]));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-1LL)));
                            var_25 = ((/* implicit */_Bool) ((long long int) arr_11 [i_0] [i_4] [i_2] [i_0]));
                            var_26 &= ((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 + 1]);
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_7])))))));
                            var_28 = ((/* implicit */short) (+(var_1)));
                            arr_24 [i_0 + 2] [i_0] [i_4] [i_0 + 1] [i_0] = ((/* implicit */short) ((arr_16 [i_0 + 3] [i_2] [i_4] [i_4] [i_7] [i_7] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [2LL] [i_4] [i_4] [i_4] [i_0])))));
                            var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 546563287)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                        }
                        for (int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            var_31 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) arr_1 [i_4]))));
                            arr_27 [i_0] [i_0 + 3] [i_8] &= ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                            var_32 = ((/* implicit */long long int) ((1781486124) > (870752102)));
                        }
                        var_33 = ((/* implicit */unsigned char) ((arr_23 [i_0 + 1] [i_2 - 1] [i_3]) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_23 [i_2 + 1] [i_0 - 1] [i_0 - 1]))));
                        var_34 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_4] [i_2] [i_3] [i_4]))) : (2198956146688LL)))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */_Bool) 0LL);
    }
    for (short i_9 = 3; i_9 < 10; i_9 += 3) 
    {
        var_36 = ((/* implicit */short) min((var_36), (arr_5 [i_9] [i_9] [i_9])));
        var_37 = arr_8 [i_9 - 1];
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        var_38 = ((/* implicit */int) -2198956146689LL);
        /* LoopSeq 3 */
        for (long long int i_11 = 4; i_11 < 20; i_11 += 2) 
        {
            arr_34 [i_10] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [i_10])) : (((/* implicit */int) (unsigned char)56)))) < (((arr_30 [i_10]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_31 [i_10])))));
            arr_35 [i_10] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)15)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (var_4)))) : (arr_32 [i_11 - 2] [i_11 - 2])));
        }
        for (short i_12 = 3; i_12 < 19; i_12 += 1) 
        {
            var_39 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_14 = 3; i_14 < 19; i_14 += 4) 
                {
                    arr_43 [i_10] [i_10] [i_10] [(_Bool)1] [i_10] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [20])) ? (arr_38 [i_10] [i_13 - 1] [(short)16]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    arr_44 [i_10] [i_10] [(unsigned char)12] [i_10] [i_10] [i_14 + 1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_39 [i_10])))) && (((((/* implicit */int) (unsigned char)21)) != (1588677394))));
                    arr_45 [13] [i_10] [i_13] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-2198956146680LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-1588677395) : (((/* implicit */int) (_Bool)1)))))));
                    arr_46 [i_10] [i_12] [i_13] [i_14] = ((/* implicit */_Bool) var_7);
                }
                for (int i_15 = 3; i_15 < 19; i_15 += 2) 
                {
                    var_40 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) -2198956146683LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_33 [(short)10])))) <= (((arr_49 [i_15] [i_13] [(unsigned char)10] [i_12] [i_10]) ? (((/* implicit */int) var_11)) : (var_12)))));
                    var_41 = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_12] [i_10])) & (((int) arr_36 [i_10] [i_10]))));
                }
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) & (arr_39 [i_10])))) ? (((/* implicit */int) ((1588677394) > (((/* implicit */int) (unsigned char)19))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_3)) : (var_4)))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 234881024)) ? (arr_47 [i_13 - 1] [i_10] [i_13] [i_13 - 1]) : (arr_47 [i_13 - 1] [i_10] [i_10] [i_13 - 1])));
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    arr_53 [i_10] [i_12] [i_16] [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)98))))) ? (((/* implicit */int) arr_30 [i_12 - 2])) : (var_12));
                    arr_54 [i_10] [i_10] [i_13] = ((/* implicit */_Bool) var_7);
                    var_44 = ((/* implicit */int) max((var_44), ((((~(arr_40 [i_10] [i_10] [i_10] [i_10]))) - (((/* implicit */int) ((((/* implicit */int) arr_49 [i_16] [i_16] [i_16] [i_10] [i_10])) > (483231816))))))));
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_39 [i_10])));
                    var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_48 [i_16] [i_12] [i_16] [i_16])))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) arr_39 [i_16]))))))));
                }
            }
            var_47 &= ((/* implicit */int) arr_36 [i_10] [i_10]);
        }
        for (short i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            var_48 = ((/* implicit */unsigned char) ((var_2) - ((~(((/* implicit */int) var_6))))));
            var_49 = ((/* implicit */long long int) arr_31 [i_10]);
        }
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                var_50 = ((/* implicit */unsigned char) (-(arr_48 [i_18] [i_18] [i_19] [i_10])));
                var_51 ^= ((/* implicit */short) (unsigned char)255);
            }
            for (short i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                var_52 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_37 [i_10]))));
                arr_65 [i_10] [i_20] = ((((/* implicit */_Bool) var_10)) ? (arr_56 [i_18 + 1] [i_18] [(_Bool)1]) : (var_1));
                arr_66 [i_20] [i_20] [2] [2] &= ((/* implicit */unsigned char) arr_62 [i_18 + 1] [i_20]);
                var_53 ^= ((/* implicit */long long int) ((int) ((var_10) / (arr_48 [i_10] [i_18 + 1] [i_20] [i_20]))));
            }
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_2))) >= (((/* implicit */int) var_7))));
        }
        for (short i_21 = 0; i_21 < 21; i_21 += 2) 
        {
            var_55 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_21])) ? (var_14) : (((/* implicit */long long int) 1399122046))));
            var_56 = ((/* implicit */unsigned char) ((arr_32 [i_21] [i_21]) % (((130560) % (((/* implicit */int) var_11))))));
        }
    }
}
