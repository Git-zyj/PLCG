/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74152
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)157))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((~(-6887694326775793083LL))) : (((/* implicit */long long int) min((var_8), (((/* implicit */int) var_0))))))))))));
    var_12 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 4408888135418322ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (12699872943456658534ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) 2097024)), (6800190527335894272LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) 8589934080LL))) : (((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) var_10));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((long long int) (((_Bool)0) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                    var_15 = ((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_3] [i_1]);
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1])) > (((/* implicit */int) var_5))));
                }
            } 
        } 
    }
    var_16 |= ((/* implicit */unsigned short) 0U);
}
