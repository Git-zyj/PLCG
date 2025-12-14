/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96322
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    for (short i_4 = 3; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) var_2);
                            var_17 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((long long int) arr_6 [i_1 - 2])) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_0] [i_0] [i_0] [i_1])) - (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1])))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                arr_13 [i_0] [i_1 - 1] [i_0] |= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (((+((-2147483647 - 1)))) > ((+(var_8)))))));
                arr_14 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (-(var_5)))) | (((((/* implicit */_Bool) var_14)) ? (3685581720613038983LL) : (-3685581720613038984LL)))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_3 [i_1 - 2] [i_0] [i_1 + 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (var_15)))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((((/* implicit */_Bool) (+(2797321958U)))) ? (((((/* implicit */int) (short)-20)) - (2097088))) : ((+((-2147483647 - 1)))))))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (570853223)))), (((((/* implicit */_Bool) 2097088)) ? (((/* implicit */long long int) ((var_12) ^ (((/* implicit */int) var_11))))) : (min((-9014338805502675551LL), (-3685581720613038997LL)))))));
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) (short)-256)), (min((((/* implicit */long long int) ((_Bool) var_6))), (min((var_15), (((/* implicit */long long int) var_8))))))));
                        var_22 = ((/* implicit */short) ((max((9014338805502675524LL), (((/* implicit */long long int) max((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])), (var_5)))))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1 - 3] [i_6])))));
                    }
                } 
            } 
        }
        for (int i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (3347029996U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6793075988858130290LL)) ? (((/* implicit */int) (short)2786)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_8]))))))), (((/* implicit */unsigned int) var_9))));
            var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_8 - 1] [i_8 - 3])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0] [i_8]))))) : (-7505370509577072542LL)))));
            var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_8])) ? (arr_21 [i_8] [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1331294561)) ? (((/* implicit */int) var_0)) : (arr_9 [i_0] [i_0] [i_8] [i_0]))))))) / (var_15)));
        }
        arr_22 [i_0] = ((/* implicit */short) arr_9 [i_0] [i_0] [5] [i_0]);
        arr_23 [i_0] = ((/* implicit */int) min((max((max((var_4), (((/* implicit */long long int) -2097114)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)12))))))), (((/* implicit */long long int) (((+(2097088))) * (((((/* implicit */int) var_9)) / (352275981))))))));
    }
    var_26 = ((/* implicit */long long int) min((var_26), (max((((/* implicit */long long int) min((((((/* implicit */_Bool) -3685581720613038983LL)) ? (var_6) : (var_5))), (((/* implicit */int) var_0))))), (((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) - ((+(3593436651066074735LL)))))))));
    var_27 += ((/* implicit */int) (-((+(var_10)))));
}
