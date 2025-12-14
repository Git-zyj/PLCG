/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60208
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))));
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (unsigned short)16)))));
            var_19 = ((/* implicit */_Bool) 1910931552646561403LL);
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((1081758455102714004ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27019))))))))));
        }
        arr_8 [(signed char)4] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [(short)16])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    var_21 = ((/* implicit */unsigned short) ((signed char) var_12));
    var_22 = ((/* implicit */signed char) (unsigned char)0);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (16401845573966533203ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_24 = var_3;
}
