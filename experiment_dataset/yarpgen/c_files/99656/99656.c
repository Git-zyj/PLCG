/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [0] |= 4663839426991253969;
                arr_6 [i_1] [i_1] [i_0] = (((((((var_12 ? (arr_4 [8]) : 418583206)) - var_12))) / ((min(68, -1534018132095054584)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 = ((((4663839426991253969 ? 2846411151 : 630567101))) ? ((46119 - (arr_10 [i_3]))) : (((arr_10 [i_3]) - (arr_10 [i_3]))));
                var_14 = (((((215 ? (((min((arr_0 [6] [i_3]), (arr_1 [12]))))) : (min(var_8, 76))))) ? (min(1, -var_10)) : (((19 > ((min(36529, (arr_1 [i_3])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_15 = 4663839426991253970;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] [17] [i_6] [i_4] = var_0;
                            var_16 *= var_11;
                            arr_24 [i_7] = (min((((~(~var_5)))), 6798127099439878377));
                            var_17 = (min(((((36529 ? var_10 : -6798127099439878385)) + (arr_14 [i_5]))), ((((((4294967292 ? 29016 : 8191))) && (~-1))))));
                        }
                    }
                }
                var_18 += ((max((arr_14 [i_5]), -1)));
            }
        }
    }
    var_19 = var_7;
    var_20 = (((((min(-48, -289816428758579071)) % (((-15 ? -1 : 7))))) >= ((((((37127 ? 29015 : 11))) ? var_1 : var_10)))));
    #pragma endscop
}
