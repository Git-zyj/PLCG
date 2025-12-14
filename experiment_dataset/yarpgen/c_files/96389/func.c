/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96389
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [3] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [6ULL] = var_8;
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_17 = ((/* implicit */int) var_6);
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_18 |= ((/* implicit */signed char) var_6);
                        var_19 = ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))))) && (((((((/* implicit */_Bool) arr_13 [i_1] [i_1] [13ULL] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) >= ((+(arr_4 [i_1]))))));
                        arr_14 [i_4] [i_4] = (+(arr_10 [3LL] [3LL] [i_1]));
                    }
                } 
            } 
            arr_15 [i_2] [i_2] [i_1] = ((/* implicit */signed char) arr_2 [i_2] [(unsigned short)13]);
            var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [(unsigned short)13])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */_Bool) var_10)) ? (arr_11 [(signed char)11] [i_2] [2U] [i_1]) : (((/* implicit */long long int) arr_5 [i_1])))))), (((/* implicit */long long int) 3542946766U))));
        }
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)9] [i_1])) ? (arr_11 [i_1] [i_1] [5LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [(_Bool)1])) >= (((/* implicit */int) var_12)))))) : (arr_12 [i_1])))), ((((!(((/* implicit */_Bool) var_11)))) ? (var_13) : (((/* implicit */unsigned long long int) (+(arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))));
    }
    var_23 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) var_7)), (var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_15))))) ? ((+(arr_17 [(signed char)10]))) : (((/* implicit */unsigned long long int) arr_16 [i_5]))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_21 [i_6] = ((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_6])) : (((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) arr_0 [i_6] [i_6]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
            var_25 = ((/* implicit */int) min((var_25), ((-2147483647 - 1))));
        }
    }
    var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned int) var_1)), (var_6))))), (((/* implicit */unsigned int) var_9))));
}
