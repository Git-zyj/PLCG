/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (max(104, 17857688269244051966));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 -= (16383 || 641429937759316098);
                var_12 = ((((min(var_5, -641429937759316099))) == var_3));
                var_13 += ((var_6 ? ((((max(var_5, 4875459463326699999))) ? (var_4 + 96) : var_0)) : (min(var_4, (((17857688269244051989 ? var_9 : -1)))))));
            }
        }
    }
    var_14 *= var_0;
    var_15 = (min(var_15, (((((max(1170080474271408400, 16410))) ? var_0 : -1095036480270078143)))));
    #pragma endscop
}
