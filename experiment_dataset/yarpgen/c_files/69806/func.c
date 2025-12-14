/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69806
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_4)))))) ? (((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */int) (unsigned char)9)) - (((/* implicit */int) var_1)))))) : (((((/* implicit */int) ((unsigned char) 1620640919938833868ULL))) << (((((-6415012326943558121LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (6415012326943558138LL)))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) arr_0 [i_1]);
            var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2])))) > (((arr_2 [i_1] [i_1] [i_1 - 1]) * (arr_2 [i_1 + 3] [0ULL] [i_1 - 4]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((_Bool) (signed char)115))));
                var_20 = ((/* implicit */signed char) ((145911756U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
            }
            for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) >> (((((/* implicit */int) var_6)) - (189)))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_1 - 4] [5U] [i_3] [i_3 - 1])), (((int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                arr_10 [i_0] [8ULL] [i_3 + 2] = ((/* implicit */int) max((var_13), (((/* implicit */long long int) arr_9 [i_1 - 2] [(unsigned char)6] [i_1 - 4] [i_1 - 4]))));
            }
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    arr_21 [i_0] [i_4 - 2] [i_5] [i_6] = ((/* implicit */unsigned char) ((arr_2 [i_4 - 2] [i_5 + 2] [i_5 + 3]) == (arr_2 [i_4 - 1] [i_5 + 2] [i_5 - 1])));
                    arr_22 [i_0] [(short)8] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_18 [i_4 - 1] [i_4 - 2] [i_5 + 3])));
                }
                var_22 = ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 2])));
                var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_0] [i_4] [i_4] [i_5 + 2]))));
            }
            for (unsigned short i_7 = 3; i_7 < 10; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_8 = 3; i_8 < 12; i_8 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_7 - 2])) & (((/* implicit */int) arr_25 [i_7 - 1]))));
                    arr_28 [i_7] [i_7] [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)24657)))) != (arr_8 [i_7 + 3])));
                    var_25 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_25 [i_0]))))));
                }
                for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_4 - 1] [i_7 + 3] [i_7] [i_7 - 1])) ? (arr_29 [i_4 + 1] [i_7 - 1] [i_7] [i_7 - 1]) : (arr_29 [i_4 + 1] [i_7 + 1] [i_7] [i_7 - 3])));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned char) arr_12 [i_4 + 1] [i_7 - 1])))));
                    arr_33 [i_0] [i_0] [i_4] [i_7] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-32764))));
                }
                arr_34 [i_7] [i_0] [i_4 + 2] [i_7] = ((/* implicit */_Bool) (~(arr_2 [i_4 + 2] [i_4 - 2] [i_7 + 1])));
            }
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                arr_39 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10])) ? (16826103153770717748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 1] [i_10 + 2] [i_10 - 1])))));
                var_28 += ((/* implicit */signed char) (-(((arr_13 [i_10 + 1]) - (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_10] [i_10 + 1] [i_10 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_10] [i_10] [i_10 + 1] [i_10 + 1]))));
                    var_30 = ((/* implicit */unsigned short) (_Bool)1);
                }
            }
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_4 + 2] [i_4 + 2])) : (2551484725673341962ULL)));
        }
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (9377047664703238479ULL)))))));
            var_33 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)66));
        }
    }
    var_34 = (!(((/* implicit */_Bool) ((unsigned long long int) var_8))));
}
