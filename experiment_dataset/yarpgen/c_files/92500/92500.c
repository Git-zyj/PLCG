/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((-((var_5 ? (arr_5 [i_0]) : (max(2740418214681869830, 8)))))))));
                var_11 = (max(-127, (((((-(arr_0 [6])))) ? 15 : 4064311622))));
            }
        }
    }
    var_12 = ((((((max(0, 18446744073709551613))))) + ((-(min(var_1, 10940862142110821472))))));
    #pragma endscop
}
