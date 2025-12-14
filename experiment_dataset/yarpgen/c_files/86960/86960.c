/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(((7528 != (-82 / 48979))), ((844424930131968 < (33255 > 4088))))))));
    var_21 = ((((25793 * 18014397972611072) >= 1284482816)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] [i_1] = 4503599627304960;
                    arr_10 [i_0] [i_0] [i_1] [i_0] = max(67108864, 9606227405362874154);
                }
            }
        }
    }
    #pragma endscop
}
