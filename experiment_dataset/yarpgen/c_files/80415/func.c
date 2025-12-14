/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80415
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 += ((/* implicit */short) -1166841627);
        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (min((((/* implicit */unsigned long long int) -484162583465102051LL)), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)151)) << (((1475357486) - (1475357467)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3172495102U)) + (var_10)))) ? (var_12) : (((/* implicit */unsigned int) -941671403))))) : (arr_1 [i_0] [(unsigned short)0])));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (min((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])), (var_16))) : (((/* implicit */int) var_15))))) : (var_0))))));
                    var_26 += ((/* implicit */unsigned long long int) -6043472095158900175LL);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7001)) ? (6043472095158900175LL) : (-6043472095158900175LL)));
                    var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((6043472095158900179LL) << (((((var_6) + (524202395))) - (21))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_3])))))))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_3 [i_1])))))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_4])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) : (6043472095158900175LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_4]))))) : (-6043472095158900175LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_4])) <= (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647LL)) || (((/* implicit */_Bool) 4ULL))))))))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (var_12)));
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        var_32 = ((/* implicit */signed char) ((unsigned int) ((signed char) arr_16 [i_6])));
        var_33 += ((/* implicit */signed char) 3086859053U);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_34 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_6] [i_6])) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8] [i_7] [i_6]))))))) ? (((/* implicit */int) ((arr_21 [i_6] [i_7] [i_7] [i_6]) != (((/* implicit */unsigned long long int) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) 6043472095158900167LL))))) && (((((/* implicit */_Bool) arr_19 [i_6] [i_7] [i_6])) && (((/* implicit */_Bool) var_13)))))))));
                    arr_22 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_19)), (var_12)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (2147483647LL)))) : (((/* implicit */int) var_15))))), (max((min((((/* implicit */unsigned int) (_Bool)1)), (0U))), (((/* implicit */unsigned int) var_18))))));
                    arr_23 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_7])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_6]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6])) && (((/* implicit */_Bool) (unsigned short)41264))))))));
                    var_35 += ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -6043472095158900170LL)) : (arr_21 [i_8] [i_7] [i_6] [i_6]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_6])))))) <= (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)8958)), (arr_21 [i_6] [i_6] [i_6] [i_6]))) > (((/* implicit */unsigned long long int) var_12)))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_30 [i_6] [i_7] [i_8] [i_6] [i_10 + 2] = ((/* implicit */_Bool) var_8);
                                var_36 += ((/* implicit */unsigned char) (-2147483647 - 1));
                                var_37 = min((min((arr_28 [i_10 + 2] [i_10] [i_10] [8] [i_10 + 1]), (((/* implicit */unsigned long long int) 6043472095158900174LL)))), (18446744073709551615ULL));
                                arr_31 [i_6] [i_9] [i_7] [i_8] [i_7] [i_7] [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (var_8) : (arr_29 [i_7] [(unsigned char)6] [i_8] [i_9] [(unsigned char)12] [i_9] [i_9]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        for (long long int i_12 = 1; i_12 < 13; i_12 += 2) 
        {
            {
                arr_37 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((4874217874049265843ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8958)) != (((/* implicit */int) var_11))))))))) : ((~(((/* implicit */int) arr_2 [i_11]))))));
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 13; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */short) 18446744073709551611ULL);
                            var_39 = ((/* implicit */signed char) ((_Bool) max((max((855683566805977290LL), (((/* implicit */long long int) arr_29 [i_11] [i_12 - 1] [3U] [i_14] [i_13] [i_13] [i_11])))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_39 [i_12 - 1] [i_13 - 2]))))))))));
                        }
                    } 
                } 
                var_41 += ((/* implicit */int) arr_11 [i_11] [i_12 - 1] [i_12]);
            }
        } 
    } 
    var_42 = ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_19)))) : (((((/* implicit */long long int) ((/* implicit */int) var_19))) / (855683566805977290LL)))));
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        for (unsigned short i_16 = 2; i_16 < 11; i_16 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    var_43 += max((((((/* implicit */unsigned int) ((/* implicit */int) ((16ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_16] [i_15]))))))) ^ ((~(3041509770U))))), (var_5));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 2; i_18 < 10; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 2; i_19 < 12; i_19 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_15] [i_15] [i_15])))))));
                                var_45 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))) % (var_10));
                                var_46 = ((/* implicit */_Bool) (signed char)67);
                            }
                        } 
                    } 
                }
                arr_57 [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-28542)) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_40 [i_15] [i_16 - 2] [i_16] [i_16]))))))));
                var_47 += ((/* implicit */unsigned char) arr_32 [i_16]);
                /* LoopNest 3 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned char) ((min((arr_20 [i_21] [i_22]), (arr_59 [i_15]))) ? (((unsigned long long int) (short)3302)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_59 [i_15])) >= (((/* implicit */int) arr_59 [i_15]))))))));
                                var_49 = ((/* implicit */unsigned char) ((unsigned short) min((max((((/* implicit */unsigned long long int) var_1)), (var_9))), (((/* implicit */unsigned long long int) ((arr_59 [i_15]) && (((/* implicit */_Bool) var_13))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
