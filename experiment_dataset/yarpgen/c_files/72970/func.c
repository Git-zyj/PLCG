/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72970
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0 - 1] [i_0])), (max((-184947607), (((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)43021)))) && (((/* implicit */_Bool) 140737488354816LL))));
                    arr_9 [i_0 - 1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0 + 1] [i_1 + 1] [i_1]), (var_5)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_18 |= ((/* implicit */_Bool) 67108864);
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))) : (((17587891077120LL) << (((((-7728209795332977025LL) + (7728209795332977084LL))) - (43LL))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((_Bool) arr_5 [3LL] [i_3]))) : ((~(((/* implicit */int) var_9)))))))));
        var_19 = ((/* implicit */unsigned short) arr_11 [i_3]);
        var_20 -= ((/* implicit */unsigned short) arr_0 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) max((((arr_14 [i_4]) / (arr_14 [i_4]))), (max((arr_14 [i_4]), (-3545864524833187247LL)))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                {
                    arr_24 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) var_6)), (arr_22 [i_4] [i_4] [i_4] [i_4])))))) ? (((((/* implicit */long long int) arr_22 [i_5] [i_5] [i_6] [i_6 - 3])) % (arr_18 [i_5] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(max((7728209795332977016LL), (arr_18 [i_4] [i_6 + 1]))))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2788542532204995330LL)))) ? (((((/* implicit */_Bool) 7728209795332977017LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((6539879086320303057LL) >> (((-7387347832902524823LL) + (7387347832902524847LL))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((1125898833100800LL), (((/* implicit */long long int) (signed char)-120))));
                        var_25 = ((/* implicit */_Bool) 4467570830351532032LL);
                        arr_27 [i_7] [i_7] [i_7] [(_Bool)1] = ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_5]))) <= (((((/* implicit */_Bool) arr_18 [i_4] [i_5])) ? (max((-140737488354841LL), (((/* implicit */long long int) arr_19 [(unsigned short)3] [i_6])))) : (((/* implicit */long long int) arr_20 [i_6 - 1])))));
                    }
                    for (int i_8 = 2; i_8 < 19; i_8 += 4) /* same iter space */
                    {
                        arr_31 [i_4] [i_5] [2LL] [i_8] [i_5] [i_4] = ((/* implicit */int) -7728209795332977017LL);
                        arr_32 [i_5] [i_6] = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_21 [i_4]), (arr_21 [i_4]))))));
                        arr_33 [i_4] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) var_15);
                    }
                    for (int i_9 = 2; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        arr_36 [19] [19] [19] [i_9] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */unsigned short) 4467570830351532032LL);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_15 [i_9 + 1] [i_9 - 1])));
                            arr_39 [i_5] [i_6 - 2] [i_9 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-140737488354825LL)))) ? (((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_4] [i_5] [(unsigned short)12] [i_9] [i_10])))) : (((/* implicit */int) arr_23 [i_9 + 1] [(_Bool)1] [i_6 - 3] [(unsigned short)0]))));
                            var_28 = ((_Bool) 3545864524833187240LL);
                            var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (-5675841746208586420LL)));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_42 [i_4] [i_4] [13] [i_11] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_30 [2] [i_6] [i_6 - 2] [i_6 + 1] [(signed char)19] [2])) ? (((/* implicit */int) arr_30 [9LL] [i_6] [i_6] [i_6 + 1] [(signed char)1] [i_6])) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_6 + 1] [i_6] [i_6])))), (((((/* implicit */_Bool) (((_Bool)1) ? (-3545864524833187264LL) : (-8335681060484682899LL)))) ? (((/* implicit */int) (_Bool)1)) : (arr_20 [i_6 - 3])))));
                            arr_43 [i_5] [i_5] [i_5] [i_11] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(arr_22 [i_4] [i_5] [i_9 + 1] [i_11]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_4] [i_5] [i_9] [i_11])) || ((_Bool)1))))))) ? (max((140737488354846LL), (((/* implicit */long long int) ((unsigned short) -1186461694))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_46 [i_4] [i_4] [i_4] [i_4] [i_4] [i_12] [i_4] = ((/* implicit */long long int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */_Bool) 140737488354842LL)) ? (arr_22 [i_6 + 1] [i_6] [i_6] [i_6 - 2]) : (((/* implicit */int) (_Bool)1)))) - (1386277794)))));
                            var_30 ^= ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_30 [(unsigned short)2] [i_9 - 1] [(unsigned short)2] [i_6] [i_6 - 2] [i_6 - 2])))));
                        }
                        for (long long int i_13 = 2; i_13 < 19; i_13 += 4) 
                        {
                            arr_50 [i_4] [i_5] = ((/* implicit */_Bool) var_6);
                            var_31 = ((/* implicit */int) max((-140737488354842LL), (-140737488354873LL)));
                            arr_51 [1] [1] [i_6 - 1] [1] [i_13] = max((((/* implicit */signed char) ((((/* implicit */_Bool) min((-8335681060484682888LL), (4467570830351532050LL)))) || (arr_23 [i_5] [i_5] [i_9] [i_13])))), ((signed char)107));
                            var_32 -= ((/* implicit */signed char) var_12);
                            arr_52 [i_4] [i_4] [i_4] [i_4] [i_4] = arr_23 [i_4] [(unsigned short)13] [i_6 - 3] [i_13 - 2];
                        }
                    }
                    var_33 = ((/* implicit */_Bool) min((-2165283984595579336LL), (((/* implicit */long long int) (unsigned short)65024))));
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
    {
        arr_57 [i_14] [i_14] = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */long long int) 317151071)) : (8335681060484682900LL))), (((/* implicit */long long int) -1186461694))));
        var_34 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((-2165283984595579336LL) == (((/* implicit */long long int) ((/* implicit */int) arr_55 [(_Bool)1]))))))));
        var_35 -= ((/* implicit */unsigned short) max((-2165283984595579336LL), (min((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_55 [(_Bool)1]))))), (-140737488354889LL)))));
        arr_58 [i_14] = arr_53 [i_14] [i_14];
    }
    var_36 = ((/* implicit */int) var_0);
}
