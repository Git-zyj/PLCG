/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68910
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
    var_19 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    arr_10 [i_0 - 1] [i_0 + 1] [(short)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)249)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_13 [i_3 + 1] [(unsigned char)12] [18] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [(short)2] [i_1])), (var_18))))));
                        arr_14 [20LL] [i_1] [i_2 - 1] [i_0 - 1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (~(629991025)))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) min((arr_0 [5LL]), (((/* implicit */unsigned short) (unsigned char)44)))))), (((short) ((_Bool) arr_3 [4ULL] [i_3 + 1]))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_11)))));
                            var_23 = ((/* implicit */long long int) ((_Bool) var_4));
                            var_24 = ((/* implicit */_Bool) (~(var_16)));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */short) ((unsigned char) ((_Bool) (+(((/* implicit */int) (signed char)33))))));
                            arr_20 [i_2 + 1] [(unsigned short)13] [i_2 + 1] [(short)19] [i_2 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_5)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_24 [(short)0] = ((/* implicit */unsigned long long int) (-((-(((long long int) var_7))))));
                            arr_25 [i_6] [i_3 + 1] [(unsigned char)1] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (+((-(629991028)))));
                            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))), ((+(-629991037)))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned short) ((int) var_18))))));
                            var_28 = ((/* implicit */unsigned short) ((signed char) ((unsigned int) arr_17 [i_0 - 1] [(signed char)8] [i_2 + 4] [i_6] [(_Bool)1] [(signed char)10] [i_6])));
                        }
                        for (signed char i_7 = 4; i_7 < 21; i_7 += 4) 
                        {
                            var_29 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)7838))))))));
                            arr_30 [9] [18U] [21ULL] = ((/* implicit */_Bool) ((int) ((short) ((short) 6893259953503758195LL))));
                        }
                        var_30 = ((/* implicit */signed char) ((unsigned char) max((-629991042), (-629991028))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_31 = (!(((/* implicit */_Bool) ((short) arr_31 [i_0 - 1] [i_0 - 1] [i_1] [16]))));
                        var_32 = ((/* implicit */short) ((int) (unsigned char)158));
                        arr_34 [i_8] [(unsigned char)4] [18U] [i_2 + 1] [10U] [(unsigned short)9] = ((/* implicit */_Bool) ((unsigned char) min((min((((/* implicit */long long int) arr_18 [i_0 - 1] [19] [i_1] [(short)16] [7LL] [i_2 - 1] [(unsigned char)19])), (var_0))), (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_33 = (!((!(((/* implicit */_Bool) ((unsigned int) (signed char)120))))));
                        arr_39 [18LL] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (short)(-32767 - 1))))));
                    }
                }
                /* vectorizable */
                for (long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (short)-9461))))))));
                            var_35 = ((/* implicit */long long int) ((unsigned int) arr_19 [i_1] [i_10 - 1] [i_11 + 4]));
                            var_36 = ((/* implicit */short) ((unsigned short) var_14));
                            arr_50 [i_10 + 2] [3U] [i_11 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_38 [i_0 + 1] [i_1] [i_10 + 1] [i_11 + 1] [(short)22])))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((unsigned char) var_0)))));
                            arr_54 [(short)2] [(unsigned short)5] [i_11 + 3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 815358902U))))));
                            arr_55 [i_0 - 1] [(short)15] [i_1] [(short)7] [15U] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_35 [i_1])))));
                            arr_56 [3] [0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((int) (unsigned char)198)));
                            var_38 = ((signed char) 5ULL);
                        }
                        var_39 = (!(((/* implicit */_Bool) -629991010)));
                        arr_57 [(signed char)14] [(signed char)12] [i_1] [i_10 + 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)35564))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((_Bool) arr_23 [2ULL] [i_0 - 1] [(_Bool)1] [(_Bool)1]))));
                        /* LoopSeq 3 */
                        for (short i_15 = 2; i_15 < 21; i_15 += 2) 
                        {
                            var_41 = ((/* implicit */short) ((unsigned long long int) ((_Bool) (unsigned short)63681)));
                            var_42 |= (+((~(arr_37 [(unsigned char)13] [(unsigned char)22] [i_14] [i_1]))));
                            arr_62 [i_1] [i_1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)130))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            arr_65 [i_0 - 1] [(unsigned short)8] [i_1] [i_1] [(_Bool)1] [9U] [i_16] = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) arr_18 [7U] [(unsigned short)17] [3ULL] [i_10 + 2] [i_10 - 3] [(unsigned short)14] [18ULL])))));
                            arr_66 [(_Bool)1] [0U] &= ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) (_Bool)0)))));
                        }
                        for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            arr_69 [(unsigned short)19] [i_14] [i_10 - 3] [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-9461)))))));
                            arr_70 [(unsigned short)10] [(_Bool)1] [i_1] [i_17] [22U] [(_Bool)1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
                        }
                        var_43 = ((/* implicit */_Bool) ((short) ((unsigned long long int) (unsigned char)103)));
                    }
                    for (unsigned char i_18 = 4; i_18 < 22; i_18 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) ((_Bool) ((long long int) arr_68 [i_0 - 1] [(_Bool)1] [i_0 - 1] [(unsigned short)12] [22U])));
                        arr_73 [(signed char)13] [14U] [4U] [i_18 - 4] = ((int) (+(((/* implicit */int) var_13))));
                        var_45 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_8))))));
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    var_46 = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) ((unsigned char) arr_12 [(signed char)8] [(signed char)8] [(signed char)4] [(short)16]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        for (short i_21 = 0; i_21 < 23; i_21 += 4) 
                        {
                            {
                                var_47 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)1833))))));
                                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (+(min((((/* implicit */long long int) min((arr_4 [i_19] [i_1]), (arr_11 [19ULL] [i_20] [i_19] [0] [i_1] [12U])))), ((+(6483970134342782187LL))))))))));
                                arr_80 [20LL] [(_Bool)1] [(signed char)22] [(short)3] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])))))));
                            }
                        } 
                    } 
                }
                var_49 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
}
