/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75966
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ ((((_Bool)1) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max((var_4), (var_3)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))) % (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_5 [i_1]))))))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)244))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((min((var_12), (arr_0 [i_0] [i_1]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_6 [i_1])))))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) arr_3 [i_0]))))) ? (((var_11) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_13)))) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
                arr_8 [9U] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_16) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) var_15))))) ? (max((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_12))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) var_7);
        var_24 = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_2)), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))) % (((/* implicit */int) min(((unsigned short)35955), (((/* implicit */unsigned short) (_Bool)1)))))));
        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)19))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_26 = var_3;
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3848507170U)));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            for (unsigned int i_6 = 4; i_6 < 15; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_4] [i_5 + 2])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned char)93)))) : (((((/* implicit */int) arr_10 [i_4] [i_4])) + (((/* implicit */int) var_14)))))) : (((/* implicit */int) var_12))));
                    arr_23 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_9)))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_4])))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [i_4]))))))));
                    arr_24 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_4])))), (((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), (arr_12 [i_5 + 2] [i_5 + 2]))), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_16 [i_6])))))))) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_7] [(unsigned char)2] [i_8] [(unsigned char)14] [i_9] [i_9])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((arr_20 [i_7] [i_9] [i_9]), (arr_28 [i_9] [(_Bool)1] [i_8] [i_9]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_9]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_13 [i_8]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_16)), (var_3)))) != (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_31 [i_4 - 1] [6U] [i_8] [i_4] [6U]))))))) ? (((/* implicit */int) min((var_19), (((/* implicit */unsigned short) arr_20 [i_9] [i_4] [i_4 - 1]))))) : (min((((((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1])) + (((/* implicit */int) arr_17 [i_10 - 1])))), (((var_17) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
                            arr_33 [i_4] [i_8 + 2] [i_9] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)36)) >= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) (unsigned short)42009)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1610612736U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_18 [i_4])))))))) % (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_28 [i_4] [i_8 + 1] [i_9] [i_10 - 1])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_25 [i_4 - 1])))))));
                            arr_34 [i_4] [i_4] [(unsigned char)7] [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned short)23527)) : (((/* implicit */int) (unsigned char)84)))) - (((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_4 - 1] [i_8 + 1]))))));
                            arr_35 [i_4] [i_8 + 3] = min((min((arr_28 [i_4] [i_10 - 1] [i_8] [i_8 - 1]), (arr_28 [i_4] [i_10 + 1] [i_10 + 1] [i_8 - 1]))), (arr_32 [i_4] [i_7] [i_8] [i_7] [i_7] [6U]));
                        }
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_18) ? (((/* implicit */int) arr_19 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_27 [i_4] [i_11]))))))) ? (max((((((/* implicit */_Bool) arr_32 [i_7] [i_9] [i_8] [i_8 + 2] [i_7] [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_7)))) : (((((((/* implicit */_Bool) 4276457882U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) & ((+(((/* implicit */int) arr_12 [i_9] [i_11]))))))));
                            var_31 = ((/* implicit */_Bool) max((arr_38 [i_4] [i_7] [i_7] [i_8] [i_8] [i_9] [i_11]), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_7] [i_11])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_11)))) >= (((/* implicit */int) max((var_9), (var_9)))))))));
                            arr_40 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_15))))) ? (max((((/* implicit */int) arr_38 [i_11] [i_7] [i_8] [i_8] [i_7] [i_4 - 1] [i_4])), (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) arr_19 [i_4] [i_8]))));
                            arr_41 [i_4] [i_11] [i_9] [i_7] [i_4 - 1] [i_7] [i_4] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_18)), (((((/* implicit */int) (unsigned char)63)) % (((/* implicit */int) arr_10 [i_4] [i_4]))))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_15))))) + (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3435681011U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */_Bool) var_0);
                            var_34 = ((/* implicit */_Bool) (unsigned short)50001);
                        }
                        for (unsigned char i_13 = 2; i_13 < 13; i_13 += 3) 
                        {
                            var_35 = max((arr_10 [i_4] [i_7]), ((unsigned char)41));
                            arr_48 [i_7] [i_7] [i_7] [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) arr_31 [i_4] [i_7] [i_8] [i_4] [i_13]))))) ? (((/* implicit */int) arr_31 [i_13 + 2] [i_4] [i_9] [i_4] [i_8 + 3])) : (((((/* implicit */_Bool) 3435681011U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (16777215U)))))));
                            var_36 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (3435681027U))) ? (((((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)120)))) % ((-(((/* implicit */int) var_19)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), ((unsigned short)37182)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_45 [i_4 - 1] [i_4 - 1] [i_8 + 3] [i_9]))))));
                        }
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [(_Bool)1] [i_7])) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)169))))), (min((arr_39 [i_4]), (((/* implicit */unsigned int) (unsigned char)115)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_38 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((arr_45 [i_14] [i_14 - 1] [i_14] [i_14 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_45 [i_14] [(_Bool)1] [(_Bool)1] [i_14])))) ^ (((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned char)71)) - (57)))))) ? (((var_8) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)222)))) : (((/* implicit */int) max((arr_22 [i_14]), (((/* implicit */unsigned short) (unsigned char)235)))))))));
        var_40 = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)184)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0))));
        arr_52 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1]))) : (((var_8) ? (arr_46 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5)))))));
    }
}
