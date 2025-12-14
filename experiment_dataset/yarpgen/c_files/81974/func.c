/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81974
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) var_1)), (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_13 = var_5;
                            var_14 -= min((((max((((/* implicit */int) var_1)), (var_4))) << (((/* implicit */int) ((((/* implicit */int) var_3)) > (var_4)))))), (min((((/* implicit */int) max((var_1), (var_3)))), (max((7), (((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((/* implicit */long long int) min((((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (114))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                var_16 = min(((signed char)127), ((signed char)63));
                var_17 -= ((/* implicit */unsigned short) max((min((var_9), (var_9))), (((/* implicit */unsigned int) min((var_3), (var_1))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) var_2);
                            var_19 -= ((/* implicit */unsigned int) var_2);
                            var_20 -= ((/* implicit */short) var_2);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_9] [i_0] = ((/* implicit */int) min((min((var_0), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_11)))) / (var_10))))));
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 3; i_10 < 14; i_10 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_4)))) / (min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-6017849188702959313LL))), (max((var_10), (((/* implicit */long long int) var_4))))))));
                            arr_33 [i_0] [i_0] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -2147483645)), (1609417324U)));
                            var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned char) var_7))))), (min((var_0), (((/* implicit */unsigned long long int) var_4))))));
                            arr_34 [i_0] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_7)), (var_3)))), (min((((/* implicit */unsigned short) var_8)), (var_5)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 3; i_11 < 14; i_11 += 3) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] = ((/* implicit */signed char) ((var_6) % (((/* implicit */int) var_7))));
                            arr_39 [i_0] [i_0] [i_0] [i_9] [i_9] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))));
                            arr_40 [i_0] [i_1 + 2] [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 14; i_12 += 3) /* same iter space */
                        {
                            arr_44 [i_0] [i_1] [i_0] [i_9] [i_9] = max(((signed char)-15), ((signed char)51));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_10))));
                            arr_45 [i_0] [i_1] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)22478)));
                            arr_46 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_2)), (var_3)))), (min((((/* implicit */unsigned long long int) var_9)), (var_0)))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
        {
            for (int i_14 = 4; i_14 < 16; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            {
                                arr_59 [i_0] [i_13 + 2] [i_14] [i_0] [i_16] [i_14] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) var_7))))), (min((((/* implicit */unsigned int) var_3)), (var_9)))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((max((var_10), (((/* implicit */long long int) ((var_9) == (var_11)))))), (((/* implicit */long long int) ((var_6) / (((/* implicit */int) var_2))))))))));
                                arr_60 [i_0] [i_16] [i_15] [i_14] [i_0] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_2)), (var_10))), (((/* implicit */long long int) max((var_6), (((/* implicit */int) var_7)))))));
                                var_24 = ((/* implicit */signed char) max((min((8191U), (((/* implicit */unsigned int) -1561295282)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_9))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (var_9)))), (((6718676597076831051ULL) + (((/* implicit */unsigned long long int) 4294959096U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) min(((_Bool)0), ((_Bool)0)))))))));
                        var_26 = ((/* implicit */signed char) max((max((1304523376U), (((/* implicit */unsigned int) (_Bool)1)))), (min((((/* implicit */unsigned int) var_4)), (var_11)))));
                    }
                    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_19 = 2; i_19 < 14; i_19 += 4) 
                        {
                            arr_70 [i_0] [i_14 - 3] [i_18] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_4)), (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_10))))));
                            arr_71 [i_0] [i_0] [i_13 - 1] [i_0] = ((min((var_11), (var_9))) / (max((((/* implicit */unsigned int) (unsigned short)65535)), (3957862648U))));
                        }
                        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) /* same iter space */
                        {
                            arr_75 [i_0] [i_13] [i_0] [i_18] [i_13] = ((/* implicit */long long int) ((var_9) >> (((max((((/* implicit */unsigned int) var_6)), (var_11))) - (2519716288U)))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */long long int) var_8)), ((-9223372036854775807LL - 1LL)))))));
                        }
                        for (unsigned int i_21 = 0; i_21 < 17; i_21 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((min((((((/* implicit */unsigned int) var_4)) & (var_11))), (var_9))), (((/* implicit */unsigned int) var_3)))))));
                            arr_80 [i_0] [i_0] [i_18] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_9);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_3)))) >> (((max((-7288930999249139353LL), (((/* implicit */long long int) 4294959104U)))) - (4294959073LL)))));
                        }
                        arr_81 [i_0] [i_13] [i_13] [i_0] [i_14 - 3] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) min((-9223372036854775800LL), (((/* implicit */long long int) (signed char)-21))))), (var_0)))));
                    }
                    for (unsigned char i_22 = 1; i_22 < 15; i_22 += 3) /* same iter space */
                    {
                        arr_84 [i_0] [i_13] [i_0] [i_22] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) var_6)), (var_0)))));
                        arr_85 [i_0] [i_13] [i_14] [i_22] = ((/* implicit */unsigned short) max((min((var_0), (((/* implicit */unsigned long long int) var_8)))), (max((var_0), (var_0)))));
                        var_30 -= ((/* implicit */long long int) max((((((/* implicit */int) var_1)) / (((/* implicit */int) var_3)))), (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-117)), (var_3)))) << (((var_9) - (3121129972U)))))));
                    }
                    var_31 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_5)))), (((((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_3))))) + (min((var_10), (((/* implicit */long long int) var_4))))))));
                }
            } 
        } 
    }
    var_32 = var_7;
}
