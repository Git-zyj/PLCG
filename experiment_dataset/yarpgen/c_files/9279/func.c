/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9279
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1])) ^ ((~(-2734305517359044270LL)))));
        var_13 += ((/* implicit */unsigned char) (((~(4294967295U))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) (~(arr_0 [i_1])));
            var_14 += ((/* implicit */unsigned char) (~((+((~(3839775660944640883ULL)))))));
        }
        for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)95))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_16 += ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3] [10LL] [10LL] [i_4])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 1] [i_3] [i_0 + 1] [i_3] [i_4 + 2])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))));
                        arr_14 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)77), (((/* implicit */unsigned char) (signed char)-101))))) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0 - 1] [0ULL] [(unsigned char)6] [i_4])), (arr_12 [(unsigned char)11] [i_0 - 1] [i_2 - 2] [i_3] [i_4 + 1] [i_4]))))));
                        arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [(signed char)2] [10] = ((/* implicit */int) (~(((unsigned long long int) (signed char)-101))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned short)0] [i_3])) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [10U] [(signed char)13])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_3] [i_4 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))), (((int) arr_10 [i_0] [i_0] [i_0] [i_4])))))));
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_7 [i_0 - 1] [i_0])))) == (14606968412764910752ULL))))));
        }
    }
    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max((min((((/* implicit */int) max((arr_17 [i_5 + 2]), (arr_17 [i_5])))), ((~(((/* implicit */int) arr_17 [i_5])))))), (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)108))))))));
        arr_19 [i_5] = ((signed char) max((((((/* implicit */int) arr_18 [i_5 + 3])) ^ (((/* implicit */int) arr_18 [i_5])))), (((/* implicit */int) min((arr_17 [i_5]), (arr_17 [i_5]))))));
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned char) max((min((((unsigned int) arr_21 [i_6])), (((/* implicit */unsigned int) arr_6 [i_6])))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_12 [13ULL] [i_6] [(short)13] [(short)13] [2] [i_6]))))))));
        var_19 += min((((/* implicit */int) arr_6 [i_6])), (max((((/* implicit */int) ((unsigned char) (unsigned char)255))), (max((arr_1 [8LL] [8LL]), (((/* implicit */int) (unsigned char)255)))))));
        var_20 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)113))));
    }
    for (short i_7 = 2; i_7 < 20; i_7 += 2) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */int) ((unsigned long long int) max((max((((/* implicit */unsigned long long int) (signed char)-101)), (3839775660944640883ULL))), (((/* implicit */unsigned long long int) (+(arr_25 [4U] [4U])))))));
        /* LoopSeq 3 */
        for (signed char i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            var_21 = ((/* implicit */signed char) (-(min((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [(short)0]))) - (arr_28 [i_8]))), (((/* implicit */long long int) arr_25 [i_7] [i_7]))))));
            arr_31 [i_8] [i_7] [7] = (+(min((((/* implicit */int) (signed char)113)), (max((((/* implicit */int) (signed char)100)), (arr_26 [i_7 - 1]))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_41 [i_7] [i_8] [i_8] [i_7] [i_10] [6ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_8])) || (((/* implicit */_Bool) 2147483647))))), (749308116U)));
                            var_22 = ((/* implicit */signed char) (~((((~(-6469583809877445521LL))) << (((min((((/* implicit */unsigned int) arr_30 [(unsigned short)20] [i_9])), (arr_25 [(unsigned char)18] [(unsigned char)18]))) - (1763876514U)))))));
                            var_23 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_35 [i_7] [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7]))))));
                            var_24 += ((/* implicit */unsigned int) 8346001899706431801ULL);
                        }
                    } 
                } 
            } 
            arr_42 [(signed char)10] = ((/* implicit */int) arr_33 [i_7] [i_7]);
            arr_43 [i_7] [(short)18] [i_7] = ((/* implicit */unsigned int) (~(((int) (+(((/* implicit */int) arr_38 [i_7] [i_7] [i_8 + 2] [i_7] [11U])))))));
        }
        for (unsigned short i_12 = 2; i_12 < 20; i_12 += 4) /* same iter space */
        {
            var_25 += ((/* implicit */long long int) (+((-(max((((/* implicit */int) arr_33 [i_7] [i_7])), (1624871084)))))));
            arr_47 [18ULL] [i_7] [i_12] = ((/* implicit */int) 14606968412764910733ULL);
        }
        for (unsigned short i_13 = 2; i_13 < 20; i_13 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_51 [i_7]))));
            arr_52 [i_7] [i_13] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) max(((signed char)105), ((signed char)119)))), (((((/* implicit */_Bool) arr_46 [i_7] [i_7 + 1])) ? (arr_28 [17]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))))), (((/* implicit */long long int) ((((((((/* implicit */_Bool) 8657688194895752532LL)) ? (((/* implicit */int) arr_35 [(unsigned char)12] [i_13] [i_13 + 1] [i_13] [i_13] [i_7])) : (((/* implicit */int) (signed char)-109)))) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), (arr_46 [i_7] [i_7])))) - (127))))))));
        }
    }
    var_27 = ((/* implicit */short) var_6);
}
