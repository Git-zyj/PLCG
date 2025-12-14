/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 |= ((1536 >> (0 < 45214)));
        arr_4 [i_0] [i_0] = (((62234 ? 127 : 5)));
        arr_5 [i_0] = ((806861400 - (-32767 - 1)));
        arr_6 [i_0] = ((((min(123, ((123 ? 1 : 34359738352))))) ? 32767 : 2749342577));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_13 = (0 | 0);
        var_14 = ((((((((arr_8 [i_1 + 1] [i_1]) / var_2))) ? (((28044 ? 48 : 255))) : (arr_7 [i_1] [6]))) >> (((arr_1 [i_1 + 1] [i_1 - 2]) ? 21 : var_9))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_15 = (max(var_15, (((247 || (-18530 - -6919))))));
        arr_12 [i_2] = (((((1 >> (252 > var_6)))) ? (((((((208 ? 48 : -28))) == (max(var_11, (arr_3 [i_2]))))))) : (-1605946839267172477 ^ -39)));
    }
    var_16 = 4294967295;
    var_17 = (((1 + 5419155765133875354) - (-2147483647 - 1)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_18 = (min(var_18, (4 ^ -2292263795286223813)));
                var_19 = (min(((((10698705411996014999 ? 17547733716605243938 : 0)))), (14444238567007475769 ^ 123)));
                var_20 -= (((((7 ? 1826772338 : 5))) ? 0 : 13027588308575676262));
                var_21 |= var_6;
                var_22 -= (((arr_15 [i_3]) < (((arr_15 [i_3]) * 18446744039349813284))));
            }
        }
    }
    var_23 &= var_0;
    #pragma endscop
}
