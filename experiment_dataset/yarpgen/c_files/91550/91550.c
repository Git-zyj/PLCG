/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(min((18 + 8191), 1665261160583796628))));
    var_16 = ((((((!(~var_7))))) % ((min(var_4, 950560000)))));
    var_17 = ((((((((-5489767453568797505 ? var_2 : var_4))) ? ((var_0 ? var_2 : var_6)) : (!var_5)))) ? (+-235) : ((221 ? 180 : (9223372036854775802 ^ 950559993)))));
    var_18 = (((((1 ? 2341356519 : 1023))) ? var_9 : ((((!(100 % 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((((1 ? 967102746294384493 : 114)) + (max(5541492326069727432, 1))));
                var_20 = (((max((max((arr_3 [i_1]), var_5)), (~var_0))) <= (((((max((arr_1 [i_0 + 1]), 1))) * ((min(0, (arr_0 [i_0])))))))));
                arr_5 [i_1] [i_1] = ((!(((-114 ? 8 : 57858)))));
                var_21 = (((var_6 % var_10) != ((((!(~536870912)))))));
            }
        }
    }
    #pragma endscop
}
