/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94589
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))));
            arr_6 [i_0] = (signed char)-14;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2] [i_0])) != (((/* implicit */int) (unsigned char)89))));
            arr_10 [i_0] = ((min((((((/* implicit */int) (unsigned char)166)) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_2 [i_2] [i_2]), (((/* implicit */unsigned char) (_Bool)1))))))) == (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] = ((((268402688) == (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) % (17761879959490730052ULL))));
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
            arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) != (arr_1 [i_0]))))) - (((unsigned int) arr_12 [i_0] [i_3]))));
            arr_15 [i_0] = ((/* implicit */unsigned short) min((arr_5 [i_0]), (var_4)));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_19 [i_5]);
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)1))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [(_Bool)1] [i_4] [i_5])) - (((/* implicit */int) arr_4 [(_Bool)1] [i_5] [i_5])))))));
                }
                for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_27 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_1);
                    var_16 = ((/* implicit */unsigned char) arr_3 [i_0] [i_4]);
                }
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) arr_0 [i_0]);
                    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_0]));
                    var_19 = ((/* implicit */_Bool) arr_24 [i_0] [i_4] [i_4] [i_5] [i_8]);
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_20 = ((/* implicit */int) var_5);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0])) < (((/* implicit */int) var_6))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (0U)))) % (arr_19 [i_5]))))));
                }
                var_23 = ((/* implicit */int) ((18322951441279382791ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (7551529586951464463LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))))))));
                var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(unsigned short)8])) ? (((/* implicit */int) arr_25 [18U])) : (((/* implicit */int) arr_25 [16LL]))));
                var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -7551529586951464463LL)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_3 [6LL] [i_0])));
            }
            for (short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_26 += ((/* implicit */unsigned long long int) arr_31 [17ULL] [i_4] [i_10] [i_10] [i_10] [i_4]);
                    arr_37 [i_0] [i_0] [11U] = (+(((((/* implicit */_Bool) (unsigned short)35730)) ? (13259970991116276986ULL) : (((/* implicit */unsigned long long int) arr_19 [i_0])))));
                    var_27 += ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 4294967295U)))))));
                    arr_38 [i_0] = ((/* implicit */unsigned char) arr_9 [i_0]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_41 [i_10] [i_4] [2ULL] [i_4] [i_4] |= ((/* implicit */long long int) ((unsigned char) -7551529586951464463LL));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_45 [i_0] [i_4] [i_10] [i_12] [i_13] = ((/* implicit */int) ((unsigned int) arr_43 [(unsigned short)11] [i_12] [i_10] [i_4] [i_0]));
                        var_28 = ((/* implicit */short) ((arr_19 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967295U))))));
                        arr_46 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (-7551529586951464464LL) : (((/* implicit */long long int) 4294967295U))))) : (arr_1 [i_0])));
                        var_29 -= ((/* implicit */long long int) arr_2 [i_0] [i_13]);
                        var_30 += ((/* implicit */unsigned long long int) arr_17 [i_12] [i_4]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) (short)-8192);
                        arr_49 [i_10] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-48)) * (((/* implicit */int) (_Bool)0))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))));
                    }
                    arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [17ULL]))));
                }
                var_33 += ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_10] [(unsigned short)3] [i_10])) == (((/* implicit */int) (_Bool)0))));
                arr_51 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (arr_1 [i_0]))))))) : (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (arr_1 [i_0])))))));
            }
            var_34 = ((/* implicit */long long int) arr_3 [i_0] [i_4]);
        }
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18014398509465600ULL)))) ? (max((arr_48 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [(unsigned char)14])))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)27775))))))))));
    }
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        var_36 = ((/* implicit */unsigned short) var_4);
        arr_54 [i_15] = (~(((/* implicit */int) (_Bool)1)));
        var_37 = ((/* implicit */unsigned short) var_1);
        var_38 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_52 [i_15])) && (((/* implicit */_Bool) arr_52 [i_15])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)27521)) : (414733925)))) : (((arr_52 [i_15]) % (arr_52 [i_15])))));
    }
    var_39 &= ((/* implicit */_Bool) var_7);
}
