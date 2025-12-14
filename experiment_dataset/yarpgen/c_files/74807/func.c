/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74807
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14044412620787625617ULL)) ? (arr_0 [i_0]) : (arr_2 [i_0])))), (((arr_1 [i_0]) ? (10894544927454793156ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))) * (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) ((unsigned char) var_3)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((int) (~(min((arr_0 [i_0]), (((/* implicit */int) var_19)))))));
        var_21 |= ((/* implicit */int) max(((+(min((7552199146254758452ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((int) arr_2 [i_0])) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) 7552199146254758453ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 6; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)192))) ? (min((((((/* implicit */unsigned long long int) var_6)) & (7552199146254758450ULL))), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (~(max((arr_9 [i_2] [i_3] [i_2] [i_5]), (((/* implicit */int) arr_5 [i_5])))))))));
                                var_23 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_4 + 3])))) ? (((/* implicit */int) max((arr_7 [i_4 - 2] [i_1 - 1]), (arr_7 [i_4 - 2] [i_1 - 1])))) : (((/* implicit */int) (unsigned char)242))));
                                var_24 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_10 [(_Bool)0] [i_2] [6ULL] [i_4]))))))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_4 + 4] [i_3])), (arr_16 [i_1] [i_2]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_2])))) & (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [i_2] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)138)) : (arr_2 [i_2])))))) ? ((((((~(((/* implicit */int) (unsigned char)51)))) + (2147483647))) >> (((/* implicit */int) ((var_0) == (((/* implicit */int) arr_16 [i_1 - 1] [i_1]))))))) : ((~((+(((/* implicit */int) var_13))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1] [i_1])) : ((-(((/* implicit */int) arr_8 [i_1]))))));
                        var_27 = ((/* implicit */unsigned short) arr_2 [i_6 + 2]);
                        var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_2] [i_6 - 1] [i_2] [i_2])) ? (arr_12 [i_3] [i_2] [0LL]) : (((/* implicit */int) arr_17 [i_1] [i_2] [(unsigned short)5] [i_1]))));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_1 - 1])))))));
                            arr_23 [i_1] [i_3] [i_3] [i_3] [9ULL] = (_Bool)1;
                            arr_24 [i_1] [i_1] [i_3] [i_6] [i_3] [i_1] [1U] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_1 - 1]));
                            arr_25 [i_7] [i_3] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [8ULL]))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 8; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_1 - 1] [i_2] [i_3] [i_3] [i_6] [i_3] = ((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1 - 1] [i_1 - 1]);
                            arr_30 [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_1 - 1] [i_6 - 1]))));
                            var_30 = ((unsigned long long int) ((int) (unsigned short)240));
                        }
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 3) /* same iter space */
                        {
                            var_31 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_6 - 3] [i_9] [i_2]))));
                            arr_33 [i_2] [i_3] = ((/* implicit */int) (unsigned char)53);
                        }
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_15)) & (216048027367054977ULL))), (((/* implicit */unsigned long long int) (~(arr_12 [i_1] [i_2] [i_3]))))))) ? (((/* implicit */int) min((arr_27 [i_1 - 1] [i_2] [i_3] [i_2] [i_1 - 1]), (arr_27 [(unsigned char)8] [(_Bool)1] [(unsigned char)8] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)94))))) <= (10894544927454793155ULL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 9; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_39 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_20 [i_1] [i_2] [i_3] [i_1] [2] [i_2])))), ((-(((/* implicit */int) var_2)))))))));
                                arr_40 [(signed char)0] [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_10 + 1] &= ((/* implicit */short) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) var_2)), (3672191723100246991LL))), (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_2] [i_10 - 1] [i_11] [i_11])))))));
                                arr_41 [i_1 - 1] [i_3] [i_3] [i_10 - 3] [i_11] = ((/* implicit */short) ((((/* implicit */int) (!(var_4)))) * (((/* implicit */int) (!(arr_36 [i_10 - 2] [i_1 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        arr_45 [7ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_12] [i_12])) ? (var_8) : (((/* implicit */unsigned long long int) arr_42 [i_12] [i_12]))));
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (arr_43 [i_12])));
        var_33 += ((/* implicit */unsigned short) (~((~(var_3)))));
    }
}
