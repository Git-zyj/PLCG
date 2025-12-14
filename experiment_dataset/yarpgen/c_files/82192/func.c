/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82192
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
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_12)))) : ((~(((int) var_3))))));
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 -= ((/* implicit */_Bool) (~(arr_7 [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2])));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)31)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (arr_1 [i_0] [i_3])))));
                        var_18 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [(_Bool)1]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_7))))));
                            arr_15 [i_0] [i_1] [i_2] [i_4] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((var_0) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_12 [(_Bool)1] [i_2] [i_0] [i_4] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0])))));
                            arr_16 [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_20 &= ((/* implicit */unsigned short) arr_9 [i_0] [i_1]);
                            arr_19 [i_6] [i_2] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) arr_2 [i_0])) : (((var_0) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_4] [i_6] [i_1])) : (((/* implicit */int) var_12))))));
                            arr_20 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3337587469U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) : (arr_18 [(_Bool)1] [i_6 + 1] [i_2] [i_2 + 2] [i_6 + 1])));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 330393351)) ? (var_3) : (var_3))))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_2] [i_2 + 2] [i_2 + 1] [i_2] [i_2 - 1])) ? (arr_18 [i_0] [i_0] [i_1] [i_0] [i_2 - 1]) : (arr_18 [i_0] [i_1] [i_1] [i_2] [i_2 + 2]))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_4] [(short)9]))) : (var_3)));
                            var_25 = ((/* implicit */int) ((unsigned short) var_7));
                            arr_27 [i_2] [i_0] [i_2 + 2] [i_0] = ((/* implicit */_Bool) var_8);
                            var_26 = ((/* implicit */_Bool) var_12);
                        }
                        var_27 = ((/* implicit */unsigned short) ((var_0) ? (((/* implicit */int) ((signed char) var_2))) : (((var_2) ? (arr_3 [i_2]) : (var_8)))));
                        arr_28 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19529)) ? (((/* implicit */int) (short)-32697)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))) : (((int) 3111653324U))));
                        var_28 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_1] [i_9])))) : (((/* implicit */int) (_Bool)1)));
                    }
                    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_0] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2]))));
                }
            } 
        } 
        arr_32 [i_0] = ((((/* implicit */_Bool) var_5)) ? (16611766554807605182ULL) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [7] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        arr_35 [i_10] = ((/* implicit */long long int) var_0);
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_10] [4LL] [i_10])) : (-805960958)))) : (((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_10] [i_10])))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) var_4)) : (1738562980))), (min((((/* implicit */int) var_12)), (arr_3 [9])))))) ? (((/* implicit */long long int) min((arr_3 [i_10]), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (arr_34 [i_10])));
        var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((var_2) ? (var_11) : (((/* implicit */int) arr_33 [i_10]))))))));
    }
    for (int i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        var_33 |= ((/* implicit */unsigned int) ((signed char) var_12));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_22 [i_11] [i_11])) : (((/* implicit */int) var_1))))) ? (arr_1 [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((long long int) var_4))))) : (((/* implicit */unsigned long long int) max((arr_9 [i_11] [i_11]), (((/* implicit */int) arr_22 [i_11] [i_11]))))))))));
        var_35 = (_Bool)1;
        arr_39 [i_11] = ((/* implicit */_Bool) var_8);
    }
    /* vectorizable */
    for (long long int i_12 = 1; i_12 < 20; i_12 += 2) 
    {
        var_36 = ((/* implicit */int) arr_40 [i_12 - 1]);
        arr_42 [12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_12 - 1])) ? (((/* implicit */int) arr_40 [i_12 + 1])) : (((/* implicit */int) var_1))));
    }
    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) min((var_10), (var_7))))) : (((/* implicit */int) var_5))));
    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_3)))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
}
