/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 += ((((((arr_2 [6]) >= (min(14795692957162155615, 127))))) << var_13));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 |= (min((min((((arr_0 [i_0] [i_1]) ? (arr_4 [i_0] [1] [1]) : (arr_11 [i_0] [i_1] [i_0]))), ((var_3 - (arr_4 [i_0] [i_0] [i_0]))))), (arr_5 [i_3])));
                            var_18 = (arr_3 [i_0] [3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((min(((max((arr_1 [6]), (arr_1 [6])))), (((arr_1 [6]) ? (arr_1 [10]) : (arr_1 [2]))))))));
                            var_20 = (max((((!(arr_5 [i_0])))), (((((arr_1 [i_0]) + 10971643442198452214)) | (arr_14 [7] [i_0] [i_4 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((((((var_11 ? var_2 : var_8))) ? var_15 : ((var_3 << (-8688833327514890571 + 8688833327514890585)))))) - (((((-1025633777816662954 ? var_0 : var_1))) ? (!var_15) : (-1025633777816662960 - 1025633777816662942)))));
    var_22 &= min(((var_6 ? var_1 : ((-1025633777816662954 ? 1025633777816662959 : -1025633777816662960)))), 1025633777816662960);
    #pragma endscop
}
