/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80966
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) - (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_0 [i_0])))));
                var_13 += ((/* implicit */unsigned char) arr_4 [14LL] [4ULL] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_0))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_6 [i_2 + 2]) >= (((/* implicit */long long int) var_6))))) - (((/* implicit */int) arr_2 [(unsigned char)17]))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2])))))) ? (((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)6]))))) : (((/* implicit */long long int) (-(var_6))))));
    }
    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_17 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_7 [i_3 - 2]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (6835076963325415100LL) : (arr_7 [(signed char)0])))) ? (((/* implicit */long long int) arr_3 [(unsigned short)3])) : (max((var_3), (var_3)))))));
        var_18 |= ((/* implicit */short) max((((/* implicit */int) max((arr_1 [i_3 - 1] [(signed char)22]), (arr_1 [i_3 - 3] [(unsigned short)12])))), (((((/* implicit */int) var_11)) - (((/* implicit */int) ((short) var_0)))))));
    }
    var_19 = min((((/* implicit */long long int) var_11)), (var_7));
}
