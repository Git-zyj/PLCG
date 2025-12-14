/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99912
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
    var_15 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_2)))), (min((var_13), (((/* implicit */unsigned int) (unsigned short)12725))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((-(var_2))) ^ (((/* implicit */unsigned long long int) var_8))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_17 [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) 49152)), (((((/* implicit */_Bool) arr_12 [i_2])) ? (((var_10) ? (((/* implicit */long long int) 3456453461U)) : (-10709470454987717LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-3416)))))));
                            arr_18 [i_2] = ((/* implicit */long long int) 4294967295U);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [4ULL] [(_Bool)1] [i_3] [(unsigned char)5] [i_6] [i_2] = ((/* implicit */int) (((+(arr_12 [i_2]))) >= (max((var_0), (((/* implicit */int) arr_0 [i_1 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_25 [i_1] [2ULL] [i_2 + 2] [i_2] [7LL] [9LL] = ((/* implicit */unsigned long long int) max(((+((+(((/* implicit */int) (unsigned short)55407)))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) 49152)))), (((881687736434318731ULL) != (18127359474475173828ULL))))))));
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                    }
                    arr_26 [i_3] [i_2] [6ULL] [i_6] [i_2] [i_6] = ((/* implicit */short) ((unsigned short) max((max((((/* implicit */int) var_11)), (var_5))), ((-(((/* implicit */int) (unsigned char)7)))))));
                    arr_27 [i_2] [10U] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)5)), (847930925U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1562882363)))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((((/* implicit */unsigned int) var_5)) - (arr_23 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [(signed char)9]))), (((/* implicit */unsigned int) -49153)))))));
                }
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((2342773981909325607LL), (((/* implicit */long long int) -2068986218)))))));
            }
            var_20 = ((/* implicit */unsigned long long int) var_10);
        }
        var_21 = ((/* implicit */long long int) (unsigned short)56361);
    }
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    arr_35 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) max((var_13), (((/* implicit */unsigned int) (unsigned char)247))))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), ((unsigned short)10448)))) ? (873387370U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [9LL])))))))))));
                }
            } 
        } 
    } 
}
