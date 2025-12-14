/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~25860) ? ((1 ? 3080319457447077708 : 15366424616262473907)) : (!3080319457447077708))) & ((16383 ? (3080319457447077683 + 15366424616262473907) : var_4))));
    var_19 |= var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((!((max(6488869021351238317, 1145150665447336915)))));
        var_20 = ((-(15366424616262473907 <= 12201093952636365596)));
        var_21 = (min(((max(1, 65525))), 17301593408262214696));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_22 &= ((((max(1, 17301593408262214687)))) ? (min(1145150665447336928, 3080319457447077696)) : -17301593408262214678);

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_23 = ((((max((max(1, 15366424616262473899)), 2047))) ? 3080319457447077710 : ((1145150665447336919 ? 0 : 9928190025852462855))));
                arr_9 [i_2 + 1] &= 64512;
            }
        }
        arr_10 [i_1 - 1] = (~(max(10841723975360782088, 38743)));
    }
    #pragma endscop
}
