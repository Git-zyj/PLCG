/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87437
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) max((arr_1 [i_1 - 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) -475228894433983349LL))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_9 [(unsigned char)9] [(signed char)0] [i_0] [7] [i_4] [(signed char)2]);
                                var_15 = max((((((/* implicit */_Bool) arr_1 [i_4 - 3])) ? (((/* implicit */int) arr_1 [i_4 - 2])) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_1 [i_4 + 2]), (arr_1 [i_4 + 2])))));
                                var_16 = 431959205U;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((max((arr_8 [i_1 - 1]), (arr_8 [i_1 - 2]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5] [(unsigned char)6] [3U])) ? (arr_7 [i_5] [i_5 + 2] [i_5 - 3] [3U]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 431959217U)) ? (((/* implicit */unsigned long long int) 3329808062U)) : (7180088859602331604ULL)));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_14 [(short)7]) : (((/* implicit */unsigned long long int) var_5))))) ? (arr_13 [(short)8] [(signed char)10] [i_5 + 1] [i_5 - 3] [i_5 + 2] [i_5 - 3]) : (((/* implicit */unsigned long long int) var_8))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((var_5) < (arr_25 [i_6] [i_8 - 1])));
                        var_22 = ((/* implicit */int) ((((/* implicit */int) arr_24 [i_6] [i_8 - 1] [7ULL] [(_Bool)1] [i_7] [i_6])) != (((/* implicit */int) arr_24 [(unsigned char)15] [i_8 - 1] [i_9] [10ULL] [i_9] [12U]))));
                        arr_26 [i_7] [(short)20] [i_7] [i_7] [(_Bool)1] = arr_23 [i_8 - 1] [i_7] [12LL] [i_6];
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_30 [(_Bool)1] [i_7] [(signed char)0] [i_8 - 1] [3U] = ((/* implicit */unsigned int) 0ULL);
                        var_23 = (!(((((/* implicit */int) var_2)) == (((/* implicit */int) arr_20 [i_6])))));
                    }
                    for (signed char i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        arr_35 [i_6] [21LL] [(_Bool)1] [i_11 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_8 - 1] [i_11 + 3]))));
                        arr_36 [i_11] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_11 - 2])) ? (((((/* implicit */_Bool) var_9)) ? (7ULL) : (((/* implicit */unsigned long long int) arr_33 [i_6] [i_7] [(signed char)5] [(signed char)20] [(unsigned char)16])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [20] [(unsigned char)19] [i_8] [i_11])))))));
                    }
                    arr_37 [4LL] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7])) ? (((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1] [21])) : (((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1] [11ULL]))));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                    var_25 = ((/* implicit */int) arr_21 [i_6] [i_7] [(unsigned char)7]);
                }
            } 
        } 
        arr_38 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)154)) ? ((-(var_8))) : (((/* implicit */int) (unsigned short)64338))));
        arr_39 [i_6] = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned char)3))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
                    arr_47 [i_12] [i_14] [i_14] = ((/* implicit */int) (-(max((arr_2 [11U] [4]), (((/* implicit */unsigned int) arr_12 [(signed char)0] [i_13] [i_13] [i_13] [i_13] [11U]))))));
                }
                for (unsigned int i_15 = 1; i_15 < 10; i_15 += 4) 
                {
                    arr_50 [i_12] [i_12] [i_12] [(signed char)1] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_2)) ? (arr_48 [i_12] [4] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_12]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)2)))))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), ((+(15528047363064096754ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 21U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21)))))));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) min((arr_6 [i_13] [(signed char)6] [i_13] [i_13]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((33702437U) % (((/* implicit */unsigned int) 319070955))))))))));
                            var_29 = ((/* implicit */signed char) (+(-1332622280)));
                            var_30 = ((/* implicit */signed char) (+(((/* implicit */int) ((max((((/* implicit */unsigned int) (_Bool)1)), (431959205U))) != (max((arr_55 [i_17] [1ULL] [i_16 - 1] [i_15 - 1] [i_13] [i_12]), (((/* implicit */unsigned int) arr_31 [i_12] [i_13] [i_15 + 1] [i_16 + 2])))))))));
                            var_31 = ((unsigned char) arr_0 [i_15]);
                        }
                        var_32 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) 1086171972)), (arr_41 [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_17 [10])))));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_48 [i_18] [0ULL] [i_12]))))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((17456453397146801600ULL), (9255854957452396619ULL))), (((/* implicit */unsigned long long int) arr_31 [(unsigned char)20] [i_13] [i_13] [i_13]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_12] [i_12] [1U] [(unsigned char)1] [9ULL]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_51 [i_12] [i_13] [i_13] [i_13]))))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_8 [i_19])) ? (arr_16 [(short)8]) : (arr_52 [i_12] [i_13] [i_13] [i_12] [i_18] [(short)7])))))) : (min((((/* implicit */long long int) (signed char)-56)), (7637430608411047038LL)))));
                            var_35 = ((/* implicit */_Bool) (+((+(arr_29 [(_Bool)1] [i_13] [i_18] [3] [i_18] [15ULL])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
