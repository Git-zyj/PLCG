/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63249
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 = ((/* implicit */int) arr_1 [10ULL] [10ULL]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned long long int) (unsigned char)195);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) <= (arr_2 [i_2] [i_1])))), (var_0)));
            var_17 ^= ((/* implicit */unsigned char) 12609821285425501256ULL);
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) var_8);
            arr_12 [i_3] [i_1] = (short)-5691;
            var_19 -= ((/* implicit */short) (-(((/* implicit */int) var_0))));
        }
        var_20 ^= ((/* implicit */signed char) min((5836922788284050360ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5836922788284050362ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21990))) : (10815761613535745435ULL)));
    }
    var_22 = ((/* implicit */int) var_13);
}
