/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5797
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-1075732509) : (-1)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((signed char) var_8));
        var_20 = ((/* implicit */short) -1075732494);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) var_14);
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_22 *= ((/* implicit */short) ((((-1075732489) + (2147483647))) << (((((-8225837369434046104LL) + (8225837369434046120LL))) - (15LL)))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0]))) > (arr_1 [i_0 - 2])))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [11ULL] [i_1] [11ULL])) < (((/* implicit */int) (short)-8))))))) - (((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned short)65535)))))))));
            }
            var_24 = (~((-(((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1])))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) /* same iter space */
        {
            arr_12 [i_3] = (+(-1623414380));
            arr_13 [(signed char)17] [(signed char)17] = ((/* implicit */long long int) ((short) arr_0 [i_3] [i_0 - 1]));
        }
        arr_14 [i_0] |= ((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [6LL] [i_0 - 3]);
        var_25 |= (+(((arr_0 [i_0 - 3] [i_0]) - (arr_0 [i_0 - 2] [(signed char)11]))));
    }
}
