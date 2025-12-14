/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68964
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
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */int) (signed char)100)) <= (arr_0 [i_0] [i_0]))))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) ((unsigned short) (-(arr_1 [(short)5])))))));
        arr_2 [(signed char)3] = ((/* implicit */unsigned int) max((((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) var_4)))) + (2147483647))) >> ((((-(((/* implicit */int) (signed char)100)))) + (129))))), (((((/* implicit */_Bool) ((8555638539586931732ULL) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))) : (arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned long long int) ((unsigned char) ((min((arr_1 [i_1]), (((/* implicit */int) arr_3 [(unsigned short)6])))) >= (max((arr_5 [(_Bool)1]), (arr_4 [(unsigned short)4] [i_1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_19 = (~(arr_0 [1ULL] [i_2 + 1]));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [4LL])) ? (((/* implicit */int) arr_8 [i_1] [0LL])) : (((/* implicit */int) arr_8 [i_1] [2LL])))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_1]));
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-101))));
        }
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */int) arr_9 [i_1] [i_1]))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (3748382762U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (1786771276U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))) : (min((min((((/* implicit */long long int) (signed char)101)), (-8790315801481210037LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_1]))))))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */int) arr_3 [(unsigned short)0]);
        var_25 = ((/* implicit */unsigned short) ((signed char) ((short) arr_12 [i_4] [i_4] [i_4])));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_4] [i_4])))) ? (((/* implicit */int) min((arr_9 [i_4] [i_4]), (arr_9 [i_4] [i_4])))) : (((/* implicit */int) arr_3 [i_4]))))) ? (max((max((var_1), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)78))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_13 [i_4])))))))));
            var_26 = arr_9 [i_4] [i_4];
            arr_18 [i_4] = ((/* implicit */long long int) arr_1 [i_4]);
        }
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_4])) : (((/* implicit */int) (signed char)78))))))) ? (((/* implicit */int) ((arr_4 [i_4] [i_6 + 2]) > (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_0))))))) : (((/* implicit */int) ((10519066951714785388ULL) > (((/* implicit */unsigned long long int) 1786771276U)))))));
            arr_23 [9ULL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_4] [i_4]), (((/* implicit */int) arr_9 [i_4] [i_4]))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) arr_8 [i_6 + 4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))) ^ ((~(((/* implicit */int) arr_19 [i_4] [i_6 + 4] [i_4]))))))) : (arr_15 [i_4] [i_4])));
        }
        var_28 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) - (611460484U));
        arr_24 [i_4] = ((/* implicit */short) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((unsigned long long int) 1786771276U))))))));
    }
    var_29 = ((/* implicit */_Bool) 10519066951714785402ULL);
    var_30 &= ((/* implicit */unsigned int) (-(min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)10714)) : (((/* implicit */int) var_8))))))));
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_9))))) : (((/* implicit */int) var_5)))))));
}
