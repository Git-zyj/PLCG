/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (min(((-1 ? (((2757562350 ? 37899 : 65520))) : ((222 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1]))))), 1277558519));
                    arr_8 [i_0] = max(((((((arr_5 [i_0]) < (arr_6 [i_0] [i_0] [i_0] [i_0]))) ? (((arr_0 [i_0] [i_1]) ? (arr_5 [i_0]) : 1533)) : 2228054805765030575))), 4294901783);
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((((max((arr_4 [i_0] [i_1] [i_2]), 1879131449621379797))) ? ((~(arr_4 [i_1] [i_0 - 2] [i_0 - 2]))) : 1));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = (min(((-((min(148, (arr_3 [i_0] [i_1] [i_0])))))), ((~((4294901773 ? 1 : -1548))))));
                }
            }
        }
    }
    var_16 = 9917858807453541970;
    #pragma endscop
}
