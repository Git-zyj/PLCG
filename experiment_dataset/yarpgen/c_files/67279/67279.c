/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((min(255, -12482))) ? (max(1, ((131071 ? 3845334900 : -4096)))) : (((((max(-6207407227344173934, 43866))) ? -43861 : ((min(43847, 58))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((-(max(((max(-717214552, 21697))), (max(28, 229))))));
                var_13 = (max(((((((-2147483647 - 1) ? 9165478185172293659 : 0))) ? (((min(22797, 27)))) : (min(-9223372036854775799, 58)))), (min(9165478185172293668, 229))));
                var_14 = ((~(min((~1), ((min(1, 1)))))));
                arr_4 [i_1] [i_1] = (((((((max(-581613765, 15))) ? (max(3124241925, 449632396)) : 1))) ? (min(((2846073134375489347 ? 16933 : 31731)), (~1))) : ((207 ? ((min(16941, 1))) : -31731))));
            }
        }
    }
    #pragma endscop
}
