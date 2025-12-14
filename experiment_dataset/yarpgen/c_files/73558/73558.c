/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [4] [4] = (arr_0 [1] [i_0]);
        arr_3 [i_0] &= ((~(arr_0 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_1 + 1] = ((~((~((~(arr_0 [i_0] [i_1 + 1])))))));
            arr_7 [i_0] [i_0] = (((~4) < ((max((1692741799 == 49376), 3216080777)))));
        }
        arr_8 [i_0] = ((((min((~3216080784), 548040932))) ? ((min(11949234035017794537, (arr_1 [2])))) : ((max((((arr_0 [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]))), (min((arr_4 [i_0]), (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (min(((max(4052685652, (-9223372036854775807 - 1)))), (((~250) ? (arr_10 [i_2]) : (!0)))));
        arr_13 [i_2] [i_2] = ((((max((arr_11 [i_2]), 1078886488))) == ((max((-2147483647 - 1), (min(13, (arr_10 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = (min((arr_9 [i_3]), 32753));
        arr_18 [7] [i_3] = (min((max((arr_9 [i_3]), (arr_15 [i_3]))), ((((2882246641 ? 0 : 1078886518))))));
        arr_19 [i_3] [i_3] = ((max((((30904 ? 32754 : 1813015567))), (((arr_15 [1]) ^ 5171430854718946410)))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_24 [i_4] = (max(3971956238, ((min(0, -32759)))));
        arr_25 [i_4] &= (max(((min((arr_16 [i_4]), (arr_20 [i_4])))), (arr_5 [5] [2])));
    }
    var_12 = var_6;
    #pragma endscop
}
