/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 ^= var_0;
                    var_15 = ((var_12 ? ((((27278 & (arr_4 [12] [i_1]))) & 54364)) : (((((186 > (arr_9 [i_2] [i_2]))))))));
                    arr_10 [i_2] [i_2] [i_2] = (((arr_5 [i_2]) ? (-976382074231072145 % var_8) : (min((arr_9 [i_2] [i_1]), var_5))));
                    arr_11 [i_0] [i_2] = ((11172 ? var_9 : (min(var_2, ((65506 ? 30 : (arr_5 [i_1])))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 = arr_1 [i_2];
                        var_17 = (((((45803 + (arr_9 [i_2] [i_2])))) / (((~(arr_14 [i_2] [i_0]))))));
                        var_18 = (-9223372036854775807 - 1);
                        var_19 ^= -27848;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_21 [i_5] [i_2] [i_2] [i_2] [i_0] = (min((arr_3 [i_4]), ((11172 ? (arr_2 [i_1]) : -27346))));
                            var_20 = (max(var_20, 27847));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_21 = ((65535 ? var_12 : (max(8640394357912995562, -5159920158010328476))));
                            var_22 ^= (((((arr_1 [i_0]) % (arr_1 [i_0]))) != ((-(max(5282, (arr_18 [0] [i_6] [i_4] [0] [i_1] [0] [0])))))));
                            var_23 = (max(((!((max(30, -31062))))), (((((var_12 ? var_12 : var_1))) || ((max(65506, 84)))))));
                            var_24 -= ((((min(-var_12, (((1 ? 0 : 26658)))))) ? (min((arr_17 [i_0] [i_1] [i_2] [i_4] [i_6]), (arr_17 [i_6] [i_4] [i_2] [i_1] [i_0]))) : (!var_11)));
                            var_25 -= ((((var_9 && (arr_14 [i_0] [i_1]))) ? ((~((max(var_1, 95))))) : (~var_0)));
                        }
                        var_26 = (min(var_26, (((7152 * (((147 & -27843) & (max(18, var_8)))))))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_27 ^= var_2;
                            var_28 = (max(var_2, (arr_7 [i_0] [i_1] [i_0] [i_4])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_32 [i_8] [i_4] [i_2] [i_1] [i_2] [i_1] [i_0] = (((arr_20 [i_0] [i_4] [i_2] [i_4] [i_8]) ? (((((arr_0 [i_4] [i_4]) ? var_12 : var_1)) ^ ((((arr_2 [i_0]) ? (arr_23 [i_2] [i_2] [i_1] [i_2] [i_4] [i_4] [i_8]) : (arr_6 [i_0] [i_2])))))) : (arr_23 [i_2] [i_1] [i_2] [i_4] [i_8] [i_2] [1])));
                            var_29 = (((((79 ^ var_0) < var_13)) ? (!65506) : (-27857 > 30)));
                            var_30 = ((37211 ? 27344 : 17592186044415));
                        }
                        var_31 ^= (((((((arr_25 [i_0] [i_1] [6] [i_4] [i_2]) ? 0 : var_9)) != 27345)) ? ((min(64969, 1))) : ((~((35 ? var_11 : 0))))));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_32 = (((28324 % (max(7735374077080732668, 2016)))) & (max((((arr_0 [i_0] [i_1]) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_0)), var_8)));
                        arr_36 [i_2] [i_2] [i_2] [i_9] [i_2] = var_3;
                        var_33 ^= var_9;
                        arr_37 [i_2] = max(var_7, (var_10 < var_13));
                    }
                }
            }
        }
    }
    var_34 = var_4;
    #pragma endscop
}
