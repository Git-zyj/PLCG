/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(36367, 36396));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 25484;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = min((min(-1667930522, 2147483647)), (var_11 >= 22248));
                            var_14 = (((78 == 4989945138695659823) | (125 | var_6)));
                            var_15 ^= (!((!(-126 | 164))));
                            arr_16 [i_0 + 3] [i_0] [13] [i_0 - 1] = 25499;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                var_16 -= (((((((-3030367964164497169 | 40051) == (~239))))) | 3209836423));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_17 = 4726;
                            var_18 ^= min(122, (min(222, 0)));
                            arr_25 [i_7] [i_5] [i_5] [i_4] = (max((((((156 ? 1998757354 : 123)) == 15))), (20504 - -56)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            {
                var_19 = (152 == -5060433560218839536);
                arr_31 [i_8] |= (max((1 != 3216048867), 177));
            }
        }
    }
    #pragma endscop
}
