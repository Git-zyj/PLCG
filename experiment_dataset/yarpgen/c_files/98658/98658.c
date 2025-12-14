/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((!((max(-28702, -28255))))) || (var_11 && -42));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 28251;
        var_19 = (((arr_1 [i_0 - 1] [i_0 - 2]) >= ((-346083098 ? (arr_1 [i_0 - 1] [i_0 - 4]) : var_1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = 63;
                        var_21 = ((-(arr_9 [i_0 - 4] [i_1] [i_1])));
                        arr_13 [i_0] [i_3] [8] [i_3] |= (var_4 << ((((39 ? (arr_12 [i_0] [i_0] [i_2] [i_2] [i_3]) : -9124257342535562750)) - 55)));
                    }
                }
            }
        }
        var_22 = (min(1919, 0));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_23 = (max(var_23, ((max(var_1, ((0 ^ (max(-346083098, 255)))))))));
        var_24 = (((((var_7 ? (156 ^ var_7) : 0))) ? var_9 : (((((arr_7 [i_4]) && (arr_7 [i_4])))))));
        arr_16 [i_4] = ((-var_1 ? 223 : (((arr_6 [i_4]) ? ((((arr_9 [i_4] [i_4] [i_4]) * -20765))) : 3982789008))));

        /* vectorizable */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_25 |= (((arr_8 [i_5 - 2] [i_5 + 2] [1] [i_5 + 2]) ? (arr_8 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2]) : 4370008922199849290));
            var_26 = (((4294967292 >> (1709989467 - 1709989459))) >> (-25747 + 25755));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 7;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 7;i_8 += 1)
                {
                    {
                        var_27 = (((((~(arr_8 [i_4] [i_6 + 3] [i_4] [i_8 - 2])))) ? -20765 : (arr_0 [i_4])));
                        arr_28 [i_4] [i_4] [i_7] [1] [i_4] [1] = (((arr_27 [i_8 + 2] [i_7] [i_6 - 3] [i_6 + 1]) ? (~0) : (arr_11 [21] [i_6 - 2] [2] [2])));
                        var_28 = (arr_26 [i_7] [i_7] [i_4] [i_4]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_29 = (127 > var_15);
                        var_30 = ((var_15 | ((var_10 ? var_3 : 9346851817114140235))));
                        var_31 = ((195 ? (arr_23 [i_6 - 3] [i_4]) : 1919));
                    }
                }
            }
        }
        var_32 = (1 > var_0);
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            {
                var_33 = (max(var_33, 346083098));
                var_34 = (((min(var_17, (min((arr_8 [i_11] [i_12] [i_12] [i_11]), 0)))) ^ (arr_6 [i_12])));
                var_35 = ((((min(129, (arr_9 [i_11 + 1] [i_11 + 2] [i_11 + 1])))) > ((59 | (arr_9 [i_11 - 2] [i_11 - 2] [i_11 + 1])))));
                var_36 = ((((((var_6 ^ (arr_4 [i_12]))))) >= (arr_10 [3] [i_12] [i_12] [i_12] [i_12])));
            }
        }
    }
    var_37 &= ((max((var_11 / var_0), var_12)));
    #pragma endscop
}
