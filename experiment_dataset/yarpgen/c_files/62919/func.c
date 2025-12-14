/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62919
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
    var_11 = ((/* implicit */long long int) var_8);
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_12 += min((((int) arr_1 [i_0 - 3] [i_0 - 2])), (((/* implicit */int) (unsigned short)15389)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        var_13 += ((/* implicit */long long int) var_7);
                        arr_10 [i_3] [i_3] [(unsigned short)6] [(unsigned short)6] [i_0 + 1] [i_0] = ((/* implicit */int) (unsigned short)65535);
                        var_14 = arr_1 [i_1 - 1] [i_0 - 1];
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_0] = min((((((/* implicit */_Bool) 2147483630)) ? ((-(arr_7 [i_0] [i_0] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [9LL] [i_1 + 2])) - (var_6)))))), (min((((/* implicit */long long int) (+(var_6)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1))))));
                            arr_18 [i_0] [(unsigned short)13] [i_2] [(unsigned short)5] [i_4] [(unsigned short)5] = ((/* implicit */unsigned short) arr_3 [i_0]);
                            arr_19 [(unsigned short)7] = (((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (-4648380697653560102LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) -1235923607))))) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_1 - 1] [i_5 - 2])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (-2147483630) : (((/* implicit */int) arr_12 [(unsigned short)11] [i_1 - 1] [i_1] [i_1 + 2]))))))));
                            arr_20 [9] [9] [9] [9] [9] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_15 [i_5 - 1] [i_5 - 1] [i_2] [i_1 - 1] [i_0 - 4]), (((/* implicit */long long int) arr_1 [i_5 - 1] [i_1]))))) && ((!(((/* implicit */_Bool) arr_15 [i_5 - 1] [i_1 + 2] [i_2] [i_1 - 1] [i_0 - 4]))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_15 = (+(((/* implicit */int) (unsigned short)51480)));
                            var_16 = min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (arr_3 [i_0]));
                            var_17 += ((/* implicit */long long int) (-(min((((/* implicit */int) arr_22 [i_6 - 2] [1] [i_6 + 1] [i_6 - 2] [1])), (400875957)))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_4] [0LL] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0] [10]), (arr_21 [i_0] [i_0] [(unsigned short)2] [i_0] [i_0]))))))) / ((-(((((/* implicit */int) var_7)) - (-919266094)))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) | (arr_5 [i_0] [i_0])))))) ? (((/* implicit */int) (unsigned short)65535)) : ((+(((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0 - 3])) == (var_4))))))));
                            arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) % (var_0)));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1264486753564540302LL))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_31 [10] [i_1 - 1] [i_2] [i_4] [i_8] = -2147483631;
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_28 [i_0] [i_0] [i_2] [i_4] [i_8]), (arr_12 [i_0] [i_0] [i_0] [i_0 - 4]))))));
                            var_20 = (((-(arr_15 [i_8] [i_4] [i_1] [i_1] [12LL]))) & (min((min((arr_5 [19] [19]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((int) arr_0 [i_4] [(unsigned short)17]))))));
                            var_21 = ((/* implicit */unsigned short) min((-1252624998), (((/* implicit */int) min((arr_30 [11] [i_0 - 2] [11] [1LL] [4LL]), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_10)) == (var_1)))))))));
                        }
                        arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) max((((arr_13 [i_0] [i_0 - 3] [i_0 - 2]) | (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57446))))))), (((long long int) (+(((/* implicit */int) arr_1 [3LL] [(unsigned short)12])))))));
                        var_22 = ((((((/* implicit */_Bool) (unsigned short)32768)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1922883402)) : (arr_24 [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) (-(var_10)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_4])))))));
                        var_23 = var_4;
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1)) & (((/* implicit */int) ((min((arr_7 [i_0] [i_0 - 1] [i_0]), (((/* implicit */long long int) arr_2 [(unsigned short)2])))) == (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_2] [i_1] [i_0] [i_0]))) / (-1LL))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        arr_37 [i_0 - 3] [(unsigned short)11] [i_0 - 3] = ((/* implicit */unsigned short) min(((!((!(((/* implicit */_Bool) arr_34 [i_0] [i_1 + 1] [i_2])))))), ((!((!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0]))))))));
                        /* LoopSeq 4 */
                        for (int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                        {
                            arr_40 [(unsigned short)4] [i_1] [i_1 + 2] [i_1 + 1] = (-(((/* implicit */int) ((unsigned short) -738018485))));
                            arr_41 [i_0] [13LL] [13LL] [i_10] = ((/* implicit */unsigned short) -738018485);
                            arr_42 [i_0 - 1] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_0] = ((/* implicit */long long int) ((unsigned short) (~((~(((/* implicit */int) (unsigned short)6812)))))));
                        }
                        for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            arr_46 [9] [i_1 + 2] [i_2] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0 - 1] [i_0]), (var_7)))) - (((/* implicit */int) ((unsigned short) var_1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0 + 1])) >= (((/* implicit */int) var_3)))))) % (((((/* implicit */_Bool) arr_5 [(unsigned short)10] [(unsigned short)10])) ? (arr_5 [i_2] [i_11]) : (arr_13 [i_0] [i_0] [2]))))) : (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)20581)))) <= (((-2147483630) / (((/* implicit */int) (unsigned short)62743))))))))));
                            var_25 = ((/* implicit */int) arr_2 [i_0 - 4]);
                            arr_47 [i_0] [i_0] [18] [15LL] [i_0] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_38 [5LL] [i_1 - 1] [(unsigned short)10] [(unsigned short)10] [i_11])) ? (1119905084) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) arr_43 [i_0] [i_0] [(unsigned short)19] [i_0 - 2] [i_0] [i_0])) >= (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0]))))))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned short) ((long long int) ((min((2589912451488937353LL), (((/* implicit */long long int) var_3)))) < (((((/* implicit */_Bool) (unsigned short)17357)) ? (-1828513470474919630LL) : (arr_15 [i_0 + 1] [i_0] [(unsigned short)14] [(unsigned short)14] [4LL]))))));
                            arr_50 [i_0 - 4] [i_1] [i_2] [i_12] [i_12] = ((/* implicit */int) var_1);
                        }
                        for (int i_13 = 1; i_13 < 17; i_13 += 2) 
                        {
                            arr_54 [i_0] [i_1] [i_0] [i_0] [i_13] = ((/* implicit */long long int) -1161795051);
                            arr_55 [i_0 + 1] [i_1] [i_2] [i_9] [(unsigned short)19] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_11 [i_0 + 1] [i_1 - 1] [i_13 + 1]), (var_2)))) & ((~(var_6)))));
                            arr_56 [i_0 - 3] [i_0 - 2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_48 [i_0 + 1] [i_0 - 3] [i_0 - 2] [i_0 - 2])) * (((/* implicit */int) var_7))))));
                        }
                        var_27 *= ((/* implicit */unsigned short) ((((7668963116702824215LL) - (((/* implicit */long long int) arr_16 [i_0 - 3] [i_1 - 1])))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483630)))))) : ((-9223372036854775807LL - 1LL))))));
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((max((((/* implicit */int) arr_52 [i_0] [i_1] [i_1] [i_2] [i_1] [i_9])), (-633333423))) | (((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0 - 3])) ? (752324383) : (((/* implicit */int) arr_53 [i_0] [i_0] [(unsigned short)14] [i_0] [0LL]))))))) >= (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 - 2] [i_0] [7])) ? (arr_15 [i_0] [i_0 - 3] [i_1] [i_2] [i_0 - 3]) : (arr_15 [i_9] [i_9] [i_0 - 1] [i_1 + 1] [i_0 - 1])))));
                        var_28 = ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_52 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_2] [i_2])), (var_6))) - (((/* implicit */int) arr_43 [i_0] [i_0] [i_0 - 4] [i_0 - 4] [i_0 - 1] [i_0 - 1]))));
                    }
                    arr_58 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [7LL] [(unsigned short)6] [i_1] [7LL] [i_2] [i_1])) ? (((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_1 + 2] [i_0 + 1])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)33512)) : (((/* implicit */int) var_3))))))), ((~(max((-872309902670938369LL), (((/* implicit */long long int) -1))))))));
                }
            } 
        } 
        arr_59 [i_0 - 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 524287))));
    }
    for (long long int i_14 = 2; i_14 < 19; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    {
                        arr_73 [i_14 - 1] [i_14] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_67 [i_14 - 2] [i_14 - 1] [i_16] [i_14])) & (((/* implicit */int) arr_67 [i_14 - 1] [i_14 + 1] [(unsigned short)15] [i_14])))), (((/* implicit */int) arr_67 [i_14] [i_14 - 1] [12LL] [i_14]))));
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            arr_78 [i_14 + 1] [i_14 + 1] [(unsigned short)16] [i_17] [i_18] [i_14 + 1] [i_14] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)46582)) ? (((/* implicit */int) arr_65 [i_14] [i_14])) : (((/* implicit */int) arr_65 [i_14] [i_14])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(var_6))))));
                        }
                    }
                } 
            } 
        } 
        var_30 += ((/* implicit */unsigned short) (~(arr_68 [5] [12LL] [16LL] [i_14])));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_68 [i_14] [i_14] [i_14 - 1] [i_14 - 1]))));
        arr_79 [i_14] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_65 [i_14] [i_14]))))) | (((long long int) ((((/* implicit */int) (unsigned short)22846)) | (var_8))))));
        arr_80 [i_14] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(arr_61 [i_14])))) ? (((/* implicit */long long int) max((var_10), (var_6)))) : (var_1)))));
    }
    for (unsigned short i_19 = 1; i_19 < 24; i_19 += 4) /* same iter space */
    {
        var_32 += ((/* implicit */unsigned short) ((var_8) - (((/* implicit */int) arr_81 [i_19 + 1]))));
        var_33 = ((/* implicit */unsigned short) max((var_33), (arr_81 [i_19])));
    }
    for (unsigned short i_20 = 1; i_20 < 24; i_20 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */int) arr_85 [i_20]);
        var_35 -= 524287;
    }
}
