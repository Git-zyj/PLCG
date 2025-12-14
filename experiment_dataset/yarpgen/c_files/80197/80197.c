/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 *= (arr_2 [i_0] [i_1]);
                var_12 = (((((((min(1951579819, (arr_2 [i_0] [i_0])))) ? ((max(2810753220, 8500982251196277489))) : (((arr_1 [0]) ? -1951579820 : 18446744073709551615))))) ? (arr_3 [i_0] [10]) : ((~((-(arr_3 [14] [14])))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_13 = (min(6839, 3313243863));
                    var_14 ^= ((0 ? 255 : 32767));
                    var_15 |= (~11042108690316549082);
                    arr_7 [i_0] [i_0] [i_0] = (max((min(1484214075, -14085)), -32760));
                }
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    arr_12 [i_3 - 4] [i_0] [i_0] = (max((min(129, 190124840396546430)), 14085));
                    arr_13 [6] [i_3 + 1] [i_0] = ((((-(((arr_9 [i_0] [i_1] [i_3 - 2]) ? -819899356 : (arr_10 [i_0] [i_0] [i_0])))))) ? (min(1420447825, ((24086 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_3]))))) : ((((((arr_9 [i_0] [i_1] [i_0]) ? (arr_4 [i_0] [i_3]) : 12056))) ? 5299 : ((~(arr_2 [16] [i_0]))))));
                    arr_14 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((126 ? 3873666331 : 3))));
                }
            }
        }
    }
    var_16 = ((((max(-14086, -9140306051008045875))) ? (min(((2761154608 ? -3082798915820393856 : var_5)), ((max(-5293, var_5))))) : (((var_6 ? 32767 : ((-819899356 ? var_2 : 2761154608)))))));
    var_17 = (min(var_7, ((max(((var_3 ? var_0 : (-2147483647 - 1))), (min(var_4, var_3)))))));
    #pragma endscop
}
