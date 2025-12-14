/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85049
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max(((((_Bool)1) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))))), (((arr_3 [i_1]) >> (((/* implicit */int) (signed char)0))))));
                arr_5 [(_Bool)1] |= ((/* implicit */long long int) ((((((int) arr_4 [(signed char)10])) != (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (unsigned char)136))))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))))) : (min((arr_3 [8]), (((/* implicit */unsigned int) (_Bool)1)))))) : ((~(((((/* implicit */_Bool) (signed char)62)) ? (arr_3 [(unsigned short)4]) : (((/* implicit */unsigned int) -1))))))));
                var_11 = ((/* implicit */_Bool) (((((-(8692294814192295373ULL))) <= (((/* implicit */unsigned long long int) ((long long int) 513607715))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((18446744073709551594ULL) < (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) || (((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) (signed char)90))))) ? (max((((/* implicit */unsigned long long int) var_2)), (8692294814192295379ULL))) : (min((13278659265874220144ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_3 [(unsigned short)2]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))))), ((~(arr_4 [(signed char)2]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((9754449259517256243ULL) == (((/* implicit */unsigned long long int) var_9))));
}
