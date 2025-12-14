/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71442
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
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-11935))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) var_4)), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)31829)) - (31802)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (+(-283580720)))), ((~(18410715276690587648ULL))))), ((+(min((((/* implicit */unsigned long long int) arr_0 [(short)8])), (arr_2 [0])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [(_Bool)1] [i_1] [i_2 + 1] [i_2] [i_3] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) >> (((/* implicit */int) ((((/* implicit */_Bool) (-(-283580738)))) || (((/* implicit */_Bool) (short)-3426)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_23 &= min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_4 [i_4])) >> (((arr_1 [i_4]) + (732193880)))))))), (15743776558757258969ULL));
        arr_13 [(short)4] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [0ULL])) & (((/* implicit */int) min((arr_0 [i_4]), (((/* implicit */signed char) arr_5 [i_4] [i_4])))))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))) : (arr_2 [(_Bool)1]))), (((/* implicit */unsigned long long int) ((_Bool) 3609040473779956142ULL)))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4]))))))) & (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) arr_4 [i_4]))), (var_12))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_25 = ((((/* implicit */_Bool) (~(arr_8 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : ((~(((/* implicit */int) arr_5 [i_5 - 1] [i_4])))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_11 [i_4]);
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_22 [i_6] [i_4] [(signed char)0] = ((/* implicit */short) (-(9121436978963288847ULL)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    arr_29 [i_4] [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_6])) ? (arr_2 [0]) : (((/* implicit */unsigned long long int) arr_12 [i_6]))));
                    var_26 = ((/* implicit */short) arr_1 [i_6]);
                    arr_30 [i_4] [i_6] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */_Bool) var_15);
                    arr_31 [i_4] [i_4] [i_6] [i_6] [i_4] [i_8] = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_4]));
                }
                arr_32 [(_Bool)1] [4LL] [i_7] &= ((/* implicit */unsigned char) arr_28 [i_4] [i_6] [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 3]);
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_6] [i_7]))) : (var_8)))))))));
            }
            for (signed char i_9 = 2; i_9 < 8; i_9 += 2) /* same iter space */
            {
                var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(var_15)))) ? (min(((+(arr_8 [(unsigned char)11] [i_6] [i_6]))), (((/* implicit */unsigned long long int) arr_9 [i_9 + 1] [(unsigned char)2] [i_9] [(unsigned char)2] [(unsigned char)2])))) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_27 [i_9 + 2] [i_9] [i_6] [i_4])))))))));
                arr_35 [i_4] [i_4] [(short)0] [i_9] = ((/* implicit */int) arr_14 [i_4] [i_4]);
            }
            for (signed char i_10 = 2; i_10 < 8; i_10 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_25 [i_10 + 2] [i_10 - 1] [i_10 - 1]))))));
                arr_40 [i_4] [i_6] [i_4] [3] = ((/* implicit */_Bool) min((((((var_5) ? (((/* implicit */long long int) arr_34 [i_4])) : (arr_6 [(short)1] [i_6] [8] [i_6]))) >> (((min((-5274347254629869950LL), (((/* implicit */long long int) arr_18 [i_4] [i_4])))) + (5274347254629869999LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_10])) ? (var_6) : (var_8)))) ? (((/* implicit */int) arr_39 [i_6] [i_10] [i_10 - 1] [i_4])) : (min((((/* implicit */int) arr_11 [i_6])), (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_10]))))))));
            }
            arr_41 [i_4] = min((((/* implicit */unsigned long long int) (_Bool)1)), (15843066236992119008ULL));
            arr_42 [i_4] = ((short) var_14);
        }
    }
}
