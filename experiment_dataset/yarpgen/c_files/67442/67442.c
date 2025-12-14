/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = -1;
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_2 - 1] [13] [11] [i_0] = 36449;
                    arr_9 [i_0] [i_1] = (((((~(arr_4 [i_0])))) == (max(var_5, ((max(var_0, 146)))))));
                    var_19 = ((-(((((var_4 << (((arr_0 [i_0] [i_0]) - 12203))))) ? 0 : var_5))));
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    arr_13 [i_3] [i_3] [i_3] [9] = ((+((((var_14 ? (-127 - 1) : 18446744073709551615))))));
                    arr_14 [i_1] [11] [i_1] [i_1] = var_12;
                    var_20 = max(((max(2707395325, 4180158619))), (max(var_13, 844853711)));
                }
                var_21 = ((((3606824435240748968 << (((max(355477229, 529873909)) - 529873866)))) << ((((-115 ? 4180158642 : 50)) - 4180158629))));
            }
        }
    }
    #pragma endscop
}
