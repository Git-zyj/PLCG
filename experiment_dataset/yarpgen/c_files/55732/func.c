/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55732
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_3)))) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) (short)508)), (1654976339))))), (max((((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))), (min((((/* implicit */int) (_Bool)1)), (-1654976339))))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */long long int) var_4)) : ((~(var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(1489836522))))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)181)))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min(((unsigned short)43817), ((unsigned short)65532))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                var_21 = ((/* implicit */int) max((var_21), (((min((((int) arr_1 [i_1])), (1654976330))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [(_Bool)1])))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_5] = ((/* implicit */long long int) arr_0 [i_0] [i_6]);
                            var_22 &= ((/* implicit */unsigned long long int) (~(max((min((((/* implicit */long long int) arr_11 [i_0] [i_6] [i_0])), (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) ((-1654976339) <= (1654976334))))))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                arr_24 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_23 [i_0 + 1] [i_0 + 1]));
                arr_25 [i_0] [i_1] [i_7 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) min((arr_8 [i_7] [5LL] [(unsigned char)11]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0]))))))));
                arr_26 [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_7 + 1] [(unsigned char)8])) + (((/* implicit */int) arr_14 [i_0] [11U] [i_7 + 1] [i_7]))))) ? (min((-2105336245461806570LL), (((/* implicit */long long int) (short)-5214)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_17))))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_8 = 2; i_8 < 9; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 3; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
            {
                {
                    arr_35 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_10] [(unsigned char)2] [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_9 + 1] [i_9 + 2])) : (((/* implicit */int) arr_16 [i_10] [i_10 + 1] [i_10 + 1] [i_10]))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((unsigned int) (unsigned short)20853)))));
                                arr_42 [i_10] [i_11] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) (~(((int) arr_29 [i_12] [i_8 + 2] [i_12]))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)6144)) : (arr_6 [0ULL]))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1654976339)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)96)))))));
                }
            } 
        } 
        arr_43 [i_8] [i_8] &= (!(((/* implicit */_Bool) arr_20 [i_8] [(signed char)8] [i_8] [i_8] [(signed char)8])));
        var_26 = ((/* implicit */unsigned char) ((((arr_37 [i_8 - 1] [i_8 - 1] [i_8 - 1]) + (2147483647))) << (((arr_37 [i_8 - 1] [i_8] [i_8 - 1]) + (1072715726)))));
    }
    for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_14 = 2; i_14 < 14; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                {
                    var_27 = (((!((_Bool)0))) ? (((/* implicit */int) (unsigned char)244)) : (((((/* implicit */int) (signed char)-81)) / (((/* implicit */int) (signed char)71)))));
                    var_28 ^= ((/* implicit */signed char) ((unsigned char) min((0LL), (((/* implicit */long long int) (unsigned short)44681)))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (signed char)112)), (-8238242263191244807LL))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned short)32768)))))))) ? (1073741824) : (((((/* implicit */_Bool) arr_44 [i_14 + 2])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_44 [i_14 - 2]))))));
                }
            } 
        } 
        arr_52 [i_13] = ((/* implicit */unsigned short) min((arr_47 [i_13]), (arr_47 [i_13])));
        arr_53 [i_13] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 6410054863595655580ULL)) ? (-1803537428305757185LL) : (2105336245461806545LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (arr_47 [i_13]) : (((/* implicit */long long int) var_3)))) < (((/* implicit */long long int) max((arr_51 [(short)15] [i_13]), (((/* implicit */int) arr_44 [i_13]))))))))));
    }
    for (short i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        arr_56 [i_16] = ((/* implicit */signed char) min((max((((/* implicit */int) var_2)), (arr_54 [i_16]))), (arr_54 [2LL])));
        /* LoopSeq 3 */
        for (unsigned long long int i_17 = 4; i_17 < 18; i_17 += 1) /* same iter space */
        {
            arr_59 [i_17] = ((/* implicit */_Bool) var_16);
            arr_60 [i_16] [7U] [(signed char)15] = ((/* implicit */int) ((((/* implicit */_Bool) ((3024814244U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))) ? (((long long int) arr_58 [i_16] [i_16] [i_16])) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (short i_19 = 1; i_19 < 18; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */int) arr_58 [i_17 - 1] [i_19 + 2] [i_19 + 1]);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((unsigned long long int) arr_68 [i_19] [i_17 - 1] [i_16])) - (((/* implicit */unsigned long long int) arr_66 [i_19] [i_19 - 1] [i_18] [i_17 + 1])))))));
                            var_32 = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    arr_73 [i_16] [i_16] [i_18] = ((/* implicit */int) (unsigned char)242);
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((signed char) var_14)))));
                }
                for (short i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    arr_76 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) arr_71 [i_16] [i_22] [i_17 + 2] [i_18]);
                    arr_77 [i_22] [i_22] [i_18] [i_18] [i_17] [i_22] &= var_16;
                    arr_78 [i_17 - 3] [i_18] [i_22] [i_22] = var_11;
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (arr_61 [i_17 - 4]) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned short)41688)) : (((/* implicit */int) arr_72 [i_16])))))))));
                }
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((unsigned long long int) 1099511627712LL)))));
                var_36 = ((/* implicit */unsigned char) arr_72 [i_18]);
            }
        }
        for (unsigned long long int i_23 = 4; i_23 < 18; i_23 += 1) /* same iter space */
        {
            arr_82 [i_16] &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_65 [i_23] [i_23 - 2])))));
            arr_83 [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) max((2105336245461806538LL), (((/* implicit */long long int) (+(-1))))))) ? (((long long int) (+(arr_79 [i_23])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 72057594037927872ULL)) || (((/* implicit */_Bool) 3))))))));
            arr_84 [i_23] = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)244)));
        }
        /* vectorizable */
        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
        {
            arr_89 [i_24] = ((/* implicit */int) ((unsigned short) arr_62 [i_16] [i_24]));
            var_37 = ((/* implicit */short) arr_70 [i_16]);
            arr_90 [i_24] [i_16] &= ((/* implicit */unsigned short) (+(arr_71 [i_24 + 1] [i_24] [i_24] [i_16])));
        }
    }
    var_38 = ((/* implicit */signed char) min((((_Bool) var_0)), (((6802053600764042044ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
}
