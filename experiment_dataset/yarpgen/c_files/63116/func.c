/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63116
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
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))));
        var_13 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */int) (signed char)-39))))) % (((arr_1 [(signed char)14] [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)96)) : (arr_0 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_4)))))) && (((((/* implicit */unsigned long long int) -1LL)) == (arr_1 [i_0] [i_0])))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1 - 2] = ((/* implicit */long long int) var_8);
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])) || (((var_5) != (((/* implicit */long long int) var_0))))));
        arr_9 [(signed char)19] = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
        arr_10 [i_1 - 2] [i_1] = ((/* implicit */long long int) ((arr_2 [i_1 - 1]) * (arr_2 [i_1 - 1])));
        arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((unsigned int) arr_6 [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170)))));
    }
    for (signed char i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_16 [i_2] [i_2] = ((/* implicit */signed char) 6523271558988851925LL);
        var_16 = ((/* implicit */int) arr_12 [i_2 + 1]);
        var_17 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) != (((/* implicit */int) var_2))))))), (((((/* implicit */int) var_3)) / ((-(var_0)))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_25 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))) : (var_4))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (signed char)-36)) : (var_1))))))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_4] [i_3])))) ? (((/* implicit */int) ((var_1) == (((/* implicit */int) var_10))))) : (max((((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1])), (arr_23 [i_2 - 2] [i_3] [i_4] [i_5]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_2 - 2]) | (arr_1 [i_2 + 1] [i_3])))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) arr_17 [i_2 - 2]);
            var_20 = ((/* implicit */unsigned int) max((var_20), (min((((/* implicit */unsigned int) ((var_4) != (((/* implicit */long long int) var_1))))), ((~(((2182261365U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
        }
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) var_6);
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-297890061) : (((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */int) arr_27 [i_6 - 2] [i_6 - 2])) : (var_1)));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned char)192))));
    }
    for (signed char i_7 = 2; i_7 < 21; i_7 += 3) /* same iter space */
    {
        arr_32 [i_7] = ((/* implicit */int) arr_31 [i_7 - 1]);
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_24 -= (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))) : (arr_2 [i_10])))) || (((/* implicit */_Bool) arr_24 [i_7]))))));
                        arr_40 [i_8] [i_8] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_12 [i_7]))))) ? (var_0) : (((/* implicit */int) var_2)))) % (((var_0) + ((~(((/* implicit */int) var_3))))))));
                        arr_41 [i_8] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_6)) == (((/* implicit */int) (signed char)39)))) ? (min((((/* implicit */unsigned long long int) arr_30 [i_9] [i_7])), (arr_18 [i_7] [i_8] [i_10]))) : (((/* implicit */unsigned long long int) ((var_5) % (var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((/* implicit */int) arr_26 [(short)13])) - (23204)))))) ? (var_5) : (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_8] [i_7]))))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_3 [i_7 + 1])))), (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_7] [i_7])) : (((/* implicit */int) arr_7 [i_7] [i_7]))))) > (((((/* implicit */_Bool) (unsigned char)91)) ? (var_7) : (((/* implicit */long long int) var_1)))))))));
    }
}
