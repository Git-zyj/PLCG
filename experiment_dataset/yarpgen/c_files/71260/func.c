/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71260
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0]);
        var_20 -= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0 - 1]) == (arr_2 [i_0] [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(5ULL)))) ? ((+(11478565566227662449ULL))) : (((/* implicit */unsigned long long int) (+(arr_4 [i_1]))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 1744188307U)) ? (1826630716859450697LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [19LL] [i_3]))) ^ (((((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_4])) ? (arr_10 [i_1] [i_1] [i_3] [i_4]) : (((/* implicit */unsigned long long int) 2632681865U))))));
                        arr_12 [2U] [i_2] [i_3] = ((6968178507481889167ULL) * (((/* implicit */unsigned long long int) ((long long int) 6968178507481889166ULL))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1]))));
    }
    var_25 = ((/* implicit */unsigned int) var_0);
}
