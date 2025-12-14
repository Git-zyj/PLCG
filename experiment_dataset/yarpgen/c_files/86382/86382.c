/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((((((((~(arr_1 [i_0])))) ? ((1 ? 16663 : var_5)) : (!var_0)))) ? (((-((11629 ? (arr_3 [i_0]) : 1))))) : ((+(((arr_2 [i_0] [i_0] [i_0]) ? 7131859214289143191 : 8302540131033922103))))));
                arr_4 [i_0] [i_0] [i_1] = ((((((((var_2 ? (arr_0 [i_1] [i_0]) : 1))) ? -807052667 : -7131859214289143193))) ? (--7131859214289143173) : (((-2502875794 ? ((var_2 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : ((-682529146 ? var_9 : (arr_0 [16] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = ((~((((((arr_0 [2] [i_1]) ? 7131859214289143193 : (arr_7 [i_0] [i_1] [i_0] [i_0])))) ? 5994420872710484752 : (((1 ? var_10 : (arr_8 [i_3]))))))));
                            var_15 = (!((!((((arr_1 [i_0]) ? -20624 : var_5))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((((arr_12 [i_4]) ? (!255) : ((5994420872710484768 ? var_5 : (arr_8 [i_0]))))))))));
                            var_17 &= (((((-(!var_2)))) ? (((~(arr_14 [i_0] [i_1] [i_4] [0] [i_0])))) : (((((~(arr_16 [i_0] [i_0] [i_0] [i_0])))) ? ((var_6 ? var_8 : (arr_3 [i_0]))) : var_9))));
                            arr_18 [i_0] [9] [i_4] [i_5] = (((((((var_0 ? var_3 : var_7))) ? ((-2 ? (arr_13 [i_0] [i_0] [i_0] [i_5]) : var_0)) : ((((arr_0 [i_0] [i_0]) ? 1381 : var_2)))))) ? (((~(~26663)))) : (((222 ? var_1 : (arr_11 [i_4] [i_1] [i_1] [i_4])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-2 ? 19522 : -4));
    var_19 = (((!0) ? (((!(((var_1 ? var_2 : 2058954292)))))) : (((((var_9 ? 43 : 43))) ? ((var_3 ? 1 : var_5)) : ((var_7 ? 1 : var_9))))));
    var_20 = ((((((((var_6 ? var_7 : 33))) ? (((var_6 ? var_7 : var_12))) : ((var_3 ? 57 : var_1))))) ? (((((-20641 ? -20623 : 5994420872710484752))) ? -var_0 : var_12)) : ((((((-2147483633 ? 1 : 1317154954))) ? (~var_1) : (!var_11))))));
    var_21 -= (~-var_11);
    #pragma endscop
}
