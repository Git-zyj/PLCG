/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95585
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_16 = (-(((/* implicit */int) var_8)));
            var_17 = ((/* implicit */unsigned short) var_2);
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_8 [i_2] [i_0] = ((short) (!(((/* implicit */_Bool) var_1))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(var_12))))));
        }
        var_19 = ((/* implicit */unsigned short) (-(var_5)));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((var_13) ? (((/* implicit */unsigned long long int) ((long long int) var_14))) : (var_12)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((signed char) var_7));
                        var_22 = ((/* implicit */unsigned char) ((var_15) ? ((~(16837340819198745703ULL))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))));
                        arr_20 [i_0] [i_0] [(unsigned char)2] [(unsigned char)10] [i_5] [i_0] [i_6] = ((/* implicit */_Bool) ((long long int) var_10));
                        var_23 += ((/* implicit */unsigned long long int) (~(var_1)));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (var_12)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [(unsigned char)7] [i_4] [11U] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))));
                        arr_26 [i_0] [i_3] [i_4] [(unsigned short)7] = ((/* implicit */long long int) ((signed char) var_2));
                    }
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((signed char) var_10)))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) ((int) var_2));
                    var_27 = ((/* implicit */signed char) ((int) (+(var_3))));
                    var_28 = ((/* implicit */short) ((unsigned int) var_3));
                }
                var_29 = ((/* implicit */unsigned char) (-(var_9)));
                arr_29 [i_4] [11LL] [i_0] [i_0] = ((/* implicit */unsigned short) (!(var_13)));
            }
            arr_30 [i_0] [i_0] [i_3] = ((/* implicit */int) var_12);
        }
        arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9)));
        arr_32 [i_0] [i_0] = ((/* implicit */long long int) ((int) var_8));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned short) (~(-1LL)));
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_15))));
        var_31 -= ((/* implicit */signed char) ((unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_1)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        arr_38 [(unsigned char)7] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)67))))) ? (((/* implicit */long long int) (~(var_4)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))))));
        arr_39 [i_10] [i_10] = ((/* implicit */long long int) var_15);
        arr_40 [i_10] = ((var_15) ? (var_2) : (var_12));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (unsigned char i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    {
                        arr_49 [0] [i_12] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) var_6)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 4) 
                        {
                            arr_52 [(unsigned char)5] [6LL] [i_12] [i_13] [(signed char)0] = ((/* implicit */unsigned short) var_3);
                            var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_14)))) : (((/* implicit */int) ((_Bool) var_10)))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            arr_56 [i_10] [i_11] [i_12] [i_11] [i_15] [i_15] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) var_10))), ((+(((/* implicit */int) ((_Bool) var_10)))))));
                            var_33 = ((/* implicit */_Bool) var_6);
                        }
                    }
                } 
            } 
        } 
        arr_57 [i_10] [6LL] = ((/* implicit */int) (((!(((/* implicit */_Bool) 12934967650249081807ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((long long int) var_6))));
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        arr_61 [i_16] [i_16] = ((/* implicit */long long int) var_5);
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_70 [i_19] [i_19] [i_18] [i_19] [i_20] = ((/* implicit */int) var_8);
                                arr_71 [i_16] [1LL] [i_20] [i_16] [i_16] [(unsigned char)3] [i_19] = ((/* implicit */signed char) ((unsigned char) var_1));
                                var_35 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))));
                                var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)29158)) : (((/* implicit */int) (signed char)127))))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_5))))))))));
                                arr_72 [i_19] [3] [i_17] [i_19] [i_20] [i_20] = ((/* implicit */unsigned short) ((_Bool) var_2));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_73 [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_6), (((/* implicit */short) var_15)))))));
        var_37 = ((((/* implicit */_Bool) (~(var_2)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((int) var_4))));
    }
    /* LoopSeq 1 */
    for (signed char i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        arr_78 [(unsigned char)9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) 9223372036854775807LL)))));
        arr_79 [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9234)) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_38 -= ((/* implicit */long long int) ((unsigned int) var_4));
    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((int) var_11)) : (((/* implicit */int) var_6))))) : (var_1)));
}
