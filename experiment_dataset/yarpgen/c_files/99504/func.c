/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99504
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
    var_17 = ((/* implicit */long long int) 17810441379378334119ULL);
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) min((-1807200997), (((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */long long int) max((var_11), (var_10))))))));
    var_19 += ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_20 |= ((/* implicit */unsigned short) max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) -2079607407)) && ((_Bool)1))))));
        var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_10)), (max((17810441379378334119ULL), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)9])))))) / (arr_1 [i_0 - 1])));
        var_22 = ((/* implicit */short) ((var_12) ? (arr_1 [14LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 += -602077280;
            var_24 = max((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned short) (_Bool)0)))))))), (arr_2 [21ULL]));
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((-2079607407) + (arr_2 [i_3]))))));
            arr_9 [i_3] [(_Bool)0] = min((((((((/* implicit */int) arr_5 [(_Bool)1] [i_3] [i_3])) * (((/* implicit */int) arr_5 [i_3] [i_3] [2LL])))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [(_Bool)1] [i_3] [i_3])), (var_5)))))), (var_10));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_3] [i_4]))) : ((~(arr_2 [i_4])))));
                var_27 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) arr_0 [i_4])))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (arr_1 [i_1]))))));
                var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) arr_0 [i_1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4] [i_3] [i_1])) ^ (((/* implicit */int) arr_4 [i_4]))));
            }
            arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_1] [5] [i_3] [i_3])), (arr_8 [i_1] [(_Bool)1] [i_3])))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_10 [i_3])));
        }
        for (short i_5 = 4; i_5 < 9; i_5 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1] [i_5] [i_5]) : (((/* implicit */int) arr_11 [(unsigned short)9] [i_5] [(_Bool)1] [i_5]))))))));
            var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((arr_7 [i_1] [i_5 - 1] [i_5 - 3]) ^ (((((/* implicit */_Bool) arr_14 [i_1] [i_5])) ? (arr_7 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        }
        arr_16 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */int) var_6)))))));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4LL)), (9094632153494097330ULL)))) ? (((/* implicit */unsigned long long int) (+(arr_8 [i_1] [i_1] [(unsigned short)8])))) : (((unsigned long long int) arr_6 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 15; i_6 += 3) 
    {
        var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_6]))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_6 - 2])) <= (((/* implicit */int) (_Bool)1))));
        var_35 |= ((/* implicit */unsigned short) arr_2 [i_6 - 1]);
    }
}
