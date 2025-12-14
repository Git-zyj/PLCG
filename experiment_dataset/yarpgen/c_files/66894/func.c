/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66894
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
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_15);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = (~(((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_1] [i_0]))) ? (((((/* implicit */_Bool) var_8)) ? (-342786792) : (((/* implicit */int) (short)-20467)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [(_Bool)1] [i_0]))) < (arr_2 [i_1])))))));
                    var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32753)) % (((((/* implicit */_Bool) (short)20467)) ? (arr_5 [i_0] [(signed char)19] [i_2]) : (((/* implicit */int) (unsigned short)12963))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (max((var_6), (arr_6 [i_0] [i_1])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [2] [4] [i_1] [i_1])))) > (max((((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_2])), (arr_2 [i_2]))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)52590), (arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) arr_8 [i_0] [i_1] [i_0] [i_2]))))) : (((arr_2 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1])))))));
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned char) ((unsigned short) min((arr_1 [16]), (((/* implicit */unsigned long long int) (unsigned short)1016)))));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] = ((/* implicit */unsigned short) max((arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) -111357763)) * (var_5)))) > (((long long int) arr_19 [i_3] [i_4] [i_3] [i_6] [i_6])))))));
                        var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 3; i_9 < 11; i_9 += 4) 
                    {
                        arr_29 [i_3] [i_7] [i_3] [9LL] [i_8] = ((/* implicit */unsigned int) ((signed char) arr_7 [i_3] [i_7] [i_3] [4U]));
                        var_23 *= ((/* implicit */signed char) (~((~(-979147206126359474LL)))));
                    }
                    arr_30 [i_3] [(unsigned short)5] [i_8] = ((/* implicit */long long int) ((unsigned char) (((!(((/* implicit */_Bool) 134217727U)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_15)))));
                    arr_31 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((unsigned char) arr_14 [i_3]))))), ((-(((int) var_9))))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) var_14);
        /* LoopSeq 1 */
        for (unsigned short i_10 = 2; i_10 < 11; i_10 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (short)-32761);
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_10 + 1] [i_10 + 1] [20LL] [i_10 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_10 + 1] [i_10 + 1] [(unsigned short)6] [i_10 - 1]))))) || (((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)52566)))), ((~(2147483647)))))))))));
            arr_34 [i_3] [5] [i_3] = ((unsigned short) arr_15 [i_3]);
            arr_35 [i_3] [i_10 - 2] = ((/* implicit */unsigned int) 880805520);
        }
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) (unsigned short)52566))) : ((-((-(((/* implicit */int) arr_19 [1ULL] [(signed char)6] [i_3] [i_3] [7]))))))));
    }
    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        var_28 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_11] [i_11]))))) < ((~(arr_1 [0LL])))))) > (arr_5 [i_11] [i_11] [(unsigned short)19])));
        arr_40 [0LL] [10ULL] = ((/* implicit */signed char) ((var_7) | (((/* implicit */unsigned long long int) (~(arr_39 [i_11] [i_11]))))));
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23299)) ? (var_16) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_5))))))))));
}
