/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_15 = (max((min(32767, (arr_6 [i_2 - 1] [i_2 - 1] [11] [i_2 - 2]))), (min((arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 2]), (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2])))));
                    var_16 = (((arr_1 [i_2 - 2]) ? (min((arr_1 [i_2 - 2]), (arr_1 [i_2 - 2]))) : (max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 2])))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_17 = ((((32767 >= ((49739 ? 4 : (arr_5 [i_0] [i_0] [i_0]))))) ? (((~((((arr_5 [i_0] [i_0] [i_3]) || (arr_9 [i_0] [i_0] [i_0] [i_0]))))))) : ((var_14 ? (max(467551535, 7193226891210420793)) : ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_7 [i_0]) : 467551535)))))));
                    var_18 = (226021803 == 99);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_19 &= (arr_1 [i_0]);
                    var_20 *= (((arr_5 [i_1] [i_1] [i_1]) / ((-(arr_11 [1] [i_1] [i_4])))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_21 = (max((min((((arr_8 [i_0] [i_0] [i_1] [i_5]) - (arr_16 [i_0] [i_1] [i_1] [i_5]))), ((((arr_9 [i_1] [i_0] [i_0] [i_0]) - (arr_7 [i_0])))))), ((((min((arr_10 [i_0] [i_0] [3]), 49739)) <= 1)))));
                    var_22 = (((!(((arr_17 [i_0] [i_1] [i_0]) != (arr_14 [i_0] [i_1] [i_0] [i_0]))))) ? ((((((1474617220312265337 || (arr_4 [i_0] [i_0] [i_0])))) != var_0))) : 1);
                    var_23 = (99 & -4);
                    var_24 = arr_1 [i_5];
                }
                var_25 = (min(var_25, (((-(((((15796 ? (arr_10 [i_0] [i_1] [i_1]) : 20327))) ? (arr_4 [i_0] [i_0] [2]) : (arr_16 [i_0] [i_0] [i_0] [i_0]))))))));
                var_26 = (24 ? var_4 : (max(((((arr_6 [i_0] [i_0] [i_0] [i_1]) != 1738585894))), 49739)));
                var_27 = ((((!(arr_10 [i_0] [i_1] [i_1]))) || -24));
            }
        }
    }
    var_28 += (min(var_0, var_0));
    #pragma endscop
}
