/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85614
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
    var_16 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-58))))))));
    var_17 = (!(((/* implicit */_Bool) -2106566274)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((((unsigned int) var_4)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_19 = ((/* implicit */signed char) min((arr_0 [i_0]), (((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_14))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)0)))));
        var_20 = ((/* implicit */short) var_10);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) (+(max((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))));
            arr_9 [i_2] = ((/* implicit */unsigned short) ((short) (~((~(((/* implicit */int) (unsigned char)218)))))));
            arr_10 [i_2] = ((/* implicit */long long int) (unsigned char)215);
            /* LoopNest 3 */
            for (signed char i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_17 [15U] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (+(((((int) arr_1 [11U])) - ((-(((/* implicit */int) var_3))))))));
                            arr_18 [i_1] [i_1] [i_3] [i_4 + 1] [i_2] = ((/* implicit */short) min((((((/* implicit */unsigned int) arr_4 [7ULL] [i_1])) | (((arr_0 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) var_0))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_15 [15U] [i_4] [(_Bool)1] [i_4] [(_Bool)1] [i_2 - 2] [i_1])))))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_2] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 1])) || (((/* implicit */_Bool) (unsigned char)215))))));
        }
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (-1813589421871499255LL) : (1813589421871499248LL)))) ? ((-(1073118386))) : (((/* implicit */int) (unsigned char)41)))))));
            /* LoopSeq 2 */
            for (signed char i_7 = 4; i_7 < 14; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    arr_29 [i_1] [i_1] [i_1] [i_6] [4] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_2)))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_6] [i_6] [i_6 + 2]))))), (max((((/* implicit */long long int) var_15)), (arr_11 [i_6] [i_9] [i_9])))))) && ((!(((/* implicit */_Bool) arr_25 [(_Bool)1] [i_6 - 1] [(unsigned short)15] [1U]))))));
                        arr_32 [i_1] [i_6] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-10381))))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    arr_35 [i_6 - 1] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [(signed char)2] [i_6 - 1] [i_6 + 2] [i_7 - 3]))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) (unsigned char)240);
                        arr_38 [i_6] [(signed char)7] [i_6] [i_6] [i_6 - 1] = ((/* implicit */short) max((max((((((/* implicit */unsigned long long int) arr_14 [i_1] [i_6 - 1] [i_7] [i_10] [i_6])) % (arr_20 [i_7] [i_10] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_7] [i_10] [i_11] [i_7 - 2])) && (var_8))))));
                    }
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (((((+(arr_3 [i_6 + 2] [i_7 - 3]))) + (2147483647))) >> ((((+(arr_3 [i_6 + 2] [i_7 - 3]))) + (1369292263))))))));
                }
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7220012019541874804ULL)))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_28 = ((/* implicit */long long int) ((int) (+(((((/* implicit */_Bool) 1285999531U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)218)))))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    arr_44 [i_1] [i_6] [i_12] [(unsigned short)12] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) : (((((/* implicit */_Bool) arr_34 [i_1] [i_1] [8ULL] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_6] [(signed char)5] [i_12]))) : (3008967764U))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */short) var_2);
                        arr_47 [i_1] [i_6] [i_6] [i_6] [i_14] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_14])) && (((/* implicit */_Bool) (-(699341418U))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((var_13) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                        arr_51 [i_1] [i_6] [i_12] [i_6] [3] = ((/* implicit */unsigned long long int) arr_16 [i_1] [(signed char)6] [15] [i_15]);
                        var_31 = ((/* implicit */short) 1285999531U);
                        arr_52 [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (_Bool)1)))));
                    }
                    arr_53 [i_1] [i_6] [i_12] [(_Bool)1] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_7)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) 1959177097U))));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((signed char) min((arr_11 [i_13] [i_13] [i_6 - 1]), (arr_11 [i_16] [i_1] [i_6 - 1])))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                    {
                        arr_60 [i_1] [i_6] [i_12] [i_13] [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_54 [i_1] [i_1]))));
                        arr_61 [i_6] [(_Bool)1] [12] [i_6] [i_12] [(_Bool)1] [i_17] = ((/* implicit */_Bool) var_7);
                    }
                }
                for (short i_18 = 1; i_18 < 15; i_18 += 1) 
                {
                    var_34 *= ((/* implicit */_Bool) arr_48 [(_Bool)1] [i_18] [i_12] [i_6] [i_1]);
                    var_35 += ((/* implicit */unsigned char) -1813589421871499255LL);
                }
                var_36 |= ((/* implicit */int) max((arr_11 [i_1] [i_1] [i_12]), (((/* implicit */long long int) ((((-1813589421871499271LL) < (((/* implicit */long long int) ((/* implicit */int) var_12))))) && ((!(((/* implicit */_Bool) arr_7 [i_12])))))))));
            }
        }
        arr_64 [(short)9] = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_62 [i_1] [i_1] [i_1]))))), (max((arr_0 [i_1]), (((/* implicit */unsigned int) ((unsigned short) arr_23 [i_1])))))));
        arr_65 [i_1] = ((/* implicit */short) min((((((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)-54)))) << (((max((var_4), (((/* implicit */long long int) arr_54 [(unsigned char)10] [i_1])))) - (1338027128212646978LL))))), (((/* implicit */int) var_12))));
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) var_0))));
        arr_66 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_1] [i_1] [i_1] [i_1] [i_1]))))) - (((((/* implicit */int) arr_62 [i_1] [i_1] [i_1])) / (var_10)))));
    }
    for (int i_19 = 1; i_19 < 16; i_19 += 1) 
    {
        var_38 = ((/* implicit */short) (~(4003622835U)));
        var_39 = ((/* implicit */unsigned int) max(((+(min((arr_1 [i_19]), (var_10))))), (((/* implicit */int) ((signed char) arr_1 [i_19])))));
        var_40 = ((/* implicit */int) (~((-(((var_4) % (((/* implicit */long long int) var_1))))))));
        var_41 *= ((/* implicit */unsigned short) arr_67 [i_19] [(_Bool)1]);
        /* LoopSeq 3 */
        for (signed char i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            arr_73 [i_20] = ((/* implicit */unsigned short) arr_1 [i_19]);
            arr_74 [i_19] [i_20] = ((/* implicit */short) ((int) ((((arr_69 [i_19]) || (((/* implicit */_Bool) arr_68 [i_19] [6U])))) ? ((+(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))))));
            var_42 = ((/* implicit */long long int) arr_70 [i_19]);
            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_70 [i_20]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) arr_68 [i_19 + 2] [i_20])))))))), (var_4))))));
        }
        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            var_44 = ((/* implicit */short) (-((~(arr_1 [i_19 - 1])))));
            var_45 = ((/* implicit */_Bool) ((((min((min((arr_70 [i_19]), (((/* implicit */int) arr_69 [3LL])))), (((/* implicit */int) ((unsigned char) var_5))))) + (2147483647))) >> (((/* implicit */int) var_8))));
        }
        for (long long int i_22 = 0; i_22 < 18; i_22 += 3) 
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 18; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned short i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        {
                            arr_88 [i_19] [i_22] [i_19] [7U] [i_19] [13ULL] = ((/* implicit */_Bool) max((((unsigned long long int) (+(-1493999325)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
                            arr_89 [i_19] [i_22] [i_22] [(_Bool)1] [i_19] [(short)3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)1)))))) * (max((arr_78 [i_22]), (arr_78 [i_22])))));
                        }
                    } 
                } 
            } 
            arr_90 [i_22] = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_85 [i_19 + 2] [i_19 + 2] [(unsigned char)13] [i_19] [i_22] [i_19 - 1]), (arr_85 [i_19] [i_22] [i_19 + 1] [i_22] [i_19] [i_19 + 1]))))));
            arr_91 [i_22] [i_22] = ((/* implicit */int) (~(arr_76 [i_22] [i_19 - 1])));
            arr_92 [i_19 + 1] [i_19] [i_22] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1813589421871499247LL)) >= (arr_76 [i_19] [i_19])))) : ((-(((/* implicit */int) arr_86 [i_19] [i_19] [i_19 - 1] [i_22] [(_Bool)1] [i_19]))))))));
            var_46 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
        }
    }
    var_47 = ((/* implicit */unsigned long long int) (signed char)-32);
    var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
