/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61945
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((~(-3044273832227577406LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2936590403U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned char)99))))) : (min((((/* implicit */long long int) -1912970363)), (9223372036854775807LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)30)), (var_5)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) + (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_13 [6LL] [i_2] = ((/* implicit */int) ((short) arr_10 [i_1] [i_1 + 1]));
                    var_14 = (~(((/* implicit */int) arr_12 [i_1 + 1] [i_3] [i_3])));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (unsigned short)6088)) : ((+(((/* implicit */int) (short)-1))))));
                    arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) arr_8 [i_1 - 1]);
                }
            } 
        } 
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_7 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))))) & (min((((int) (short)-1)), (((/* implicit */int) ((short) var_10)))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            {
                arr_20 [i_5] [6LL] = max((((/* implicit */short) ((((/* implicit */int) arr_18 [i_4] [i_4] [i_5])) > ((+(((/* implicit */int) (signed char)127))))))), (min((arr_18 [i_4] [i_5] [i_5]), (arr_18 [(signed char)20] [i_5] [15ULL]))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))) | (arr_17 [i_4]))), (((((/* implicit */_Bool) (short)0)) ? (6291456U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3124)))))))) ? (((/* implicit */int) ((((long long int) var_11)) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)0))))))))) : (arr_15 [i_4])));
                var_19 *= ((/* implicit */_Bool) arr_16 [i_4]);
            }
        } 
    } 
}
