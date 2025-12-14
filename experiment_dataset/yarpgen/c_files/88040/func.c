/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88040
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
    var_19 = ((/* implicit */short) min((var_19), (var_10)));
    var_20 |= ((/* implicit */unsigned short) ((unsigned long long int) var_9));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_17)))));
            var_21 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (signed char)107)), (17414876268482797450ULL)))));
        }
        var_22 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39702))))));
        arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) ((unsigned char) arr_3 [i_0] [(_Bool)1] [i_0])))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)39702)) >= (((((/* implicit */int) (signed char)63)) - (((/* implicit */int) (short)0))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
            arr_12 [(signed char)13] [i_2] = ((/* implicit */signed char) var_17);
            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
        }
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)39703))));
        arr_14 [i_2] = ((/* implicit */signed char) ((((_Bool) ((arr_10 [i_2] [i_2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) 4143741709U))));
    }
}
