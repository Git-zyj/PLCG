/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92030
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) arr_2 [6] [i_0]))));
        var_14 = var_6;
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1]))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_1 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)33240))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (var_3))))))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned long long int) var_8);
        arr_17 [(signed char)10] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-((-(((/* implicit */int) arr_6 [24]))))))), ((-(var_3)))));
        arr_18 [(_Bool)1] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned short)52706))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    arr_23 [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_1])), (arr_3 [i_6] [i_5])))) ? (((((/* implicit */_Bool) arr_15 [(_Bool)1] [18U] [(unsigned short)6] [i_5] [(unsigned short)6] [i_5])) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_10 [(unsigned char)18] [(unsigned char)4] [(unsigned char)18] [i_5]))))) : (var_7))) : (((/* implicit */int) arr_14 [i_1] [i_6] [(unsigned short)24] [(_Bool)1] [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_5] [5] [i_5]);
                        var_18 |= ((/* implicit */unsigned short) arr_0 [i_1]);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_1])), (((long long int) -1823266416996147386LL))))) ? ((+(arr_19 [i_1] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))))));
                    }
                    for (signed char i_8 = 4; i_8 < 22; i_8 += 4) 
                    {
                        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_8 + 3])) ? (((/* implicit */int) arr_5 [i_8 - 4])) : (((/* implicit */int) arr_5 [i_8 - 1]))))) : ((-(-3881160165664271320LL))));
                        arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) min((min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned char)77)))))), ((+(((int) var_5))))));
                    }
                    var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)119))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            var_22 &= ((/* implicit */signed char) arr_3 [i_10] [i_10]);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_47 [i_10] [i_11] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_9] [i_12] [i_11])) ? (arr_3 [i_10] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)0)) : (-361464377))), (((/* implicit */int) ((_Bool) arr_6 [i_13])))));
                            arr_48 [(_Bool)1] [i_10] [i_11] = ((/* implicit */unsigned char) ((var_4) ? (16020561018447678995ULL) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_2)), (arr_37 [(_Bool)1]))))))));
                        }
                    } 
                } 
            } 
            arr_49 [i_10] = ((/* implicit */long long int) var_9);
        }
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned short) arr_15 [i_9] [9] [(_Bool)1] [(unsigned char)14] [i_14] [19]);
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (unsigned int i_16 = 3; i_16 < 20; i_16 += 3) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_34 [(_Bool)1])))))))));
                        var_26 -= ((/* implicit */_Bool) min(((unsigned short)28452), (((/* implicit */unsigned short) (unsigned char)228))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_9] [i_14] [2] [i_9] [1LL] [i_9])) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) min((((/* implicit */short) var_4)), (arr_34 [(signed char)7])))))))))));
            arr_59 [i_9] = ((/* implicit */int) var_3);
        }
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_18 = 1; i_18 < 19; i_18 += 1) /* same iter space */
            {
                arr_65 [i_9] [8] [8] |= ((/* implicit */int) arr_42 [i_9] [(_Bool)1] [i_17] [i_18 - 1]);
                /* LoopNest 2 */
                for (unsigned char i_19 = 4; i_19 < 18; i_19 += 2) 
                {
                    for (short i_20 = 2; i_20 < 20; i_20 += 1) 
                    {
                        {
                            arr_71 [i_17] [i_17] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) ((int) arr_54 [(unsigned short)18] [(_Bool)1] [i_17]));
                            arr_72 [18U] [i_17] [(signed char)7] [18U] [i_17] [i_19] [i_17] = ((/* implicit */long long int) var_5);
                            arr_73 [(_Bool)1] [i_17] = arr_28 [i_17] [i_9];
                        }
                    } 
                } 
            }
            for (unsigned short i_21 = 1; i_21 < 19; i_21 += 1) /* same iter space */
            {
                arr_77 [i_9] [i_17] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_9] [i_9] [(unsigned short)1] [i_9] [i_17] [i_9]))));
                arr_78 [i_17] [i_17] = ((/* implicit */long long int) (unsigned char)182);
            }
            var_28 ^= ((/* implicit */long long int) arr_34 [6ULL]);
            arr_79 [i_9] [i_17] = ((/* implicit */unsigned char) arr_3 [i_17] [i_17 + 1]);
            var_29 -= ((/* implicit */signed char) (~((-(((/* implicit */int) arr_54 [i_17 + 1] [i_17 + 1] [(unsigned char)16]))))));
        }
        arr_80 [i_9] [i_9] = (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9] [(unsigned short)12])) ? (389412698) : (((/* implicit */int) var_9)))))));
        /* LoopSeq 2 */
        for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
        {
            arr_83 [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((long long int) arr_58 [i_9] [(signed char)5] [i_22] [i_22]))))) ? (66571993088LL) : (((/* implicit */long long int) (-(((int) arr_14 [i_9] [i_9] [i_9] [(unsigned char)11] [i_22])))))));
            arr_84 [4LL] [4LL] [i_22] = ((/* implicit */int) arr_6 [i_9]);
            arr_85 [i_22] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
            arr_86 [i_22] = (signed char)26;
            arr_87 [i_22] = ((/* implicit */unsigned char) arr_40 [i_9] [(short)15] [i_22] [(unsigned short)6] [i_22]);
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_9])) ? (min((-3088774201896036429LL), (((/* implicit */long long int) ((short) var_12))))) : ((+(arr_45 [(short)19])))));
            var_31 = ((/* implicit */_Bool) (-(arr_63 [i_9] [(unsigned char)14] [i_23])));
        }
    }
    var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
}
