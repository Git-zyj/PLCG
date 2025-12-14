/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78899
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */short) arr_6 [1U] [i_1] [1U]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) 0);
                                var_12 -= ((_Bool) (-(arr_11 [(_Bool)0] [i_1] [i_1] [i_1])));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((_Bool) arr_2 [i_0] [i_1])))))));
                            }
                        } 
                    } 
                }
                var_14 = ((/* implicit */int) min((var_14), (max((arr_10 [i_0] [i_0] [i_0]), ((+(((((/* implicit */int) (unsigned char)127)) - (((/* implicit */int) (_Bool)0))))))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned char) (-(var_4)));
    var_16 = max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 0)));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_7] [19] [i_7] [19] |= ((((/* implicit */_Bool) arr_17 [i_5] [(signed char)10])) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_22 [(unsigned char)19])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (min((2585605061U), (((/* implicit */unsigned int) (unsigned char)101)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_7))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_18 = ((/* implicit */int) var_7);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-15870), (((/* implicit */short) (!(((/* implicit */_Bool) 16)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_5]))));
                            arr_30 [i_5] [i_6] [i_6] [i_7] [i_9] [i_9] = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5)))) ? ((-(var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_19 [i_5] [i_6] [i_8]) : (((/* implicit */int) var_3))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                        {
                            arr_33 [(short)16] [(unsigned short)2] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) -1076441557)) ? (1611363592) : (((int) var_5)))));
                            var_20 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (((_Bool)1) && (arr_18 [i_5] [(_Bool)0]))))));
                            var_21 -= ((((((/* implicit */_Bool) (unsigned short)54638)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned char)154)))) >= (((/* implicit */int) (!(arr_28 [i_10] [12] [i_7] [(short)23])))));
                            var_22 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_32 [(_Bool)1] [(_Bool)1] [i_5])))) <= (((/* implicit */int) ((((/* implicit */int) min((var_5), (((/* implicit */short) arr_24 [i_6]))))) <= (arr_27 [i_10] [i_5] [i_7] [i_5] [i_5]))))));
                        }
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                        {
                            arr_36 [(unsigned short)6] [i_6] [i_8] = ((/* implicit */int) ((long long int) (signed char)51));
                            arr_37 [23U] [i_6] [6] [23U] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) min((var_1), (var_3)))), (arr_19 [i_5] [i_5] [i_11])))) <= (var_7)));
                        }
                    }
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned char) var_5)))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 24; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            {
                                arr_43 [i_13] [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] &= ((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_5])), (0)));
                                arr_44 [i_13] [i_13] [i_5] [i_13] [i_13] [i_13] [i_13] |= ((/* implicit */_Bool) (unsigned char)155);
                                arr_45 [(short)15] [i_13] [i_12] [4] = (((~(((/* implicit */int) arr_34 [i_12 + 1] [i_5] [(_Bool)1] [13U])))) ^ (((/* implicit */int) ((short) var_3))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)15)) ? (var_7) : (max((((/* implicit */long long int) arr_39 [i_12])), (min((arr_20 [i_5] [i_6] [i_13]), (((/* implicit */long long int) var_1)))))))))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((arr_26 [i_6] [i_6] [i_5] [i_6] [i_13]) + (9223372036854775807LL))) >> (((var_4) + (9064596455950744185LL))))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_3)))))) : (((/* implicit */int) (short)27485))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            for (unsigned int i_15 = 1; i_15 < 23; i_15 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_39 [i_5])))), (((-1720908647) != (arr_19 [i_5] [(unsigned char)12] [i_5])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8032))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0)))))))))));
                    arr_50 [0] [(_Bool)1] [i_14] [i_5] &= ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)3968)) - (3945))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -8813037165814585641LL)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 15300265832933231542ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8388607)) || (((/* implicit */_Bool) -1076441552)))))) : ((~(-5242333347878197357LL))))))));
        arr_54 [i_16] = ((/* implicit */unsigned char) var_9);
    }
}
