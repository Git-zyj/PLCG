/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 += ((((((213 ? 16963 : 0)))) ? ((((((4061946124 ? 3207691174 : 3993615605)) < -19)))) : 8735845791790316185));
                                var_15 = 17163044115409018656;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = (((384 + 1520) ? ((1 ? (((-5666 ? 234 : 3207691182))) : 59)) : 222));
                                arr_16 [i_0] [i_5] [i_5] [i_2] [9] [i_0] = (((((19 ? 12624 : 99)))) ? (((56538 || (((-82 ? 60 : 4294967295)))))) : (((0 && (((48 ? 65535 : 0)))))));
                                var_17 *= (0 || 119);
                                var_18 -= (~90);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 8232;
    var_20 = ((301351683 ? (((60095 ? ((0 ? 60095 : 245)) : (48787 && 2908569840)))) : ((568824626 << (1457164657 - 1457164633)))));
    #pragma endscop
}
