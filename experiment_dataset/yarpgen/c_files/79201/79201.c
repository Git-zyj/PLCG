/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min((var_8 <= 19751), var_8))), (((var_1 <= var_10) ? ((var_5 << (1248810982 - 1248810964))) : (var_3 | var_11)))));
    var_15 ^= var_10;
    var_16 = ((((((var_3 | 255) <= (var_4 | -75)))) == (max(-var_6, 29883))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (min(8259603122798164635, (min(((-85 ? 249128478138757483 : 10187140950911386980)), ((min(0, 20)))))));
                    var_17 = (((max(((max(-1, (arr_3 [i_2])))), 3221225472)) | ((min((max((arr_5 [1] [6] [1] [i_2]), (arr_1 [6]))), (((arr_6 [7] [4] [i_2] [i_2]) ? 7290 : (arr_0 [i_0 - 1]))))))));
                }
                arr_8 [i_0 + 1] [i_0 + 1] [i_0] = (min(6560975581064932955, -742052469));
                var_18 = (((((arr_5 [i_0 + 1] [i_1] [i_0] [i_1]) ? (arr_5 [i_0 - 1] [i_1] [9] [i_0]) : 10653)) - ((min((arr_5 [i_0 + 1] [i_1] [1] [1]), (arr_5 [i_0 - 1] [i_1] [i_0 - 1] [8]))))));
            }
        }
    }
    #pragma endscop
}
