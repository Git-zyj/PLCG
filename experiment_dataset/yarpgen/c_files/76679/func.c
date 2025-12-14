/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76679
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_11 = (~(((/* implicit */int) var_0)));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2095))) > (-7802317056128323754LL)));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1])))))) ? (max((-7802317056128323754LL), (((/* implicit */long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) ((((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) -7802317056128323754LL)) : (3522848720555519406ULL))) > (((/* implicit */unsigned long long int) 7802317056128323755LL))))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 7802317056128323753LL)) : (var_6))) : (((/* implicit */unsigned long long int) ((long long int) -7802317056128323759LL)))));
            var_13 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0]))));
            var_14 = ((/* implicit */unsigned char) arr_4 [i_0 + 1] [i_2]);
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_5 [i_0] [i_0] [i_3]) && (((/* implicit */_Bool) 7802317056128323755LL)))))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? ((~(14923895353154032210ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0] [i_3]), (((/* implicit */short) arr_3 [i_3] [i_0 + 1]))))))))));
            var_16 = ((/* implicit */_Bool) arr_2 [i_0 + 2]);
            var_17 = ((((/* implicit */_Bool) ((short) ((arr_0 [i_0 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) ? (max((((/* implicit */int) arr_11 [i_0 + 2])), ((+(((/* implicit */int) arr_11 [i_0])))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_0] [i_3])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_3] [i_3])))))));
            arr_12 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 7802317056128323764LL))))) << (((min((arr_0 [i_0]), (246939207U))) - (246939203U)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_0])));
        }
    }
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0))));
}
