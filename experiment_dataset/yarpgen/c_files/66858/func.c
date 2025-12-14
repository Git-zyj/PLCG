/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66858
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned short)13] [i_0] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))), (min((((/* implicit */unsigned long long int) (signed char)-2)), (1311687521909115054ULL))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 1]), (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0]))))))));
        var_16 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0 - 1]));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (-(min((arr_1 [i_1]), (((/* implicit */unsigned int) 520192))))));
        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((1311687521909115054ULL), (18446744073709551604ULL)))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_2])))) ? ((+(-5903968000097319340LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-121)))))));
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            arr_12 [i_2] [(unsigned short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1311687521909115054ULL)) ? (((int) arr_5 [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_2] [i_2]))));
            arr_13 [i_2] [i_2] [i_3 + 2] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_11 [i_2] [i_3 - 1] [4U]), (arr_11 [i_2] [i_3 - 1] [i_3])))), (((((/* implicit */_Bool) arr_11 [i_2] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_3]))))));
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 13; i_4 += 4) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (unsigned short)40862))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_21 = ((signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_9))));
                            arr_24 [i_2] [i_4] [i_4] [i_5] [i_2] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))));
                            var_22 = ((/* implicit */short) (-(arr_14 [i_7 + 1] [i_4 - 4])));
                            arr_25 [i_2] [i_2] = ((/* implicit */long long int) ((signed char) arr_9 [i_2] [i_7]));
                        }
                    } 
                } 
                arr_26 [i_2] [(unsigned short)5] [10U] = (((!(((/* implicit */_Bool) arr_5 [i_2] [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12097)) || (((/* implicit */_Bool) arr_14 [i_2] [i_2]))))));
            }
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_23 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_0))) << (((((arr_14 [i_2] [i_2]) + (2124696447))) - (21)))));
                arr_29 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) arr_17 [i_2] [i_4])) : (-7719897602653553350LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((4294967283U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))))));
            }
        }
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [(signed char)6] [i_2])), (max((((/* implicit */unsigned int) arr_4 [4LL])), (2154785117U)))))) ? ((((!(((/* implicit */_Bool) 4294967295U)))) ? (min((((/* implicit */unsigned int) (unsigned short)9319)), (2729253454U))) : (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_7 [0])))))) >= (((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [3LL] [i_2] [3LL] [i_2]))) : (arr_16 [i_2])))))))));
        var_25 = ((/* implicit */_Bool) arr_16 [i_2]);
    }
    var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)61147))));
    var_27 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (signed char i_9 = 3; i_9 < 19; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            {
                arr_36 [i_9] [(signed char)20] [i_10] = ((/* implicit */_Bool) (signed char)56);
                var_28 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((long long int) var_12))) && ((_Bool)1))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((signed char) min((min(((unsigned short)51023), (((/* implicit */unsigned short) (short)0)))), (arr_34 [i_9] [i_9])))))));
                var_30 = ((/* implicit */unsigned char) ((unsigned short) arr_32 [i_9]));
            }
        } 
    } 
}
