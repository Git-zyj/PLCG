/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81287
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
    var_13 = ((_Bool) (unsigned char)158);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned char)11] [i_0])) || (var_9))))))));
        var_15 = ((/* implicit */_Bool) var_11);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) arr_4 [i_1] [i_2]);
            arr_9 [i_1] [i_2] = ((var_4) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((arr_3 [i_2]) | (arr_3 [i_2]))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (unsigned int i_5 = 3; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_18 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)136))))) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)129)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 ^= ((/* implicit */unsigned char) max(((+(arr_1 [i_4] [i_4]))), (((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (arr_1 [i_6] [i_4]) : (arr_1 [i_4] [i_5 - 3])))));
                            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_13 [i_4] [i_3])) != (((/* implicit */int) arr_13 [i_4] [i_1]))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned char)11] [(unsigned char)11] [(unsigned char)19] [9LL] [i_4])) ? (((/* implicit */int) arr_19 [(unsigned char)16] [i_4] [i_6] [(_Bool)1] [i_6])) : (((/* implicit */int) arr_19 [12U] [12U] [i_4] [i_5] [i_6]))))) ? (((/* implicit */long long int) var_11)) : (((((((/* implicit */_Bool) var_5)) ? (-8478672319512234670LL) : (((/* implicit */long long int) var_10)))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            arr_25 [i_4] [(unsigned char)20] [i_4] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_5 - 3] [i_7 + 1] [i_5 - 1] [i_5] [i_7 + 1] [i_5 - 1])) : (((/* implicit */int) var_12)))) >= (((/* implicit */int) var_3))));
                            var_20 = ((/* implicit */unsigned char) ((((arr_14 [i_4] [i_5 - 1] [i_5] [i_5] [i_7 + 1] [i_7 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_5 + 1] [i_3] [(unsigned char)17] [i_7 + 1]))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) var_0))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_4] [i_7]))))))) / (((((/* implicit */_Bool) arr_19 [(unsigned char)12] [i_3] [i_4] [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_10 [(_Bool)1])))))));
                        }
                        arr_26 [i_4] [i_3] [i_4] [(unsigned char)7] [i_4] [i_3] = arr_15 [i_1] [i_3] [i_4] [i_5] [i_5] [i_1];
                        var_21 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_19 [(_Bool)1] [i_3] [i_5 + 1] [i_5 + 1] [i_1])) * (((/* implicit */int) arr_22 [i_1] [i_3] [i_5 + 1] [i_5] [i_5 + 1]))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) ((_Bool) arr_20 [8U]))) : (((((/* implicit */_Bool) -9088790910351413160LL)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)148))))));
            arr_27 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), ((+(var_10)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_1] [1LL] [i_1] [i_1] [i_1] [(unsigned char)5])) ? (((/* implicit */long long int) arr_3 [i_1])) : (arr_23 [i_3] [i_3] [i_1] [i_1] [i_1] [i_1]))) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) ((unsigned char) var_0)))));
        }
        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            var_23 += ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)151)) - (((/* implicit */int) arr_17 [i_1]))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [11U]))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        arr_38 [i_1] [i_9] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1])) ? (min((((/* implicit */long long int) (_Bool)1)), (346183790186114636LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)136)) / (((/* implicit */int) (unsigned char)52))))))) : (var_6)));
                        var_24 = ((/* implicit */_Bool) arr_32 [i_1] [(unsigned char)10] [i_9] [i_10]);
                    }
                } 
            } 
        }
    }
}
