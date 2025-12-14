/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57588
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(signed char)2] &= ((/* implicit */_Bool) ((short) ((_Bool) arr_0 [(unsigned char)0])));
        var_10 = ((_Bool) arr_0 [i_0]);
        var_11 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_12 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = arr_0 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((signed char) ((short) ((unsigned char) arr_5 [i_1] [i_1]))));
        /* LoopSeq 2 */
        for (signed char i_2 = 3; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_4 [(short)14]))));
            arr_10 [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) arr_4 [i_1]);
            arr_11 [i_2] [i_2 + 3] = ((/* implicit */unsigned char) ((short) arr_0 [i_2]));
        }
        for (signed char i_3 = 3; i_3 < 18; i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
            arr_15 [i_1] [(signed char)10] = ((_Bool) arr_0 [(signed char)22]);
            arr_16 [i_1] = arr_8 [(signed char)6];
        }
        arr_17 [i_1] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) ((short) ((unsigned char) (_Bool)1))));
    }
    for (short i_4 = 3; i_4 < 20; i_4 += 4) 
    {
        var_14 += arr_0 [(_Bool)1];
        var_15 ^= ((/* implicit */unsigned char) ((signed char) ((unsigned char) arr_4 [i_4])));
        var_16 -= ((unsigned char) arr_1 [(signed char)10]);
        var_17 ^= ((/* implicit */unsigned char) arr_18 [i_4 - 1]);
    }
    var_18 = ((/* implicit */_Bool) var_4);
}
