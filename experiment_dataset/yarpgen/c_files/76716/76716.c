/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((var_0 ^ (((3471383399731292164 >= (((46 ? 26212 : (arr_3 [10] [i_0 + 2] [i_0 + 2]))))))))))));
                arr_5 [i_0 + 1] = (min(((max(64, ((((arr_0 [i_0 - 1]) <= 3471383399731292162)))))), ((1615554616839965384 ? -9 : ((var_7 ? 6513 : 4675222663794899492))))));
            }
        }
    }
    var_14 = (((((+(((-9223372036854775807 - 1) ? -63 : (-32767 - 1)))))) ? ((((min(44687, 4608116880686717901))) ? 2587620593 : -6360436681553156332)) : (min(1124800395214848, 30079))));
    var_15 = ((var_6 > (!var_9)));
    #pragma endscop
}
