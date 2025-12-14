/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95674
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (short)-17919)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18091))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_10)))))))) ? (17106120506952852872ULL) : (((/* implicit */unsigned long long int) ((((2450105450U) > (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) ? (var_13) : (((2069830058U) >> (((2225137259U) - (2225137231U))))))))));
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((2069830036U) / (2069830041U))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 2225137240U))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)122)) | (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((70368744177664LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (short)-8610)) : (((/* implicit */int) max(((short)0), (var_6))))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_6 [15LL] &= ((/* implicit */unsigned int) ((2225137248U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)32763)))));
        arr_7 [10] [10] = ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned char)95)) <= (((/* implicit */int) (short)485))))));
        var_22 = ((/* implicit */long long int) (_Bool)1);
        var_23 += (_Bool)1;
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_3] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [1U] [i_2] [i_3] [i_3])) ? (arr_13 [i_1] [i_2] [i_3] [i_4]) : (arr_13 [i_1] [i_2] [i_3] [i_3])));
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32764)) || (((/* implicit */_Bool) (unsigned char)92))));
                    }
                } 
            } 
        } 
    }
}
