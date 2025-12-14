/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((9739691596233729826 <= 2422530670), (~var_5))) >> (((max((max(9223372036854775807, 10)), ((max(-1408891329, var_5))))) - 9223372036854775793)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [0] [i_2] [i_2] = (min((min((min(4088, var_9)), ((max(var_9, (arr_1 [i_1])))))), (min((max(4093, 15215)), ((max((arr_0 [i_1]), 43796)))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1] = max((max((max((arr_5 [i_3] [i_3]), -1026229156)), (max(var_6, (arr_6 [i_0] [5] [i_2]))))), -95);
                        var_14 = (((max((min(409608445, (arr_10 [i_2] [i_1] [i_2] [i_3] [i_2] [i_2]))), (var_10 >= var_11)))) == (max(839821178, (max(33554431, 9223372036854775807)))));
                    }
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((max((max(-var_2, (max((arr_12 [i_0] [i_0] [i_1] [i_2] [14]), 528382311)))), (((max(255, (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))) * (min(4586641173578890102, 32767)))))))));
                        arr_14 [i_2] [i_1] [i_2] = (((((max((max((arr_9 [i_0] [i_0] [i_0] [i_0] [8]), var_4)), ((min(255, (arr_10 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1])))))))) | (max((max((arr_4 [i_0] [i_1] [i_2]), (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))), (var_6 ^ 1101562787734670710)))));
                        arr_15 [i_1] [4] [i_1] [i_1] [i_1] |= (min((max(15, 1068684358097375492)), (min(((((arr_10 [i_0] [i_0] [i_1] [i_0] [i_4] [4]) | var_10))), 2629322015481526177))));
                        var_16 = ((-(min(-5530803751631060902, ((max(417220109, -23)))))));
                        arr_16 [i_1] [i_1] |= (max(((((var_11 - (arr_0 [i_0]))) - (((min(var_9, -21)))))), ((((min(12031459688524721494, var_11)) < -4294967295)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_17 |= (((-(arr_17 [i_2]))));
                        arr_19 [i_2] = (((19 <= -21794) * (!-8492)));
                        var_18 = (!(32727 == 2629322015481526177));
                        var_19 = (min(var_19, (((-(4096 - 1))))));
                        var_20 &= ((((8935141660703064064 | (arr_4 [i_5] [1] [1]))) <= ((((var_11 <= (arr_17 [i_1])))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_22 [i_2] [i_0] [i_2] [i_0] [i_0] [i_2] = (((!-1897370465) <= ((max(((max((arr_20 [i_0] [i_0] [i_2] [i_6] [i_2]), (arr_9 [i_0] [i_1] [i_1] [i_0] [i_0])))), (max(var_3, (arr_3 [i_2] [i_1] [i_0]))))))));
                        arr_23 [i_0] [i_1] [i_2] [i_6] = ((~((~((~(arr_5 [i_0] [i_2])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
