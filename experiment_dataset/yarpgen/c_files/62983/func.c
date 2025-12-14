/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62983
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((var_9) ^ (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */short) var_7);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(var_3))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (var_2)));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_1])) + (arr_4 [(_Bool)1] [(_Bool)1]))) & (((/* implicit */int) arr_5 [i_1]))));
        var_16 ^= ((/* implicit */unsigned long long int) ((arr_2 [i_1]) | (arr_2 [i_1])));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_2 [i_2]))) & (((/* implicit */int) var_4))))), (min((var_9), (var_9)))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(arr_9 [4ULL]))))));
            var_19 -= ((/* implicit */signed char) arr_7 [i_3]);
            var_20 ^= ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_1)))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_17 [i_4] [i_4] [i_2] = ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_4)))))) : (4177263589U));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) arr_11 [i_2]);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2]))) ^ (var_5)))));
            }
            for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 3) 
            {
                var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 - 1] [i_4]))) : (var_5)))));
                var_24 = ((/* implicit */_Bool) var_3);
                var_25 = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) > (((/* implicit */int) arr_1 [i_2])))) ? (17087253049836867170ULL) : (((var_9) ^ (((/* implicit */unsigned long long int) arr_0 [3U]))))));
                arr_24 [(short)8] = ((/* implicit */signed char) (+(var_9)));
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            var_26 ^= ((/* implicit */unsigned char) var_11);
                            var_27 = ((/* implicit */short) arr_14 [i_4 + 1]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            arr_36 [i_10] [(_Bool)1] [i_8] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-(arr_34 [i_2] [i_2] [i_2] [i_8] [i_10] [i_10] [4LL]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12)))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((var_9) <= (((((/* implicit */unsigned long long int) arr_4 [i_8] [i_10])) + (17087253049836867170ULL))))))));
                        }
                        arr_37 [i_8] [i_8] [2U] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (((/* implicit */int) arr_1 [i_7 + 2])) : (((/* implicit */int) arr_15 [i_4] [i_4 + 1]))));
                        var_29 += ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_2])) != (((/* implicit */int) var_1)))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */long long int) arr_21 [i_2]))))) ? (min((((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_25 [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) ((arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) & (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) (-(arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        arr_38 [i_2] [i_2] = ((/* implicit */short) (signed char)5);
        arr_39 [i_2] |= ((/* implicit */unsigned char) (-(var_10)));
    }
    var_31 = ((/* implicit */unsigned long long int) min((var_31), (min((min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_5))))), (((/* implicit */unsigned long long int) var_10))))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) % (var_0)));
}
