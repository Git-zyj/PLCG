/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((3383868907 ? (((((var_4 ? var_5 : 865858992))) ? (!14) : (max(911098388, 911098389)))) : ((max(-119, 2147483647)))));
    var_11 = ((((var_2 ? (min(3383868907, 3383868916)) : (((var_1 ? var_4 : 59))))) ^ var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [2] [i_1 - 3] = -1132146199;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (((((~((-124 ? var_0 : 65145))))) ? (-111 && var_9) : ((var_9 >> (-113 + 124)))));
                                var_13 = var_3;
                            }
                        }
                    }
                }
                var_14 = ((min((-118 || -2252), (9857990308668701778 + var_4))));
            }
        }
    }
    #pragma endscop
}
