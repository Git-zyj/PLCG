/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max((max((-127 - 1), (max(182, -116)))), (max(110, (-127 - 1)))));
        arr_5 [i_0] = (min((min(10, 10681628528309208173)), (max(10681628528309208173, 6))));
        arr_6 [i_0] = (min((min(117, (-32767 - 1))), ((min(255, (min(255, -106)))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 &= min(-7, (max(32767, -106)));
        var_20 += max((max(11, 6)), (min(32767, 18224262572142701744)));
        var_21 &= -11216;
        arr_10 [15] = max(-18, 17);
        arr_11 [15] [15] = -1688710797096577556;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_18 [i_2] [i_3] [i_3] = (max((min(((max(-90, -81))), (min(-91, 6245)))), ((min(((max(21, -7))), (max(12, 194)))))));
            var_22 = (max(var_22, ((max((min(0, -2)), (max((min(0, 126)), -116)))))));
            var_23 = (min((min(650354723, -650354704)), ((min(-10, 27)))));
            var_24 = -112;
        }
        var_25 = -650354704;
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_21 [i_4] [i_4] = (min(9556821583810266679, ((min(-1105299881, 107)))));
        arr_22 [i_4] [i_4] = (max(1688710797096577566, ((max(-42, 128)))));
    }
    var_26 |= var_16;
    var_27 = var_18;
    #pragma endscop
}
