/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71227
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
    var_20 = ((/* implicit */unsigned char) -2070150730917651302LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_21 -= ((/* implicit */unsigned char) 2988029421502616773LL);
        arr_4 [i_0] = ((/* implicit */short) min((((long long int) arr_2 [i_0 - 1] [i_0 - 1])), (arr_2 [i_0 + 2] [i_0 + 1])));
        arr_5 [i_0] = var_7;
    }
    var_22 = ((/* implicit */unsigned char) ((var_19) ? (((/* implicit */int) (short)-10865)) : (max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (short)5563))))));
    var_23 = ((/* implicit */long long int) max((var_23), (4239108157554789827LL)));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_8 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [8LL]), (7002357465659972840LL)))) ? (((((((/* implicit */_Bool) arr_3 [8LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2988029421502616773LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)16256))))) : (((/* implicit */long long int) max(((-(((/* implicit */int) (short)24126)))), (((-1973698592) + (((/* implicit */int) (short)5)))))))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_24 = ((/* implicit */long long int) min((var_24), (4239108157554789827LL)));
                var_25 = var_6;
                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_18 [i_2] [i_2] = ((/* implicit */int) var_9);
                /* LoopSeq 3 */
                for (long long int i_5 = 4; i_5 < 12; i_5 += 4) 
                {
                    var_27 += ((/* implicit */int) var_11);
                    arr_22 [i_2] [i_4] [i_4] [(_Bool)1] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_5])) ? (-4032142681570227507LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_5])))))));
                    arr_23 [i_2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_5 - 2] [i_5 - 3] [i_5 - 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) || (var_18)))) : (((/* implicit */int) var_10))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (arr_9 [i_2] [9LL] [i_4]) : (var_14)))) ? (((/* implicit */int) (short)-5564)) : (((/* implicit */int) arr_16 [(short)10] [i_1] [i_1 + 1]))));
                        arr_27 [i_1] [i_2] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_5]))))));
                    }
                    for (long long int i_7 = 4; i_7 < 12; i_7 += 1) 
                    {
                        arr_30 [i_1] [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))));
                        arr_31 [i_1] [i_1] [i_1] [i_4] [i_5 - 1] [i_2] [i_7 - 4] = ((_Bool) (short)-8);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */int) (short)-24126)) - (((/* implicit */int) (short)-16273)))))));
                    }
                }
                for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    var_30 -= arr_28 [i_4] [i_2] [i_2] [i_1] [i_4];
                    arr_34 [(_Bool)1] [i_2] [i_2] [i_4] [8LL] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) || (((1399011550) == (((/* implicit */int) var_19))))));
                }
                for (long long int i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2])) || ((_Bool)1)));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (short)-10865))));
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        arr_41 [i_2] [(_Bool)1] [i_4] [i_9] [(short)5] [i_10] = ((unsigned char) -5766494576738970410LL);
                        arr_42 [i_1] [i_10] [i_4] [0] [i_10] [i_4] [0] &= ((/* implicit */short) arr_13 [i_1] [i_4] [i_10]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        arr_46 [i_9] [i_2] [i_2] [i_9] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)-5564)) & (((/* implicit */int) (short)-652))));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (short)6))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        var_34 = (~(((/* implicit */int) arr_39 [11] [i_2] [i_4] [i_9 + 1] [i_2] [i_12])));
                        arr_50 [i_4] [i_4] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */short) ((arr_11 [i_1 + 1] [i_2 - 1] [i_9 + 2]) & (((/* implicit */int) (_Bool)1))));
                        arr_51 [6LL] [i_2] [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12159)) ? ((((_Bool)1) ? (5733963941336585607LL) : (((/* implicit */long long int) var_8)))) : (-6042639778727940165LL)));
                    }
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        arr_54 [i_2] [0LL] [i_2] [(_Bool)1] [i_4] = ((/* implicit */int) (-(arr_29 [i_1 + 1] [i_1] [i_2] [i_1 + 1] [i_1] [i_2] [i_1 + 1])));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_40 [i_13] [i_4] [i_4] [i_4] [i_1 + 1]) : (((/* implicit */int) (short)-18857))))))))));
                        arr_55 [i_1] [i_2] [i_2] [i_9 + 2] [i_13] = ((/* implicit */long long int) (short)-5570);
                        var_36 = (!(((/* implicit */_Bool) arr_12 [i_2])));
                    }
                }
                arr_56 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */short) ((arr_37 [i_1] [i_1] [i_4] [i_2 - 1] [i_2 + 1] [i_1 + 1]) ? (((arr_53 [i_1 + 1] [i_1 + 1] [i_2]) % (((/* implicit */int) (short)-23141)))) : (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))));
            }
            var_37 = ((/* implicit */long long int) -422220550);
            arr_57 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6)) ? (arr_47 [12LL] [6LL] [i_2 + 1] [i_2 + 1] [i_2] [12LL]) : (((/* implicit */int) (unsigned char)43))))) ? (((var_2) ? (((/* implicit */int) arr_36 [i_1] [i_1] [i_2] [i_2 + 1])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) -1399011551)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_19)))))) & (((((var_17) * (((/* implicit */int) var_13)))) % (((/* implicit */int) max(((short)3809), (((/* implicit */short) var_5)))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            for (int i_15 = 1; i_15 < 11; i_15 += 4) 
            {
                {
                    arr_63 [1LL] [i_14] = ((/* implicit */short) min((((((/* implicit */int) (!((_Bool)0)))) >> (((arr_48 [i_1] [i_14] [i_14]) - (7410167330995649046LL))))), (((/* implicit */int) var_3))));
                    var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-5570)) ? (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)71)), ((short)-5570)))), (((((/* implicit */_Bool) -2058902314)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19))))))) : (min((((/* implicit */long long int) (_Bool)1)), (4239108157554789827LL)))));
                    var_39 = ((/* implicit */unsigned char) var_19);
                    var_40 -= ((/* implicit */short) max((max((arr_35 [i_1 + 1] [i_14] [i_14] [i_1]), (arr_35 [i_1 + 1] [(short)2] [i_14] [i_1 + 1]))), (2199023255551LL)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_16 = 1; i_16 < 12; i_16 += 4) /* same iter space */
        {
            arr_66 [i_16] [i_1] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_16] [i_16])) ? ((+(((/* implicit */int) (short)-15)))) : (((/* implicit */int) (short)-5562))))) ? (((/* implicit */int) (short)-29)) : (122905010)));
            arr_67 [i_16] [i_16] [(_Bool)0] = ((/* implicit */_Bool) -1399011543);
        }
        /* vectorizable */
        for (long long int i_17 = 1; i_17 < 12; i_17 += 4) /* same iter space */
        {
            arr_70 [(unsigned char)0] |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(var_17)))) : (-243121433004620326LL));
            arr_71 [i_1] [i_17] = ((/* implicit */long long int) (unsigned char)51);
        }
    }
}
