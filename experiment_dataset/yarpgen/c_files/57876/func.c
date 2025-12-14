/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57876
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1] [(unsigned char)13] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) > (((((/* implicit */int) arr_5 [i_1] [i_0] [i_2] [i_0])) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_1] [i_3])) : (((/* implicit */int) var_8))))))));
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)448)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)51)))), (((((/* implicit */int) (unsigned char)55)) << (((((/* implicit */int) (unsigned char)208)) - (194)))))))) ? ((-(((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) arr_3 [i_1] [i_3] [i_4])) : (((/* implicit */int) var_9)))))) : ((~(((/* implicit */int) ((unsigned char) arr_4 [i_2]))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)62)) % (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [(unsigned char)0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [(unsigned short)12] [(unsigned short)1]))))))) - ((((+(((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)22513)) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_4]))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = var_4;
                                arr_14 [i_1] [i_1] [i_3] [i_1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))));
                var_13 ^= ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) (unsigned short)4064))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_14 ^= min((((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_1)))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_5))))))), (var_9));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_27 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [i_7])) ? (((/* implicit */int) arr_21 [i_5] [i_7])) : (((/* implicit */int) arr_21 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) arr_21 [i_5] [i_6])) : (((/* implicit */int) (unsigned char)72)))) : (((/* implicit */int) max((arr_23 [(unsigned char)17] [(unsigned char)17]), (var_9))))));
                    arr_28 [i_7] [(unsigned char)4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_22 [i_7] [i_5])) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) (unsigned short)19998)))))) ? (((/* implicit */int) (unsigned short)2047)) : (((((/* implicit */_Bool) arr_26 [i_5] [(unsigned char)2] [i_7])) ? (((/* implicit */int) arr_25 [i_7] [i_5])) : (((/* implicit */int) var_11))))));
                    var_15 ^= ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)182))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_8] [i_7] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_2))))) << (((((/* implicit */int) ((unsigned short) (unsigned char)241))) - (230)))))) ? (((((/* implicit */int) arr_30 [i_5] [i_8] [i_7] [(unsigned char)6])) + (((/* implicit */int) arr_30 [i_5] [i_8] [i_7] [i_5])))) : (max((((/* implicit */int) min((var_4), (arr_25 [i_7] [(unsigned short)2])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))));
                        arr_34 [i_5] [i_8] [(unsigned char)7] [i_5] = ((unsigned short) var_4);
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (unsigned char)201)), ((unsigned short)1792))))) | (((((/* implicit */_Bool) ((unsigned char) arr_30 [i_5] [i_8] [i_7] [i_8]))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */_Bool) (unsigned short)23279)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
                        arr_35 [i_8] [i_6] [i_7] [(unsigned short)17] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)896))))))) << (((((((((/* implicit */int) (unsigned char)229)) << (((((/* implicit */int) arr_22 [i_5] [(unsigned short)7])) - (4625))))) | (((/* implicit */int) min((arr_22 [(unsigned short)13] [(unsigned char)17]), (((/* implicit */unsigned short) var_8))))))) - (240123961)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                        {
                            arr_38 [i_5] [i_5] [(unsigned char)3] [i_8] [i_7] [i_8] [i_9] = var_9;
                            arr_39 [i_5] [i_8] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)116))) < ((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_37 [i_8])), (arr_19 [i_5] [(unsigned char)3]))))))));
                            var_17 ^= ((/* implicit */unsigned short) ((unsigned char) (unsigned char)136));
                            arr_40 [(unsigned short)14] [i_8] [i_6] [i_8] [(unsigned char)3] [(unsigned char)0] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) var_4))))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            arr_43 [(unsigned char)16] [i_8] [i_8] [i_8] [i_8] = ((unsigned short) ((unsigned short) arr_36 [i_5]));
                            arr_44 [(unsigned char)15] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)11299));
                        }
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)140)))))));
                        arr_48 [i_5] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)4078)) : (((/* implicit */int) (unsigned char)112)))) : (((/* implicit */int) (unsigned char)127)))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)217))))) ? (((((/* implicit */_Bool) (unsigned short)57838)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)52439))))));
                        arr_49 [i_11] [(unsigned char)0] [(unsigned short)4] [i_7] [i_11] = ((unsigned char) arr_45 [i_5] [i_5] [i_6] [(unsigned short)5] [i_11] [i_11]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        arr_52 [(unsigned short)17] [i_6] [i_7] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_47 [i_5] [i_5] [i_5] [i_5]))) || (((/* implicit */_Bool) max((var_3), (var_3))))));
                        var_19 = (unsigned char)37;
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    arr_55 [(unsigned char)4] [i_6] = var_0;
                    arr_56 [(unsigned char)6] [i_6] [i_13] [i_13] = ((/* implicit */unsigned short) (unsigned char)196);
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 17; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            {
                                arr_61 [i_15] [i_14] [i_13] [i_6] [i_5] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_41 [i_15] [i_5] [i_13] [i_5] [(unsigned char)8]))))));
                                arr_62 [i_15] [i_5] [i_15] [i_14] [(unsigned char)4] [(unsigned char)4] [i_5] = ((unsigned short) min(((unsigned short)49684), (var_5)));
                                arr_63 [i_5] [i_5] |= (unsigned short)11532;
                                var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_13]))));
                            }
                        } 
                    } 
                    var_21 -= arr_22 [i_6] [i_13];
                    arr_64 [i_5] [i_5] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned short)15872)) : (((/* implicit */int) (unsigned char)102))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    arr_69 [i_5] [i_6] [(unsigned short)16] = ((unsigned char) var_4);
                    arr_70 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) var_11);
                }
            }
        } 
    } 
}
