/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((max(7080809602943480216, -120))) ? ((max(1757354976550378689, 3305771919))) : (((arr_5 [i_0] [i_1] [i_0] [10]) ? -7080809602943480200 : -7080809602943480216))));
                    arr_8 [i_0] [0] [i_0] = (((arr_0 [i_2 + 3] [i_2 + 1]) & -35));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_14 [i_3] = var_8;
                arr_15 [i_4] = ((((((((-(arr_9 [i_3])))) ? ((144115179485921280 ? 7080809602943480230 : 13800573748271907572)) : (((-(arr_11 [i_3]))))))) ? ((max((((-1757354976550378692 ? var_10 : (arr_10 [0] [i_3])))), (((arr_11 [i_3]) ? (arr_11 [2]) : 989195377))))) : ((18446744073709551594 & (arr_13 [i_3 - 3] [i_3 + 2])))));
                arr_16 [i_4] [i_4] = ((!(~989195395)));
            }
        }
    }
    #pragma endscop
}
