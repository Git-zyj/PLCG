/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91166
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) arr_2 [3] [i_0]);
        var_21 -= ((/* implicit */long long int) (signed char)-127);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (max((((/* implicit */int) arr_3 [i_0])), (arr_2 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) : (-7413873771893224375LL)));
        var_22 = ((/* implicit */signed char) var_14);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) arr_0 [i_1] [(signed char)1]);
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */int) arr_6 [i_1] [i_1]);
        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(7413873771893224402LL)))) && (((/* implicit */_Bool) var_17))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_17 [i_2] [i_3] = ((/* implicit */unsigned short) arr_14 [i_2 + 2] [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_23 [8LL] [20LL] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                        var_26 = ((/* implicit */signed char) (+(arr_13 [i_2 + 1])));
                        arr_24 [i_2] [8LL] [i_4] [(unsigned short)3] = ((/* implicit */unsigned char) (+(arr_13 [i_2 + 2])));
                        arr_25 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) 1103683641);
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) -1);
            var_31 = ((2147483647) ^ (((/* implicit */int) (short)-32764)));
            var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
            arr_29 [i_6] = ((/* implicit */long long int) arr_0 [i_2 + 2] [i_2 + 2]);
        }
        for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51283))) ^ (((-4695409714428870454LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_7 - 2] [i_7 + 1] [i_2 - 1] [i_2 - 1]))));
            var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_2 + 2]))));
            var_36 = ((/* implicit */long long int) (short)-25557);
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_15 [i_2 - 1] [i_7]))));
        }
        var_38 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_27 [i_2] [i_2] [i_2 + 1])) & (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (int i_8 = 4; i_8 < 20; i_8 += 2) 
        {
            var_39 -= ((/* implicit */signed char) (~(arr_32 [i_2 + 2] [i_8] [i_8])));
            /* LoopSeq 2 */
            for (unsigned short i_9 = 3; i_9 < 19; i_9 += 1) /* same iter space */
            {
                var_40 |= ((/* implicit */int) arr_33 [(signed char)1] [(unsigned char)10] [i_9 - 2]);
                arr_39 [12] = ((((/* implicit */int) arr_30 [i_8 - 1] [i_2 + 3] [i_9 - 2])) | (((/* implicit */int) (short)32764)));
                arr_40 [(unsigned char)5] [i_8] = ((/* implicit */int) ((arr_11 [i_2 + 3] [i_8 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8] [i_9])))));
                arr_41 [i_8 - 2] [i_8] [i_8] [4] = ((arr_11 [i_2 + 2] [i_8 - 1]) ^ (arr_11 [i_2 + 2] [i_8 - 1]));
                arr_42 [(_Bool)1] [19LL] [i_9 - 2] = ((/* implicit */signed char) (+(arr_20 [i_2 + 2] [i_2] [i_2 + 2] [i_8 - 2] [i_8] [i_9 + 2])));
            }
            for (unsigned short i_10 = 3; i_10 < 19; i_10 += 1) /* same iter space */
            {
                arr_47 [i_2] [i_10 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((~(var_15))) : (((var_15) << (((((/* implicit */int) var_4)) - (174)))))));
                /* LoopSeq 3 */
                for (int i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    arr_50 [i_2 + 3] [i_10 - 3] [i_10] [i_11] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7413873771893224404LL)) ? (arr_28 [i_2] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10]))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_46 [i_2] [i_8] [i_11 + 1])))))));
                    var_41 = ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_11] [i_11] [i_11 - 1] [i_11 - 1]))));
                }
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    var_42 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_26 [i_2] [i_2 + 2] [i_2]))))));
                    var_43 = ((/* implicit */int) arr_18 [(unsigned char)18]);
                }
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    var_44 = ((/* implicit */short) arr_52 [i_8 - 1] [i_8 + 1] [i_8 - 4] [i_8 - 1] [i_8]);
                    arr_55 [i_2] = (+(arr_28 [i_2] [i_8] [i_8 - 2]));
                    arr_56 [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)126);
                }
                /* LoopSeq 1 */
                for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)33364)) && (((/* implicit */_Bool) (unsigned short)63)))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) arr_57 [i_2] [i_2 + 3] [i_8] [i_2 + 2])))))));
                    var_46 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */_Bool) (unsigned char)240)) ? (arr_1 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65481)))))));
                    arr_59 [i_14 + 1] [i_14] [17LL] [i_14] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) / (((((/* implicit */_Bool) var_1)) ? (2147483647) : (((/* implicit */int) (unsigned short)12248))))));
                    arr_60 [i_2] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_2 + 1] [i_8 - 3]))));
                }
                /* LoopSeq 1 */
                for (signed char i_15 = 2; i_15 < 20; i_15 += 1) 
                {
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) 169652713)) ? (((/* implicit */int) arr_38 [i_2 + 3] [11ULL] [i_8 + 1] [i_15 - 1])) : (((/* implicit */int) var_14))));
                    arr_64 [i_2] [i_8] [i_10] [i_15 - 1] = (!(((/* implicit */_Bool) arr_31 [i_15 + 1])));
                    var_48 = ((/* implicit */unsigned char) (~(((3707700790414819243ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95)))))));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 1; i_16 < 20; i_16 += 2) 
                    {
                        var_49 = ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_2 + 2]))));
                        arr_67 [i_2] [i_8] [i_10] [i_15 - 1] [(unsigned char)7] = ((/* implicit */long long int) ((int) arr_66 [i_15] [4LL] [i_15] [i_15 + 1] [19LL]));
                        var_50 = ((/* implicit */int) var_11);
                    }
                    for (int i_17 = 1; i_17 < 20; i_17 += 4) 
                    {
                        var_51 = (~(arr_49 [i_2 + 1] [i_2 + 2]));
                        var_52 = ((/* implicit */short) ((arr_1 [i_8 - 3]) << (((arr_11 [i_10 + 2] [i_10]) - (4848286495524191116LL)))));
                        var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184))));
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((unsigned char) var_16)))));
                    }
                    for (int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_8 - 4] [i_8 - 4] [i_15 - 1] [i_15] [i_10 + 2] [i_2 - 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_56 -= ((/* implicit */unsigned long long int) arr_32 [i_8] [i_8 + 1] [(unsigned char)4]);
                        var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) arr_46 [i_10 + 2] [i_10 - 1] [i_10 + 2]))));
                        var_58 = ((/* implicit */signed char) var_10);
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    arr_77 [(unsigned char)19] [i_8] [i_8] [i_8] [11LL] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_2] [(unsigned short)10] [(unsigned char)11] [(unsigned short)3])) && (((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_8 + 1] [i_10] [i_19] [i_19]))));
                    var_59 = ((/* implicit */long long int) var_11);
                }
            }
        }
        arr_78 [i_2] |= ((/* implicit */unsigned short) ((_Bool) 2007516339));
    }
    /* vectorizable */
    for (signed char i_20 = 0; i_20 < 19; i_20 += 2) 
    {
        var_60 = ((/* implicit */long long int) ((((/* implicit */int) arr_68 [i_20] [i_20])) | (((/* implicit */int) (signed char)8))));
        var_61 = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_20] [i_20] [i_20] [i_20] [(unsigned short)7] [i_20])) && (((/* implicit */_Bool) -1913342822))));
    }
    for (unsigned short i_21 = 1; i_21 < 15; i_21 += 1) 
    {
        var_62 = ((/* implicit */_Bool) 4695409714428870449LL);
        arr_85 [i_21] = ((((/* implicit */int) (unsigned char)164)) << (((((var_2) ^ (arr_51 [i_21 - 1] [i_21 + 2]))) - (955165422))));
        var_63 = ((/* implicit */unsigned char) (((~(min((((/* implicit */long long int) var_18)), (var_7))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_79 [i_21 - 1]))))))));
    }
}
