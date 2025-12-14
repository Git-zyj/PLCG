/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? var_7 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                var_11 = (max((((min((arr_3 [i_0] [i_0 + 3] [i_0]), (arr_3 [i_0] [i_0] [i_0]))) ? (max((arr_4 [i_1 + 4] [i_0]), 17705115567159726917)) : 7775986568660422678)), (((var_7 / (max(var_8, -75)))))));
                var_12 = (max((((((var_5 ? 741628506549824680 : var_5))) ? (~var_6) : ((-(arr_4 [i_0] [i_0 + 4]))))), ((min((741628506549824722 != 3259216372), (!-7775986568660422669))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = 862244747431134089;
                            arr_12 [i_2] [i_2] [i_2] [i_0] = var_9;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    var_14 = (((max(((((arr_16 [i_4] [i_6]) >> (var_1 + 63)))), (1 & var_0))) - (((((max((arr_18 [i_4] [i_4] [i_4]), var_8)) < 3))))));
                    var_15 = ((((4531472208630991763 / (((max((arr_15 [i_4] [i_4]), (arr_20 [i_4] [i_4]))))))) << (((min(482052212, ((-8935566515783034161 ? 4294967295 : -7775986568660422655)))) - 482052205))));
                }
            }
        }
    }
    #pragma endscop
}
