/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(var_5, var_4))) == (var_8 && var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((((((((min(var_4, var_4)))) % ((var_9 ? var_1 : var_8))))) ? (((5340152805654324472 ? -1954606058 : 4294967288))) : (max(12299857986925573556, 1954606065))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 ^= var_3;
                                arr_13 [i_2] = (max(((((3513825094 + 2147483647) >> (19927 - 19927)))), ((var_10 ? var_5 : var_11))));
                                arr_14 [i_1] = ((((((var_10 ? 8192 : (-32767 - 1))) - var_3))) ? var_8 : (((var_2 < var_1) ? ((var_6 ? var_4 : var_11)) : (var_5 == var_6))));
                                var_15 = (min(var_15, (((((((var_6 / 48989) ? 19937 : 56355))) ? var_9 : (min((min(1, 2499208034)), (var_11 == var_7))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_7));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 = (var_9 == var_4);
                    var_18 |= ((var_6 * ((((var_8 ? var_9 : var_11))))));
                    var_19 += ((var_2 ? (((((var_3 ? var_2 : var_2))) ? var_7 : ((var_6 ? var_3 : var_5)))) : ((min(var_3, var_10)))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((var_7 && var_8) ? var_7 : (((var_6 & ((var_7 ? var_4 : var_2))))))))));
                                var_21 = ((var_3 ? (((1760048947 ? 15360 : 13025))) : ((var_2 & (max(var_11, var_6))))));
                                var_22 = var_10;
                                var_23 = ((((((var_2 || var_5) | ((var_7 ? var_1 : var_11))))) ? (((((var_6 ? var_9 : var_11))) ? (min(var_10, var_10)) : (((var_0 ? var_4 : var_1))))) : var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
