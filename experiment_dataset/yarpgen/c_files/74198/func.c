/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74198
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
    var_13 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */int) var_9)))), (max((((/* implicit */int) var_9)), (var_8))))))));
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_14 ^= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) ? (arr_0 [18ULL] [i_0 + 3]) : (arr_0 [i_0] [i_0])))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((arr_1 [6U]) ? (arr_0 [i_0] [i_0]) : (var_8))))) : (((/* implicit */int) arr_1 [(unsigned short)16])));
        var_15 = ((unsigned char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))), (((arr_0 [i_0] [i_0]) + (((/* implicit */int) var_2))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_10)))))) < (arr_4 [i_0 - 4] [i_0 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_10))) > (((/* implicit */int) min((var_10), (((/* implicit */short) var_3)))))))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) ? (arr_0 [i_0 - 4] [i_1]) : (((/* implicit */int) var_2))))) ? (((int) var_3)) : (((/* implicit */int) ((signed char) var_1))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((_Bool) arr_2 [i_0] [i_0 - 3])))))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max(((+(arr_0 [i_0 + 2] [i_1]))), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (var_4) : (arr_0 [i_0 - 3] [i_1])))));
        }
        for (int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_2 - 1]) ? (var_12) : (arr_3 [i_0] [i_0 + 3] [i_0 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_2 + 1])))) : (((unsigned long long int) arr_7 [i_2 - 1]))));
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (var_12) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((var_9), (var_6)))) : (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_2])), (var_3)))))) : (((((/* implicit */int) max((((/* implicit */short) arr_7 [i_0])), (var_10)))) * (max((((/* implicit */int) var_1)), (arr_3 [i_0] [i_0] [i_0])))))));
            var_18 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 4] [i_2])) ? (arr_0 [i_2] [i_0]) : (((/* implicit */int) arr_7 [i_0]))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_2] [i_0]) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_3)))));
            var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 + 3] [i_2 - 1])))))));
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((int) ((unsigned char) arr_2 [i_0] [i_2]))));
        }
    }
    for (int i_3 = 4; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) var_2)))))));
        var_21 = ((/* implicit */long long int) ((12919803764734308049ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87)))));
        var_22 ^= (!(((/* implicit */_Bool) (-(arr_3 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4])))));
        var_23 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (var_12)))) ? ((-(((/* implicit */int) arr_6 [i_3 + 2] [i_3 - 4])))) : (max((var_8), (((/* implicit */int) var_9))))))));
    }
    for (int i_4 = 4; i_4 < 18; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (int i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_23 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_1 [i_6])) > (max((((/* implicit */int) arr_15 [i_4] [i_5])), (var_8))))));
                        var_24 = max((((/* implicit */unsigned int) min((((/* implicit */short) var_5)), (((short) arr_3 [i_6] [i_6] [i_7]))))), (((((_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (var_12)))))));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((short) ((arr_20 [i_5]) / (((/* implicit */int) arr_2 [(unsigned char)2] [i_6]))))))));
                        var_25 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_15 [i_4 - 2] [i_6 - 1])))), ((!(((/* implicit */_Bool) arr_15 [i_4 - 4] [i_6 + 3]))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) var_6)), (arr_22 [i_4] [i_4] [i_5] [i_4] [i_7] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_19 [i_4 - 2] [i_4 - 2] [i_6]))))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_20 [i_4 - 1]) - (((/* implicit */int) arr_1 [(unsigned char)4]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (max((arr_4 [i_4] [i_4]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4] [i_4]))))))))))));
        arr_25 [i_4] &= var_3;
        arr_26 [i_4] [i_4 + 3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_13 [i_4]))) ? (((/* implicit */int) arr_12 [i_4 - 1])) : (((/* implicit */int) ((unsigned short) var_2))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 - 4])) || (arr_7 [i_4 - 2]))))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    {
                        arr_35 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_8] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) arr_13 [i_4 + 2]))), (max((arr_16 [i_4 + 3] [i_4 + 3] [i_4 + 1]), (arr_16 [i_4 + 1] [i_4 + 1] [i_4 - 1])))));
                        arr_36 [i_4] [i_8] [i_4] [i_10] [i_8] [i_4 + 1] = ((/* implicit */unsigned int) arr_3 [i_8] [i_4] [i_8]);
                        var_28 = ((/* implicit */int) min((var_28), (max((((((/* implicit */_Bool) arr_31 [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_8]))))) : (((/* implicit */int) arr_11 [i_10])))), ((-(((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 1]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_11 = 3; i_11 < 15; i_11 += 4) 
    {
        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_18 [i_11])))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_11] [i_11 - 1])) <= (((/* implicit */int) var_2)))))))) : ((~(max((arr_4 [i_11] [i_11]), (((/* implicit */unsigned int) var_4))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_13 = 2; i_13 < 14; i_13 += 4) /* same iter space */
            {
                arr_45 [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) ((arr_20 [i_13 - 1]) & (arr_20 [i_13 - 2])));
                var_30 = ((/* implicit */unsigned long long int) var_12);
                arr_46 [i_13] = (~(arr_14 [i_11 + 2] [i_13 + 2]));
                var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_11]))));
                arr_47 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) var_12)) + (var_11)))));
            }
            for (unsigned int i_14 = 2; i_14 < 14; i_14 += 4) /* same iter space */
            {
                arr_50 [i_11] [i_11] [i_14] [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_12] [i_14])) & (arr_0 [i_12] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) arr_15 [i_11] [i_11])) ? (arr_22 [i_11] [i_11] [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) arr_48 [i_11] [i_12] [i_12]))))));
                arr_51 [i_14] [i_12] [i_11] = ((/* implicit */short) ((unsigned long long int) ((int) arr_41 [i_11] [i_11] [i_14] [i_11])));
                arr_52 [i_14] [i_11] [i_11] &= ((unsigned long long int) var_12);
            }
            for (unsigned int i_15 = 2; i_15 < 14; i_15 += 4) /* same iter space */
            {
                arr_55 [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12919803764734308027ULL)) ? (1014603718127765378LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (0U) : (((/* implicit */unsigned int) -62742991))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) arr_60 [i_16] [i_15 - 2] [i_11 + 2] [i_11] [i_11]);
                            var_33 = ((/* implicit */unsigned long long int) (-(arr_3 [i_15] [i_11] [i_15])));
                            arr_61 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_42 [i_11] [i_11] [i_15] [i_15]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_15] [i_15]))) : (var_0)))) <= (((unsigned long long int) var_11))));
                            arr_62 [i_11] [i_11] [i_15] [i_16] [i_16] = (+(((((/* implicit */_Bool) arr_22 [i_11] [i_12] [i_15] [i_16] [i_16] [i_17])) ? (arr_20 [i_17]) : (((/* implicit */int) arr_1 [i_15])))));
                            var_34 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_11 - 2] [1] [i_15 + 3])) ^ (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_54 [i_12] [i_12] [i_16]))))));
                        }
                    } 
                } 
                var_35 ^= ((/* implicit */_Bool) ((unsigned char) arr_41 [i_11] [i_11] [i_15 + 3] [i_11]));
            }
            var_36 ^= ((/* implicit */short) ((arr_20 [i_11]) < (arr_20 [i_11])));
            arr_63 [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_27 [i_11] [i_11 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11] [i_11 + 2])))));
            arr_64 [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (arr_29 [i_11 - 1] [i_11 + 2])));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 17; i_19 += 1) 
            {
                {
                    arr_71 [i_19] [i_18] [i_19] = ((/* implicit */int) ((unsigned short) max((((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8)))))));
                    var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [(signed char)8]))) ? (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_12 [i_11 + 2])) + (108))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                }
            } 
        } 
    }
}
