/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (((var_1 ? (min(13551334101519156284, var_4)) : (min(4895409972190395332, var_6)))));
    var_18 ^= (((((var_5 >= var_15) ? (~var_9) : (!var_6))) << (min((max(var_12, var_11)), var_3))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_19 = ((((((-1695333780 <= var_7) ? ((max(-1695333791, -1695333795))) : (min((arr_0 [i_0 + 1]), var_14))))) ? (((~var_9) ? ((max(var_4, 287440932))) : ((-1706460222 ? (arr_0 [i_0]) : 7505012167550972001)))) : ((((((arr_1 [i_0]) * var_1)))))));
        arr_2 [i_0 + 1] |= (((arr_1 [i_0 - 1]) < ((max((arr_1 [i_0 - 3]), (arr_1 [i_0 - 4]))))));
        var_20 -= var_10;
        var_21 = ((((var_3 * var_3) ? 7505012167550971980 : ((((arr_0 [i_0 - 2]) ? var_2 : var_1))))) >= 1695333778);
        var_22 = (-((((min(var_7, 14))) << ((953781377 ? var_8 : var_15)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 ^= (max((((!((min(var_7, 3150464027)))))), (((arr_5 [i_1] [i_1]) % (max(7943994792656260520, 3799871861319870790))))));
        arr_6 [1] [1] &= ((-(max(((max(-1585736658, (arr_1 [i_1])))), (~7505012167550972021)))));
        var_24 = (max(var_24, (((!(((3150464043 ? -1950549071 : 3799871861319870790))))))));
        var_25 = (max(((-(!-7505012167550972002))), -77));
        var_26 = (min((((((1 ? (arr_3 [i_1]) : (arr_0 [16]))) ^ var_9))), (min((((-1695333780 ? (arr_4 [i_1] [i_1]) : 16168))), 7505012167550971985))));
    }
    var_27 = (max(var_8, ((var_6 ? (!var_7) : (min(var_2, 25774))))));
    #pragma endscop
}
