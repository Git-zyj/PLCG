/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(1925890073, -2250646565227058091);
    var_14 = -1122783078740639937;
    var_15 = (((max(((var_6 ? -1925890074 : var_10)), (var_2 >= var_7))) >= (max(var_2, (max(var_10, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((+(min((arr_3 [i_0]), (arr_1 [i_0])))))) ? (((var_8 ? var_5 : var_3))) : (!-723214451));
                var_16 ^= (((((6232144190242794491 - (arr_0 [i_0] [i_1 + 1])))) || (((var_5 & (arr_2 [i_0] [i_1] [i_1 - 1]))))));
                var_17 = (max(var_17, ((((((var_2 - var_2) ? (((arr_0 [i_0 - 2] [i_1]) + var_4)) : ((min(var_9, var_2)))))) ? (max(((((arr_3 [0]) < 8930732921956424887))), ((-1925890099 ? 1398212091 : 2305843009213431808)))) : (((-(-1 > var_10))))))));
                arr_6 [i_0] [i_1] = (-(((var_10 / -1925890097) ? (var_1 + 6916454210177932385) : var_5)));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_11 [3] [3] [8] [i_0] = (arr_7 [i_0] [i_0] [i_1 - 2] [i_0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((1234606216 >= (arr_4 [4] [i_2] [8]))))));
                        var_19 = ((arr_12 [i_2] [i_2] [i_1 + 1] [i_0 - 2]) << ((((1417687266 ? 67108863 : (arr_9 [i_2] [i_0 - 2]))) - 67108863)));
                        arr_14 [i_3] [4] [i_0] [i_1 - 2] [i_0] = (((((1925890067 - (arr_3 [i_0])))) > (((arr_7 [i_0] [i_1] [i_2] [i_3]) / var_5))));
                    }
                    arr_15 [i_0 - 1] [i_1] [i_0] = (((((+((((arr_8 [9] [i_1] [i_2] [i_2]) > 2193249603466040781)))))) > ((-1 ? 192 : ((-6916454210177932407 ? -6632753712979864497 : 1073741824))))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_20 ^= var_5;
                    var_21 = var_9;
                    var_22 = (max(4259984993390733016, 2147483647));
                    var_23 = ((-2759481878954440021 & ((min(1925890073, (max(131071, 402653184)))))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_21 [i_0] = (((arr_19 [2] [i_5]) ? ((-var_3 ^ ((-8 ? -866323745 : 9223372036854775807)))) : (-233182971 % 8191)));
                    var_24 = (var_11 >> ((((((max(var_11, -1))) ? -var_6 : -220503982)) - 1658987196)));
                }
            }
        }
    }
    #pragma endscop
}
