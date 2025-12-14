/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74509
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_19 *= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_0 [i_0] [(signed char)0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) - ((~(((/* implicit */int) max((arr_0 [i_0] [(signed char)6]), (((/* implicit */unsigned short) arr_2 [i_0])))))))));
        var_20 = max(((signed char)-101), ((signed char)100));
        var_21 = ((/* implicit */signed char) max((max((arr_0 [(signed char)7] [i_0]), (arr_0 [i_0] [i_0]))), (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min(((-(((long long int) arr_4 [i_1])))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1])) > (((/* implicit */int) arr_7 [i_1]))))))))));
        var_23 = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
        var_24 *= ((/* implicit */signed char) arr_5 [i_1] [i_1]);
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_2] [i_2])), (arr_4 [3LL])))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_1 [i_2] [(unsigned char)10])))), (((/* implicit */int) max((arr_0 [i_2] [i_2]), (((/* implicit */unsigned short) arr_7 [i_2])))))));
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (((((/* implicit */_Bool) arr_6 [(unsigned char)2] [(signed char)7])) ? (arr_5 [7] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [13LL] [i_2]))))))))));
        arr_10 [(unsigned char)2] = arr_5 [(unsigned char)4] [i_2];
    }
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))) : (max((5610559543939497585LL), (((/* implicit */long long int) (unsigned char)124)))))), (((/* implicit */long long int) max((max((arr_12 [i_3 - 1]), (arr_11 [i_3]))), (min((arr_11 [i_3]), (arr_12 [i_3]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 4; i_4 < 16; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-101)) ? (8797162393909447727LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_3 + 1]))))), (((long long int) (unsigned char)179))));
                        arr_19 [18U] [i_3] [i_4] [(signed char)8] [i_5] [(signed char)1] = ((/* implicit */unsigned short) max((max((-7727671928181691838LL), (((/* implicit */long long int) (unsigned char)132)))), (((/* implicit */long long int) max((arr_14 [i_3 + 1] [i_3 + 1]), (arr_14 [i_3 - 1] [i_3 + 1]))))));
                        arr_20 [i_4] [(unsigned short)15] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 4])) ? (((/* implicit */int) arr_12 [i_4 - 2])) : (((/* implicit */int) arr_12 [i_4 - 3]))))) ? (max((((/* implicit */long long int) arr_12 [i_3 + 1])), (max((arr_15 [i_3] [i_6] [i_5]), (((/* implicit */long long int) arr_12 [i_3])))))) : (((long long int) arr_12 [i_4 - 3]))));
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1]))))) ? ((~(((((/* implicit */_Bool) arr_13 [(signed char)15])) ? (arr_18 [13LL] [i_6]) : (arr_18 [(signed char)13] [14LL]))))) : (((((/* implicit */_Bool) arr_13 [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3 + 1]))))));
                        var_30 = ((/* implicit */unsigned int) max((min((arr_17 [i_4 + 2] [i_4 - 4]), (arr_17 [i_4 + 2] [i_4 - 4]))), (min((arr_17 [i_4 + 2] [i_4 - 4]), (arr_17 [i_4 + 2] [i_4 - 4])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                for (long long int i_8 = 4; i_8 < 17; i_8 += 4) 
                {
                    {
                        arr_26 [17] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-8797162393909447741LL), (7727671928181691814LL))))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            var_31 = max((((((/* implicit */_Bool) arr_27 [i_8 - 4] [11LL] [8U] [i_8] [13LL] [i_8 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 1] [i_8 - 2]))) : (((unsigned int) arr_13 [i_3 - 1])))), (((/* implicit */unsigned int) arr_28 [i_8] [i_8 - 2] [i_8 + 2] [i_8] [i_8 - 3])));
                            arr_29 [i_3] [i_3 - 1] [(signed char)9] [i_3 + 1] [i_3] [i_3 - 1] [i_3] &= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_25 [i_9 + 1] [i_9] [(signed char)15] [i_9] [i_9 + 1] [i_9]))), (max((((/* implicit */int) min(((unsigned short)22010), ((unsigned short)22012)))), (((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_24 [i_3 + 1] [i_3] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_28 [i_3] [i_4 - 2] [i_7 + 2] [i_8] [i_9]))))))));
                            arr_30 [i_3] [i_3] [i_3 - 1] [(signed char)4] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_23 [i_9] [4U] [i_4])), (arr_24 [i_4] [i_4] [i_8] [i_9])))), (max((arr_15 [i_3] [i_8] [i_9]), (((/* implicit */long long int) arr_12 [i_7]))))))) ? ((~(6579048307969838035LL))) : (((/* implicit */long long int) min((arr_18 [i_7 + 3] [i_9 + 1]), ((-(((/* implicit */int) arr_25 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3])))))))));
                            arr_31 [i_3] [i_3] = ((/* implicit */signed char) ((max((-7727671928181691846LL), (((/* implicit */long long int) (signed char)-8)))) < (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-8797162393909447727LL) : (-4474715471720086241LL))), (((/* implicit */long long int) ((unsigned int) arr_25 [i_9] [(signed char)2] [i_7 - 1] [i_4 - 4] [i_3] [i_3])))))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_32 *= arr_23 [i_3] [(unsigned char)13] [i_3];
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_23 [i_7 - 1] [i_8] [i_8 - 1]))));
                        }
                        for (signed char i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            arr_36 [i_7 - 1] [i_11 - 1] = ((/* implicit */long long int) min((((/* implicit */int) min((arr_25 [i_3 + 1] [i_4 - 4] [i_4] [i_7] [i_8] [i_11 - 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_7 + 1] [(unsigned char)10] [i_7 + 1] [i_4] [i_3])))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [17])))))))));
                            var_34 = ((/* implicit */signed char) (~((+(max((((/* implicit */int) arr_14 [i_3] [i_3 + 1])), (arr_22 [(signed char)0] [i_7] [(signed char)7])))))));
                        }
                    }
                } 
            } 
            arr_37 [i_3 - 1] [i_3] = max((((((/* implicit */_Bool) min((arr_33 [i_3]), (((/* implicit */long long int) arr_25 [i_3] [6LL] [11LL] [i_3 - 1] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_15 [(signed char)13] [i_4 + 3] [i_3])) ? (arr_21 [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 1]))))) : (max((((/* implicit */long long int) arr_14 [i_4] [i_3 - 1])), (arr_35 [i_3 - 1] [(signed char)9] [i_4 + 1]))))), (((/* implicit */long long int) max((1502396208), (((/* implicit */int) (unsigned char)170))))));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) max((max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (1580534156U)))))), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_34 [i_3] [i_4])))), (arr_16 [i_3] [i_3 - 1] [(unsigned char)9] [i_3])))))))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            arr_42 [i_3] = (+(arr_35 [i_12] [i_12] [i_3 - 1]));
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(arr_16 [(signed char)1] [13LL] [i_3 - 1] [i_3 - 1]))))));
            arr_43 [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_33 [i_12])))));
            arr_44 [i_12] = ((/* implicit */signed char) arr_27 [i_3 + 1] [i_3] [6LL] [i_3 - 1] [i_3] [i_3 + 1]);
            arr_45 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)56625)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (-8890828977875441883LL)));
        }
    }
    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) (unsigned char)129)), ((-2147483647 - 1))))));
        var_38 *= ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_48 [i_13 + 1]), (arr_48 [i_13 + 1])))), (((((/* implicit */_Bool) arr_35 [i_13 + 1] [i_13 + 1] [i_13])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_32 [i_13])), (arr_18 [i_13] [(signed char)9])))) : (arr_33 [i_13 + 1])))));
    }
}
