/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81788
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_3), (((/* implicit */short) (unsigned char)205))))) / (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */int) min(((signed char)-49), ((signed char)-49)))) : (((((/* implicit */int) (unsigned short)17212)) & (((/* implicit */int) (short)2756))))));
                var_11 |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_0] [2]))))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (unsigned short)25642);
                                var_13 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) min((var_7), ((unsigned short)39888)))))));
                            }
                        } 
                    } 
                    arr_11 [i_1] [i_1] [i_2] = ((int) (!(((/* implicit */_Bool) var_9))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) (short)-7230);
                }
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max(((+(-2147483637))), (((/* implicit */int) arr_5 [i_5]))));
        arr_16 [i_5] = ((((/* implicit */_Bool) -870302656)) ? (((1467521209) & (((/* implicit */int) (unsigned char)141)))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned short)25629)))) : (((((/* implicit */_Bool) (unsigned char)66)) ? (var_2) : (((/* implicit */int) (unsigned char)83)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
        {
            arr_20 [i_5] [(unsigned char)6] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
            arr_21 [(short)3] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-124)) < (((/* implicit */int) var_7))));
        }
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 3; i_8 < 12; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    {
                        arr_30 [i_9] [i_5] [(unsigned char)0] [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) min((min((arr_13 [i_5]), (((/* implicit */unsigned short) var_4)))), (((/* implicit */unsigned short) (signed char)-19))))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) arr_17 [i_5]))))));
                        var_16 = ((/* implicit */short) min(((-(((/* implicit */int) arr_8 [i_8] [i_8 - 1] [i_8 - 2] [i_5])))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_5)))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_5)))))));
        }
        arr_31 [i_5] = ((/* implicit */signed char) arr_17 [i_5]);
    }
    for (signed char i_10 = 2; i_10 < 19; i_10 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))), (min(((~(((/* implicit */int) (unsigned short)65525)))), (((/* implicit */int) (signed char)-83))))));
        var_19 = ((/* implicit */unsigned short) min((min((var_2), (((/* implicit */int) (signed char)-43)))), (((((/* implicit */int) (short)2732)) ^ (((/* implicit */int) max(((unsigned short)22), (var_7))))))));
        /* LoopSeq 3 */
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_20 -= (unsigned short)57194;
                        var_21 = ((/* implicit */unsigned short) -6);
                        var_22 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_32 [i_10] [i_10 - 2])))), (((((/* implicit */int) (signed char)-7)) > (((/* implicit */int) arr_32 [i_10 + 1] [i_10 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (unsigned char)127)), (arr_38 [i_10 - 2])))));
                            var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-2846))))) > (min((((/* implicit */int) arr_34 [i_10 - 1] [i_14])), (var_2)))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))))))))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 19; i_15 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) (short)32748);
                            arr_48 [15] [i_13] [i_13] [i_15] [i_11] [i_11] [i_10] = ((/* implicit */short) min((((/* implicit */int) (unsigned short)8368)), (2099417407)));
                            var_27 &= ((/* implicit */signed char) (unsigned short)63);
                            arr_49 [(short)11] [i_15] [i_12] [i_13] [i_15] [(signed char)14] [i_15] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)71)))), ((+(((/* implicit */int) arr_46 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]))))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)-32742)) ^ (((/* implicit */int) (unsigned char)198)))))) ? (((/* implicit */int) (unsigned char)211)) : (((24) & (((/* implicit */int) (short)2850))))));
            var_29 = ((/* implicit */signed char) var_5);
        }
        for (int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            var_30 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)65524))))));
            arr_52 [i_10] [i_10] [i_16] = ((/* implicit */int) var_3);
        }
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            arr_55 [i_10] [i_10] = var_1;
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                for (unsigned short i_19 = 1; i_19 < 18; i_19 += 3) 
                {
                    {
                        arr_63 [i_10] [i_10] [i_10] = ((/* implicit */short) (unsigned char)169);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11))))) ? (min((((/* implicit */int) min((var_6), (((/* implicit */short) var_4))))), (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_41 [(unsigned char)19] [11] [11] [i_18] [(signed char)16])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)45)) | (((/* implicit */int) (unsigned char)113))))))))));
                    }
                } 
            } 
            var_32 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_7)))))))) << (((min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) + (9739)))));
            var_33 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (max(((unsigned short)65514), (arr_41 [i_10 - 2] [(unsigned short)9] [(signed char)6] [(signed char)5] [(signed char)6])))));
        }
    }
    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        arr_66 [i_20] [i_20] = ((/* implicit */unsigned char) (short)32750);
        var_34 = ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (unsigned short i_21 = 3; i_21 < 18; i_21 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_21 - 3] [i_21] [i_21])) == (((/* implicit */int) arr_54 [i_21 + 1] [i_21 - 1] [i_21]))));
        arr_70 [i_21 - 3] = ((/* implicit */int) ((-2147483635) > (((/* implicit */int) (unsigned short)38464))));
    }
    var_36 = ((/* implicit */unsigned short) (unsigned char)224);
}
