/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62293
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11037))) & (-4647080317584986362LL)))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_11 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (max((arr_8 [i_2]), (arr_8 [i_2]))) : (min((arr_8 [i_2]), (arr_8 [i_2])))));
        arr_12 [(signed char)1] = ((/* implicit */unsigned long long int) ((short) (((!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))) ? (((/* implicit */int) ((signed char) (unsigned short)11037))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-7)))) ? (arr_13 [i_3]) : (((/* implicit */int) arr_9 [i_3]))));
        var_18 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)6))))));
    }
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)47)), ((unsigned short)65532)))) ? (((long long int) 1602290369U)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47983))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
}
