/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(((var_0 ? var_6 : var_15)), (max(5727062620553172701, 5727062620553172691)))) > (((((var_6 ? 4294967295 : var_8))) ? var_15 : -20))));
    var_17 = (((((~((24439 ? var_11 : var_9))))) ? var_9 : (~65532)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 ^= var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((-((5727062620553172714 ? -63526 : ((64 ? 55 : 10238)))))))));
                            var_20 -= ((((((arr_10 [i_0] [i_3 - 2] [i_3 - 2] [i_3]) ? var_8 : -7))) ? (((((21479 ? 1 : -5)) < (!909190556686003258)))) : 16380));
                        }
                    }
                }
                var_21 = ((((-11 ? -60 : 10239)) > (((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_0 [i_0])))));
                arr_11 [i_1] [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_1] [i_1]);
                arr_12 [i_1] = (~11);
            }
        }
    }
    var_22 = ((818376614848990174 ? -var_0 : (~0)));
    #pragma endscop
}
