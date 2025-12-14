/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55108
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (7U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) != (var_8))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned char)255);
        var_14 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        arr_5 [i_0] = ((/* implicit */short) var_8);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(12774866856464125213ULL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_12 [5] [i_1] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_7)))))) < (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_8))))), ((!((_Bool)0)))));
            arr_13 [i_1] = max((((unsigned char) min((((/* implicit */unsigned long long int) 766603959)), (12587347247599927181ULL)))), (((/* implicit */unsigned char) (_Bool)1)));
            arr_14 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((12774866856464125207ULL) == (12774866856464125213ULL))));
        }
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_15 -= ((/* implicit */unsigned int) arr_0 [i_4]);
            var_16 = ((/* implicit */unsigned long long int) var_7);
        }
        var_17 = ((/* implicit */unsigned int) arr_10 [i_3] [i_3]);
    }
}
