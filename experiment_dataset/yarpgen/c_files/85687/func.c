/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85687
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [7LL]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : (2322996587216260861ULL)))));
        var_14 = arr_1 [i_0];
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (-2995836729165770092LL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [i_0] [14ULL] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_2])), (var_8))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_3 [i_1])))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_3) : (((/* implicit */int) (_Bool)1)))))))))));
                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_0 [i_2])))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 2])) == (((/* implicit */int) arr_7 [i_0 + 1])))))));
                var_17 = ((/* implicit */unsigned short) max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) 1982798811))));
            }
            var_18 = (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_7 [i_0 + 1]))))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) & (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned short)22859))))), (max((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_3]))))))))));
        var_20 -= arr_9 [i_3];
        var_21 = max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3])))))))), (((((/* implicit */int) arr_9 [i_3])) % (((/* implicit */int) var_6)))));
        var_22 *= ((/* implicit */unsigned int) ((long long int) ((arr_11 [i_3] [i_3]) == (arr_11 [i_3] [i_3]))));
    }
    var_23 = ((/* implicit */signed char) min((((unsigned long long int) 887432434U)), (((/* implicit */unsigned long long int) var_2))));
    var_24 = max((((unsigned long long int) ((long long int) 8433653780771592722LL))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_18 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_5 [11U] [11U] [11U] [11U]);
                    var_25 = ((/* implicit */long long int) ((unsigned long long int) max((-8433653780771592722LL), (arr_17 [i_5] [i_5 + 3] [i_5] [i_5 + 1]))));
                    var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5 - 2] [i_5 + 1])) && (((/* implicit */_Bool) 11ULL))))), (18446744073709551613ULL)));
                }
            } 
        } 
    } 
}
