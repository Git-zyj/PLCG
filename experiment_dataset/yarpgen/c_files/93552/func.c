/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93552
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
    var_11 = ((/* implicit */long long int) ((7497804288847381994ULL) - (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) (-(var_3))))), ((~(arr_0 [i_0])))));
        arr_5 [i_0] = ((((/* implicit */_Bool) (~(max((3212803744U), (((/* implicit */unsigned int) (unsigned char)208))))))) ? ((+(1082163552U))) : ((-(arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) ((unsigned int) 175087153U));
            arr_11 [6ULL] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) max((12671483087222719584ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
            var_13 = ((/* implicit */long long int) arr_6 [7U]);
        }
        arr_12 [i_1 + 2] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1082163561U) | (3212803737U)))) ? (((/* implicit */unsigned long long int) 3212803744U)) : (arr_7 [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_10 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-32293)) : (((/* implicit */int) (unsigned char)156))))) : (arr_7 [i_1 + 4]))) : (((/* implicit */unsigned long long int) (~(4294967295U))))));
    }
}
