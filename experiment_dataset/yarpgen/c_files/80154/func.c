/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80154
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (signed char)-13)), (arr_1 [(unsigned short)20] [(unsigned short)20]))) % (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(unsigned short)1]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(-2147483636)))) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (signed char)-22)))), (((/* implicit */int) (signed char)-13))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                var_19 = ((/* implicit */_Bool) ((9ULL) >> (((((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2])) >> (((arr_5 [i_2] [i_2 + 2] [i_2] [i_2]) + (1555051353)))))));
                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) == (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))) <= (var_14));
                var_21 = ((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_2 - 2]);
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_0] [10ULL]))))));
                arr_11 [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)-10)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))), (arr_8 [i_3 - 1] [i_3 - 1] [i_3])));
            }
        }
        var_22 = 4294967295U;
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))) ^ (arr_8 [i_4] [i_4] [i_4])));
        arr_15 [i_4] = ((/* implicit */unsigned short) (~(((arr_9 [i_4] [i_4]) % (((/* implicit */int) arr_13 [i_4] [i_4]))))));
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_7 [i_5] [i_5] [i_5] [i_5]))));
        var_25 = ((/* implicit */int) min((var_25), (min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-14564)) : (((/* implicit */int) (_Bool)1)))), (((int) (~(((/* implicit */int) (signed char)-46)))))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))) : (arr_4 [i_5] [0U]))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (arr_9 [i_5] [i_5])))))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (signed char)-93)), (var_0))))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_5 [i_6] [(_Bool)1] [(_Bool)1] [i_6]))));
    }
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
}
