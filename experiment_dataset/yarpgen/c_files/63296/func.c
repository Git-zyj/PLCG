/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63296
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            arr_11 [i_1] [i_3] [i_2] [i_1 - 3] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) var_1)))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (var_13) : (((/* implicit */int) ((signed char) var_16)))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_21 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((signed char) ((_Bool) var_18))))));
                            var_22 = ((/* implicit */signed char) (~(((long long int) var_11))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_16))) ? (((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_16))));
                            var_24 = ((/* implicit */unsigned short) ((long long int) ((signed char) 4237096645U)));
                            arr_16 [i_1] = ((/* implicit */unsigned short) var_9);
                            var_25 = ((/* implicit */signed char) (-(((var_7) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
                            var_26 &= ((/* implicit */int) ((unsigned short) ((signed char) var_3)));
                        }
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned short) ((signed char) var_3))), (((unsigned short) var_2)))));
            var_28 = ((/* implicit */long long int) ((int) min((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_19))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 1) 
                {
                    var_29 = ((/* implicit */short) ((long long int) ((var_6) ? (var_18) : (var_18))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))));
                        var_31 = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
                        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_6)))));
                        var_33 = ((/* implicit */signed char) var_18);
                    }
                    for (unsigned char i_10 = 2; i_10 < 22; i_10 += 4) 
                    {
                        arr_29 [i_0] [i_1] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (var_14))));
                        var_34 = ((/* implicit */unsigned short) ((short) var_1));
                        var_35 *= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_4)))));
                        var_36 += ((/* implicit */unsigned short) var_18);
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    var_37 = var_16;
                    arr_32 [i_0] [18U] [i_7] [i_11] [(unsigned short)20] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                }
                for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 4; i_13 < 21; i_13 += 4) 
                    {
                        arr_37 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                        var_39 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) var_15)))));
                        var_40 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_19)))));
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_41 = ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4237096645U)))) : (((unsigned long long int) var_3)));
                        arr_41 [i_1] [i_12 + 2] = ((/* implicit */_Bool) ((short) ((unsigned char) var_19)));
                        arr_42 [i_14] [i_1 + 3] [i_1] [i_7] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_19))))));
                        var_42 = ((/* implicit */unsigned int) var_19);
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((unsigned int) (~(var_12)))))));
                    var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                    var_45 = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        var_46 *= ((/* implicit */unsigned char) var_11);
                        var_47 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_3)))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        var_48 = ((/* implicit */signed char) ((unsigned char) ((short) var_9)));
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((int) var_8)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                        var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    }
                    arr_52 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((_Bool) var_1))));
                }
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((short) var_19)))));
                            var_52 = ((/* implicit */long long int) ((int) ((signed char) var_6)));
                            var_53 *= ((unsigned char) ((var_3) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        }
                    } 
                } 
            }
            for (int i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                arr_60 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) min((((/* implicit */unsigned int) var_13)), (4237096648U)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((unsigned int) 57870651U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))));
                    var_55 = ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) ((short) var_9))));
                    var_56 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) var_17)));
                    var_57 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) var_11)));
                }
                for (short i_22 = 0; i_22 < 23; i_22 += 2) 
                {
                    var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 297216136)))))))));
                    var_59 = ((/* implicit */unsigned long long int) ((int) ((long long int) 59076800)));
                    arr_68 [i_22] [i_20] [i_22] [i_22] [(unsigned char)2] [i_0] &= ((/* implicit */short) ((signed char) min((((/* implicit */int) ((short) var_7))), ((+(((/* implicit */int) var_15)))))));
                    var_60 = ((/* implicit */_Bool) (~(((/* implicit */int) var_19))));
                }
                var_61 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (signed char)-123)))));
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 23; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    for (signed char i_25 = 0; i_25 < 23; i_25 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)34))));
                            var_63 = ((/* implicit */unsigned short) ((signed char) var_3));
                            var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
                            var_65 |= ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_1)))));
                            arr_76 [i_0] [i_1 + 1] [i_25] [i_24] [i_25] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (signed char)-35)))));
                        }
                    } 
                } 
                arr_77 [i_1] = ((/* implicit */short) var_15);
            }
            for (unsigned int i_26 = 1; i_26 < 20; i_26 += 3) 
            {
                var_66 = ((/* implicit */unsigned char) max((var_66), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((long long int) ((unsigned char) var_0))) : (((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */long long int) ((int) var_6))) : (((long long int) var_19)))))))));
                var_67 ^= ((/* implicit */unsigned short) var_17);
                var_68 = ((/* implicit */signed char) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (unsigned short)14754)) : (((/* implicit */int) (signed char)-83))))));
            }
        }
        var_69 = ((/* implicit */signed char) ((long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) var_14))))));
    }
    var_70 = ((/* implicit */_Bool) ((int) 4294967295U));
    /* LoopNest 3 */
    for (short i_27 = 0; i_27 < 24; i_27 += 1) 
    {
        for (unsigned char i_28 = 1; i_28 < 23; i_28 += 3) 
        {
            for (long long int i_29 = 1; i_29 < 23; i_29 += 3) 
            {
                {
                    var_71 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_14)))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (max((var_8), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_17)))), (((/* implicit */int) ((short) var_6))))))));
                    var_72 = ((/* implicit */signed char) ((int) ((int) (+(((/* implicit */int) var_15))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_31 = 0; i_31 < 24; i_31 += 2) 
                        {
                            var_73 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) var_16)))));
                            var_74 = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                        {
                            arr_99 [i_27] [i_27] [i_27] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)39020)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) : (-7054399441091824310LL)));
                            var_75 = ((/* implicit */signed char) ((unsigned short) ((int) var_15)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_33 = 0; i_33 < 24; i_33 += 3) 
                        {
                            var_76 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))))));
                            arr_103 [(_Bool)1] [(_Bool)1] [i_28] [i_29] [(_Bool)1] [i_33] [i_29] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) var_15)));
                        }
                        for (unsigned char i_34 = 0; i_34 < 24; i_34 += 2) 
                        {
                            var_77 *= ((/* implicit */unsigned short) ((signed char) ((unsigned int) var_13)));
                            arr_107 [i_29] [i_29] [i_29] [i_28] [i_29] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (signed char)-35)))));
                        }
                        var_78 = ((/* implicit */int) ((_Bool) ((unsigned int) var_6)));
                    }
                    for (unsigned char i_35 = 0; i_35 < 24; i_35 += 4) 
                    {
                        arr_110 [i_27] [i_29] [i_35] [i_29] = ((/* implicit */unsigned short) ((long long int) ((int) ((long long int) var_2))));
                        arr_111 [i_29] [3U] [3U] [i_29] = ((/* implicit */short) ((unsigned short) ((short) -1811532296)));
                        arr_112 [i_27] [(unsigned char)2] [i_29 + 1] [i_29] [i_27] = ((/* implicit */signed char) ((unsigned short) max((((unsigned char) var_14)), (max((((/* implicit */unsigned char) var_3)), (var_19))))));
                    }
                }
            } 
        } 
    } 
    var_79 = ((/* implicit */unsigned int) min((var_79), (((unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_12))))))));
}
