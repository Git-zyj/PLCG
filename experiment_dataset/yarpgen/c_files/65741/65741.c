/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(-64, -64));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((((max(-61, 252))) ? (((min(64, 61)))) : (min(3439491168, 4)))) ^ ((min((!1), ((63 ? -64 : 0))))))))));
                var_21 -= ((((((1251327826697492667 || 8784721799419046393) ? (max(-5529060688583914865, 50)) : (-66 * -69)))) ? (((((max(-81, -324076639168157451))) ? 15488 : ((0 ? 1 : 248))))) : (min((!16745), 5462468884393242206))));
            }
        }
    }
    #pragma endscop
}
