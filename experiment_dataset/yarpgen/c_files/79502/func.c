/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79502
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
    var_14 = ((/* implicit */int) max((((unsigned int) 606041586U)), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 3]))))), (max((arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 3]))))))));
                                var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) ? (max((min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_0)))), (max((arr_6 [i_0] [i_1 + 1] [i_4]), (((/* implicit */long long int) var_7)))))) : ((~(min((((/* implicit */long long int) var_10)), (var_13)))))));
                            }
                        } 
                    } 
                    var_17 = ((unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) > (4885705749333695494LL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                        /* LoopSeq 2 */
                        for (long long int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            arr_17 [i_0] [i_5] [i_2] [i_5] [i_6] = arr_4 [i_5] [i_5] [i_5];
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_16 [i_6] [14LL] [i_6 + 1] [i_6 - 2] [i_6] [i_0])) / (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_12 [i_0]) : (((/* implicit */unsigned int) var_11))))));
                            var_20 = ((unsigned char) var_12);
                            var_21 *= ((/* implicit */unsigned char) (((+(arr_14 [i_0] [i_1] [i_2] [i_5]))) / (((/* implicit */long long int) (+(arr_15 [i_0] [i_0] [i_1 - 3] [i_5] [i_6]))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_21 [16] [i_5] [i_2] [i_5] [8U] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_5] [i_2] [i_1]))))));
                            var_22 *= ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))));
                            var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) && ((!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_7]))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_18 [18LL] [i_1] [18LL] [i_1])))))))));
                        }
                        var_25 ^= ((/* implicit */unsigned char) ((long long int) var_10));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) arr_16 [i_0] [i_0] [i_1] [14] [i_2] [i_0]);
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2])))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [(unsigned char)4] [i_2]))) / (arr_24 [(unsigned char)0])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_2]))) : (arr_1 [i_1 - 1] [i_1])));
                    }
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) /* same iter space */
                    {
                        arr_27 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_12 [i_9]))))) && (((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]))))) && ((!(((/* implicit */_Bool) min((var_13), (arr_2 [i_2] [i_2]))))))));
                        arr_28 [i_0] [i_0] [i_0] [i_9] [i_9] [i_9] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)191)))), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 1]))))));
                    }
                    var_29 ^= ((/* implicit */int) (-((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */long long int) arr_25 [i_0] [i_1 + 1] [i_1 + 1] [18])) / (arr_10 [i_0] [0LL] [i_1] [(unsigned char)2] [i_2])))))));
                    arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((arr_2 [i_2] [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - (((261653423U) * (((/* implicit */unsigned int) 1704046865)))))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_10 = 2; i_10 < 20; i_10 += 2) 
                {
                    for (int i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) ((unsigned int) max((min((3688925710U), (((/* implicit */unsigned int) (unsigned char)191)))), ((~(606041586U))))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0])))))) < (min((var_3), (((/* implicit */long long int) arr_23 [3LL] [6] [i_10] [i_10] [i_12])))))))) != (((long long int) max((var_1), (((/* implicit */unsigned int) arr_1 [i_10 - 1] [i_12])))))));
                                var_32 = ((/* implicit */unsigned char) arr_4 [i_10 + 1] [i_1 + 1] [i_1 - 2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 = max((((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) % (((/* implicit */int) ((((/* implicit */long long int) var_1)) != (var_3))))))), ((-(max((var_3), (((/* implicit */long long int) var_7)))))));
    /* LoopNest 2 */
    for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            {
                var_34 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (arr_26 [i_13] [i_13] [i_13 + 1] [i_14])))) ? (min((((/* implicit */long long int) (unsigned char)150)), (-3046101355107153766LL))) : (min((arr_4 [i_14] [i_14] [i_13]), (((/* implicit */long long int) arr_0 [i_13])))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_39 [i_14]))))), (max((arr_8 [(unsigned char)12] [18] [12LL] [i_14]), (arr_9 [i_13] [i_14] [i_13] [i_14]))))))));
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min(((unsigned char)191), (arr_19 [i_13] [i_14] [i_15] [i_14] [6]))))));
                    var_36 = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) arr_8 [i_13 + 1] [i_13 + 1] [i_14] [i_15]))))))));
                    var_37 &= arr_7 [12] [i_14] [i_15];
                }
            }
        } 
    } 
}
