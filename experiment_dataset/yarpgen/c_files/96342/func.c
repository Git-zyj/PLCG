/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96342
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
    var_11 = ((/* implicit */int) var_6);
    var_12 += ((/* implicit */unsigned short) max((max((var_6), (min(((short)-8944), (((/* implicit */short) var_5)))))), (max((((/* implicit */short) (_Bool)0)), (var_3)))));
    var_13 = min((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) (unsigned char)4)))))));
    var_14 &= ((/* implicit */short) max((max(((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))), (1962903456)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 -= ((/* implicit */int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) min((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [16ULL])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))), (((/* implicit */int) (short)11878))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -274488700)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)3614))))) ? ((~(((/* implicit */int) (unsigned char)89)))) : (((/* implicit */int) arr_0 [(signed char)20]))))) ? (((/* implicit */int) var_6)) : (min((((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_0 [i_0]))))), (arr_1 [i_0] [i_0])))));
        var_17 = ((/* implicit */short) ((min((322085432), (((/* implicit */int) (short)-18458)))) / (((((/* implicit */int) arr_0 [10])) * (min((arr_1 [i_0] [(_Bool)1]), (arr_1 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_8 [i_1] [1LL] = ((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_1]);
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_1] [i_2])), (arr_1 [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2] [i_1]))))), (max((arr_4 [(_Bool)1]), (((/* implicit */long long int) arr_5 [i_1] [i_2]))))))));
        }
        var_19 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 16198003154044658523ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (arr_4 [i_1])));
    }
}
