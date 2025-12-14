/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82380
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = arr_6 [i_0] [i_0];
                var_18 = ((/* implicit */int) max((var_18), (var_0)));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (27ULL))));
                    var_20 = ((((/* implicit */_Bool) 2147483647)) ? (max((((((/* implicit */_Bool) 34359721984ULL)) ? (18446744039349829631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (arr_9 [i_1 + 2] [i_1 + 1] [i_1] [i_1]) : ((-(((/* implicit */int) (unsigned char)24))))))));
                    var_21 = ((((/* implicit */_Bool) ((((int) arr_0 [i_0])) - ((+(((/* implicit */int) (unsigned char)2))))))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_1])), (2725683766940080337ULL))) : (((/* implicit */unsigned long long int) 1193308872)));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)2)) ? (arr_6 [i_3] [i_1 + 2]) : (var_14))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) (unsigned char)182)) - (181))))))));
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [i_0] [i_0])) : (1152921504606814208ULL)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : ((-(568666323462387872ULL)))));
                    var_24 = ((/* implicit */int) 1536688023932070713ULL);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_4])), (arr_10 [i_4] [i_4] [i_4] [i_4])))))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) -3422796496966610103LL);
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_4] [i_4] [i_4] [i_4]))) ? (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4])) : (arr_6 [i_4] [i_4])))) ? (((/* implicit */int) ((var_6) >= (((/* implicit */int) arr_15 [i_4]))))) : (((/* implicit */int) arr_8 [i_4] [i_4]))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_20 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)68))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) (-2147483647 - 1)))) ? ((-(arr_5 [i_5] [i_4] [i_7]))) : (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_6] [i_5])))), (max((((/* implicit */unsigned long long int) max((arr_24 [i_6]), (-1591355849)))), ((+(var_15)))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) 34359721984ULL)) ? (arr_23 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) / (2467632784214051922ULL)))))))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((-1389770155) != (((/* implicit */int) arr_8 [i_4] [i_5])))))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = arr_22 [i_4] [i_5] [i_8] [i_9];
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((int) arr_21 [i_4] [i_4] [i_4] [i_4])))));
                    var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (7987575747894094496ULL) : (arr_18 [i_5] [i_9])));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((long long int) (+(5957663462534445299ULL)))))));
                }
            }
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_10]))))) : (((17306785680744483439ULL) - (((/* implicit */unsigned long long int) arr_25 [i_4] [i_5] [i_10] [i_10])))))));
                var_33 = ((/* implicit */unsigned char) (~(min((-2147483642), (((/* implicit */int) var_5))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)106)) : (arr_35 [i_4] [i_4] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -178953054)))) : ((~(0ULL))))), (((/* implicit */unsigned long long int) ((int) ((var_11) >> (((arr_6 [i_5] [i_4]) - (12871485070395269799ULL)))))))));
                            arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (max((max((arr_31 [i_4] [i_5] [i_4]), (((/* implicit */long long int) arr_40 [i_4] [i_13] [i_11])))), (((/* implicit */long long int) arr_8 [i_11] [i_13]))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) (~(arr_24 [i_11]))))), (((((var_2) >= (((/* implicit */int) arr_33 [i_4] [i_11])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_41 [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) 2147483639)))) : (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_5] [i_11])))))))));
            }
            var_36 = (+((+(((/* implicit */int) arr_36 [i_4] [i_5] [i_4] [i_5])))));
        }
        for (int i_14 = 2; i_14 < 12; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned char) (-((~(2336759000765197089ULL)))));
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(((unsigned long long int) arr_34 [i_14 + 1])))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            var_39 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -914652436)) ? (((/* implicit */int) ((-2147483644) >= (((/* implicit */int) (unsigned char)140))))) : (((/* implicit */int) var_13))))) % ((~(min((602455027209051075ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_2 [i_14]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))) ? (((/* implicit */unsigned long long int) var_6)) : (max((max((((/* implicit */unsigned long long int) (unsigned char)117)), (var_7))), (min((10087406938569225920ULL), (((/* implicit */unsigned long long int) var_5))))))));
                            var_41 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1098974756864LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (15523595847051397149ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13556755190216235536ULL)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_48 [i_18] [i_15] [i_4])))));
                        }
                        for (int i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (arr_61 [i_19] [i_16] [i_16] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_4] [i_14 + 2] [i_14] [i_14] [i_15 + 1] [i_15])))))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1812095224)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (unsigned char)125)))))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_40 [i_15 + 2] [i_14 + 2] [i_14 + 1])))) ? (max((9458605283945681306ULL), (((/* implicit */unsigned long long int) arr_40 [i_15 + 2] [i_14 - 2] [i_14 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(287522949)))), ((~(1073740800ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_4] [i_14] [i_16] [i_19]))) : ((~(((((/* implicit */_Bool) var_1)) ? (255ULL) : (((/* implicit */unsigned long long int) 17LL)))))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_20 = 1; i_20 < 12; i_20 += 2) 
                        {
                            var_46 ^= ((/* implicit */unsigned long long int) arr_37 [i_4] [i_4] [i_4] [i_4]);
                            var_47 += (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 770196789327168641ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)117))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1389770155) : (33554368)))) : ((-(arr_57 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
                        {
                            arr_72 [i_4] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) 528866697)), (1098974756864LL))), (7083023889805381230LL)));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) var_2))));
                        }
                        for (unsigned long long int i_22 = 3; i_22 < 13; i_22 += 3) 
                        {
                            var_49 = ((/* implicit */_Bool) min((((/* implicit */int) var_16)), (max((((/* implicit */int) min(((unsigned char)117), (arr_36 [i_16] [i_15 + 1] [i_4] [i_4])))), (((((/* implicit */_Bool) 8412360189011994397LL)) ? (1389194657) : (var_2)))))));
                            arr_75 [i_4] [i_14] [i_15] [i_22] [i_22] [i_22 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4] [i_4])) ? ((+(max((((/* implicit */long long int) var_5)), (2012615264715449765LL))))) : (((long long int) (((_Bool)1) ? (((/* implicit */long long int) -1389770132)) : (1226005308252752221LL))))));
                            arr_76 [i_4] [i_4] [i_4] [i_4] [i_4] = arr_47 [i_4] [i_16];
                        }
                    }
                } 
            } 
            var_50 ^= ((((/* implicit */_Bool) 16230431549096982480ULL)) ? ((-(arr_61 [i_4] [i_4] [i_4] [i_4]))) : (((arr_41 [i_14] [i_4] [i_4] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))));
            var_51 ^= ((/* implicit */unsigned long long int) arr_67 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        }
    }
    for (long long int i_23 = 1; i_23 < 13; i_23 += 4) 
    {
        var_52 = ((/* implicit */unsigned char) (~((~(14921951808013170282ULL)))));
        var_53 = max((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (var_12));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 2) 
    {
        var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [i_24])))))) | (((unsigned long long int) ((int) (unsigned char)254)))));
        /* LoopSeq 1 */
        for (unsigned char i_25 = 1; i_25 < 23; i_25 += 3) 
        {
            var_55 = ((/* implicit */long long int) (unsigned char)110);
            arr_86 [i_25] [i_24] = ((((/* implicit */_Bool) arr_83 [i_25 + 2] [i_25 - 1] [i_25 + 2])) ? (((/* implicit */int) ((min((((/* implicit */int) (unsigned char)133)), (-579495989))) < (-579495967)))) : (max((1154566140), (((/* implicit */int) arr_85 [i_25 + 1] [i_25 - 1])))));
        }
    }
    var_56 = ((/* implicit */int) (+(min((max((((/* implicit */unsigned long long int) -1497073199)), (var_15))), (((((/* implicit */_Bool) (unsigned char)49)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))))));
}
