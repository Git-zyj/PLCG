/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58485
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
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_10 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_1 [i_0 - 2]) >= (((/* implicit */int) var_10)))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15145552911044657035ULL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)15372))))) : (((/* implicit */int) (signed char)-94))));
                        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_16))))))) + (11005447569273821126ULL));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)220)))) & (((((/* implicit */_Bool) arr_13 [i_2] [i_4 - 2] [i_2])) ? (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) >= (0ULL))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)85)))))));
                                arr_20 [(signed char)7] [(signed char)7] [(signed char)7] [i_2] [(signed char)7] [i_5] [i_5] = ((/* implicit */short) (signed char)-119);
                                var_19 = ((/* implicit */int) ((long long int) ((7441296504435730489ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((3710255677667820395ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_1] [i_2]))))))))));
                                arr_21 [i_5] [i_2] [i_2] [i_2] [(_Bool)1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_2] [i_4 + 2] [i_4 + 2]))))) > (((((/* implicit */long long int) ((/* implicit */int) var_16))) & (var_13))))) && (((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) (unsigned short)22796))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) (~(min((((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1])), (((((/* implicit */int) (unsigned short)42740)) + (((/* implicit */int) (unsigned short)38614))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_12))));
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = var_15;
                        var_23 = ((/* implicit */short) ((long long int) arr_5 [i_2] [i_1]));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_24 *= ((/* implicit */short) ((_Bool) (-(arr_9 [i_0 - 1] [i_0 - 1] [(short)9] [i_7]))));
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                        arr_26 [i_0] [i_1] [i_2] [(signed char)11] [i_1] [(signed char)11] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-165693226)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)113))));
                        var_26 = ((/* implicit */int) (signed char)-89);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_2] [i_8] [i_0 - 1])) : (((/* implicit */int) var_9))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 14; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (min((((/* implicit */unsigned long long int) (unsigned short)56072)), (0ULL)))));
                        var_30 -= ((/* implicit */signed char) -975119784);
                        arr_31 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 975119780)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_13)))), (((((/* implicit */_Bool) (signed char)123)) ? (20ULL) : (((/* implicit */unsigned long long int) 876698698))))))) ? (-2147483634) : (((/* implicit */int) (unsigned short)62836))));
                        var_31 = ((/* implicit */short) (unsigned short)22790);
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (7307370949453240747LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) >= (2147483647)))))))));
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) + (2273036263349779836LL)))) ? (min((((/* implicit */int) var_14)), (15))) : (((int) 1928352253))))) ? (max((var_15), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (5096274008112486912LL)))) < (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-98))))))))));
    var_34 = 3684404892965323164LL;
}
