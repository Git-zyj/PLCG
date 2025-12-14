/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_11 = (max(var_11, (arr_5 [i_0] [i_1] [i_2])));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_12 *= var_3;
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] [i_4] = (min((arr_4 [i_4] [i_1] [i_0]), ((((arr_2 [i_0] [i_1]) ? -2213 : (!1423411823))))));
                            var_13 += var_8;
                            var_14 = (((((~(arr_10 [i_0] [i_1] [i_2] [8] [i_4])))) ? (((arr_8 [i_4] [i_3] [8] [8] [8]) - (arr_6 [i_0] [i_0] [i_2]))) : var_9));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_15 |= ((-((((!(arr_13 [i_5] [i_2] [11])))))));
                            arr_15 [i_0] [i_1] = (max(2195, 161));
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            arr_18 [i_2] [i_2] |= (max((~var_7), (((var_6 || 40384) ? (arr_0 [i_6 - 3]) : (arr_5 [i_0] [i_2] [i_3])))));
                            arr_19 [i_0] [i_0] [i_1] [i_6] [i_3] [i_6 - 2] [i_6 - 3] = (((arr_10 [i_1] [i_6 - 2] [i_6 - 2] [10] [i_6]) % ((max(((min((arr_10 [i_0] [6] [6] [i_0] [i_6]), (arr_5 [i_0] [i_0] [i_2])))), ((var_2 >> (127 - 99))))))));
                            arr_20 [i_2] [i_6] [i_3] [i_2] [i_2] [i_2] |= min(120, 512297571);
                            var_16 -= (17100361712689197011 % var_4);
                        }
                        arr_21 [i_0] [i_1] = (((((arr_4 [i_0] [i_2] [i_3]) <= var_8)) ? ((101 ? -218054852 : 1423411846)) : ((((29678 % var_8) ? var_2 : (arr_9 [i_0] [i_1] [i_2] [i_0] [i_1]))))));
                        var_17 = (arr_2 [i_0] [i_1]);
                        arr_22 [i_3] [i_2] = (min((((var_3 % (((arr_14 [i_0] [18] [i_0] [3] [i_2] [i_2] [i_3]) ? (arr_5 [i_0] [i_0] [i_0]) : var_7))))), ((((arr_8 [i_0] [i_1] [i_1] [i_3] [i_3]) && (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]))))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_2] = -var_2;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_18 = ((-(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_12 [i_7] [i_2] [i_0])))));
                            var_19 += var_6;
                        }
                        arr_28 [11] [i_1] [8] [i_7] [i_7] [i_7] = (((((min((min(-15430, var_5)), (var_2 && var_1))))) | ((~(min((arr_6 [16] [i_2] [i_1]), var_10))))));
                    }
                    arr_29 [i_0] = ((var_2 ? (((((var_10 << (((arr_1 [i_2]) + 16869))))) ? (arr_10 [i_0] [7] [i_2] [i_1] [i_1]) : (((arr_27 [i_0] [8] [i_1] [i_1] [i_1] [i_2] [i_2]) ? var_4 : var_4)))) : ((-1853533515 ? -127 : -15))));
                    arr_30 [i_0] [i_1] [i_2] [i_2] = ((((-(((arr_1 [i_2]) ? var_4 : (arr_23 [i_1]))))) <= (((((min(var_4, var_5))) ^ (arr_24 [i_0] [i_1] [i_2] [i_2] [i_2]))))));
                    var_20 = (min(2191277974, 15));
                    var_21 -= ((!((min((arr_14 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]), var_9)))));
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_22 ^= var_10;
                            var_23 *= -6306;
                            arr_35 [i_9] [i_1] [i_9 - 1] [14] [i_1] [14] = ((((max((!var_1), (max(1, (arr_24 [i_1] [i_1] [1] [i_1] [i_1])))))) != (max((!1800681440), (((arr_4 [i_10] [4] [i_0]) ? (arr_17 [i_0]) : -126))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (-2147483647 - 1);
    #pragma endscop
}
