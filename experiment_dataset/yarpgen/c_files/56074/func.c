/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56074
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) min((arr_0 [i_0] [i_1 - 3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 4769956550371703669LL))))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) - (min((((/* implicit */long long int) ((((/* implicit */long long int) var_8)) <= (arr_0 [(unsigned char)16] [i_1 - 3])))), (arr_3 [i_0] [i_0]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_8 [i_1] = ((/* implicit */int) ((((-4769956550371703645LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) + (11740))) - (35)))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((arr_3 [i_0] [i_0]) + (8059299408714831434LL)))))) ? (((/* implicit */int) (short)-7489)) : (((int) var_6)))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) > (4769956550371703645LL)))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)18757))) > (-4769956550371703646LL))))));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */signed char) min(((-(607293670955699612ULL))), (((/* implicit */unsigned long long int) var_15))));
                    arr_16 [i_0] [18LL] [18LL] [i_1] = ((/* implicit */unsigned short) ((signed char) min((4769956550371703640LL), (((/* implicit */long long int) min((var_3), (var_15)))))));
                }
                var_21 = ((/* implicit */unsigned char) ((_Bool) min((3706516483U), (((/* implicit */unsigned int) (short)7488)))));
                var_22 = ((/* implicit */unsigned short) ((unsigned char) min((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (3583659015U))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 992U)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (unsigned char)161)))) & (((/* implicit */int) ((3456580260U) >= (2250873323U))))))) ? (min((((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)199)))), ((+(((/* implicit */int) var_1)))))) : (((((/* implicit */int) var_12)) ^ (((/* implicit */int) ((2709616285U) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
}
