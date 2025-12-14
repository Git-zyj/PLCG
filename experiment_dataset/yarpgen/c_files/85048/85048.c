/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((~((3386596267 ? 908371047 : 908371028))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-((18446742974197923840 ? 3386596263 : 18446742974197923840))));
                arr_7 [i_0] |= 908371036;
                var_14 = ((-(max(908371028, (arr_5 [i_0] [i_0 - 2] [i_1])))));
            }
        }
    }
    #pragma endscop
}
