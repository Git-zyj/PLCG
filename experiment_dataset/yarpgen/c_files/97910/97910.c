/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(4690004964445166258, -var_10)), ((min(var_6, ((max(var_0, 36))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = (min((arr_12 [i_0] [i_0] [i_0]), (min((max(110, var_2)), ((min((arr_14 [2] [i_2]), 1)))))));
                                var_13 = (~((((max(17960814338375249961, 212))) ? ((-856680583679690232 ? 18446744073709551613 : 200)) : (min(4121334105, (arr_1 [7]))))));
                                var_14 -= ((max(5075233347904708263, (max(4, 17960814338375249941)))));
                                var_15 = max(-var_9, (((max(65171, 31709)))));
                            }
                        }
                    }
                }
                var_16 *= (max(((min(-var_7, ((-3487129206836786496 ? 4121334105 : -66))))), (((((var_10 ? var_8 : -1680873017))) ? -var_7 : (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {

                            for (int i_7 = 1; i_7 < 8;i_7 += 1)
                            {
                                var_17 *= (-127 - 1);
                                var_18 = (max(var_18, ((min(((~(min(485929735334301659, var_5)))), (min((min(var_1, 1119931241077863089)), (min((-127 - 1), 8586416716292360029)))))))));
                                var_19 = (min((((!var_0) ? ((((!(arr_23 [9] [9] [9]))))) : (min(2147483647, 220004000)))), (max((!1503871026720374904), (max(4294967287, -31))))));
                            }
                            arr_24 [i_1] [i_6] = (max(((min(((max((-127 - 1), (arr_12 [i_0] [i_1] [i_0])))), (max(214, var_11))))), (max(-var_4, (((var_2 ? 0 : 3701865838)))))));

                            for (int i_8 = 3; i_8 < 8;i_8 += 1)
                            {
                                var_20 &= ((~((((max(2888748306, var_8))) ? (min(485929735334301640, 3)) : (arr_5 [i_6 - 1] [i_1] [i_1])))));
                                var_21 = (max(var_21, ((min(((((max(var_10, var_8))) ? -1464108498 : ((83 ? 220 : -31362)))), ((+((max((arr_25 [i_0] [i_0] [i_0] [i_0] [i_8]), 84))))))))));
                                var_22 = (min(var_22, (((((min(((max((-127 - 1), (arr_5 [i_0] [i_1] [i_0])))), (arr_9 [i_0] [i_1] [i_5] [i_5])))) ? ((min((max(4135742521, 4135742521)), ((max(940070835, -52)))))) : (min((((arr_4 [i_0]) ? var_6 : -7428941496620333038)), (!var_0))))))));
                            }
                        }
                    }
                }
                var_23 = (min((((~(~var_6)))), (max((((arr_21 [i_1] [2] [i_0] [i_0]) ? var_2 : (arr_22 [i_0]))), ((max(32759, var_5)))))));
            }
        }
    }
    var_24 = (max(var_24, ((((((max(485929735334301640, var_2)))) ? ((-(max(var_10, -16)))) : ((((!((min(49, var_6))))))))))));
    #pragma endscop
}
