/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59093
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_0] [(_Bool)1])), ((~((~(((/* implicit */int) arr_1 [i_0]))))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (max((1103751828U), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_4 [8ULL] [8ULL] &= ((/* implicit */signed char) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (!((_Bool)0))))));
    }
    var_14 = ((/* implicit */int) var_1);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((short)27762), (((/* implicit */short) var_1)))))))) >= (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        for (int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            {
                arr_11 [i_1] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (signed char)40))))) ? (arr_8 [i_2 + 1] [i_1]) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_6 [18U])) : (arr_8 [i_2] [i_1]))))));
                var_16 = ((/* implicit */unsigned int) min((arr_9 [i_1] [i_2]), (((((/* implicit */int) arr_7 [20ULL] [i_2] [i_1])) < (((/* implicit */int) ((unsigned short) 225393212961990437ULL)))))));
            }
        } 
    } 
}
