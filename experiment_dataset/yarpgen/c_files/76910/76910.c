/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = ((((min(-31, 26))) & ((min(120, 32)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 *= (min(15360, 2251795518717952));

            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                arr_9 [i_0] [0] [i_1] [i_2 - 1] = ((((50178 ? 31 : 22409)) == ((188 >> (-5154626920543670411 + 5154626920543670413)))));
                var_18 = ((-6849886488397845454 + 9223372036854775807) << (51764 < -106));
                arr_10 [i_1] = (((((-6849886488397845467 + 9223372036854775807) << (((-36 + 41) - 4)))) < 24));
                var_19 = ((-64 & ((max(32517, 1805697486)))));
            }
            for (int i_3 = 4; i_3 < 7;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    var_20 = (56029 <= 5);
                    var_21 = (!15358);
                    var_22 = (min(var_22, (-1942844290 < -88)));
                }
                var_23 = (max(var_23, (((9486 == (((44880 < (2879756305055028779 || 50194)))))))));
                arr_16 [i_1] [i_1] = (max((min(((max(65535, 2))), ((-1942844279 ? -120 : -1942844260)))), ((min(23, 123)))));
            }
            var_24 = ((((((9007199254740992 & 44069) == (((max(59062, 7544))))))) + -26));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_25 = 9223367638808264704;
            arr_19 [i_5 - 1] [i_5 + 1] [i_5] = 1;
        }
        for (int i_6 = 2; i_6 < 6;i_6 += 1)
        {
            var_26 = (((((((25 ? 25 : -1)) != 21))) - 19372));
            arr_22 [i_0 - 1] = 69;
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        arr_34 [i_7] [i_7] [i_10] = (65534 & 30);
                        arr_35 [i_7] [0] [i_7] [i_10] = ((!(409940302 > 19372)));
                    }
                }
            }
        }
        var_27 = (((19387 < 236) >> 4));
        var_28 = (19393 >> 0);
        arr_36 [i_7] = (15336 < 4793576422757853441);
        arr_37 [i_7] = (4558 % 57992);
    }
    var_29 = var_5;
    #pragma endscop
}
