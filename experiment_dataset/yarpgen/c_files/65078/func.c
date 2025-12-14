/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65078
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])))) : (((0U) + (((/* implicit */unsigned int) var_13))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [3ULL] [i_0])) / (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (327514847))))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1]) : (-327514848)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 15943087339370110004ULL)) || (((/* implicit */_Bool) arr_4 [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) max((((var_5) * (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */int) (signed char)5)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1456183143594359343LL)) ? (2709016789909961090ULL) : (9468984088144990556ULL))))));
                    arr_11 [i_3] [(_Bool)0] = ((((/* implicit */_Bool) -1456183143594359343LL)) ? (-1456183143594359343LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))));
                }
            } 
        } 
    }
    for (int i_4 = 3; i_4 < 17; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((arr_12 [i_4 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))))) << (((((/* implicit */_Bool) 1622278836)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (2709016789909961086ULL)))))));
        var_22 = ((/* implicit */unsigned char) 2073971513);
        var_23 = ((/* implicit */long long int) 12020032551960396186ULL);
    }
}
