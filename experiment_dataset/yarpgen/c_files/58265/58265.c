/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_8));
    var_20 ^= 31;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (arr_3 [1] [i_1 + 2] [i_1 - 2]);
                arr_5 [4] [4] |= ((-(~-11)));
                var_22 = 1;
                var_23 = (((arr_4 [i_1] [i_1 + 3] [i_1 + 2]) ? ((-180424904 ? 12097740401464782608 : 32985348833280)) : ((max((!var_2), (((arr_2 [i_1]) ? 2841798584064219363 : 672093775)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_24 = (max((arr_7 [i_0] [i_0] [i_0]), (~18446711088360718336)));
                                var_25 = (max(var_25, ((((((((max(-39, 2206365030))) ? (arr_7 [0] [i_1] [i_4]) : ((~(arr_8 [i_4])))))) <= (-6464 - 576460751766552576))))));
                                var_26 ^= ((-76 ? ((min(((32985348833280 ? (arr_7 [i_0] [0] [i_2]) : 3106825654010365208)), (arr_1 [i_2])))) : (min(2206365030, 32985348833279))));
                                var_27 ^= ((((max((((!(arr_13 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0])))), ((178 ? var_10 : 160))))) ? 13469 : (((100 && (arr_10 [i_4] [i_4]))))));
                                var_28 = 4423;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_29 = (arr_15 [1]);
        var_30 = ((((1531544399 ? 76 : 31)) == -182));
    }
    var_31 = (((min((((160 ? var_9 : 4424))), ((6140176308761218666 ? 96 : var_18))))) ? ((~((-9 ? (-127 - 1) : 13218997646960657288)))) : var_12);
    #pragma endscop
}
