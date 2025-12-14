/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 &= (min((115 || -121), (~78)));
                var_12 = ((((min(((max(115, 2733))), 1612741026))) || -9494));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 &= ((max(-32390, (-2147483647 - 1))));
                    var_14 = max(56041, ((9597 ? 606906384 : 1)));
                    var_15 = (max((max(1255516261751544204, (!9748554608285649630))), ((((~-770631557) ^ (0 > -1))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_16 = 233;
                                var_17 = (((-1468302912 != 31) | (115 > 19)));
                                var_18 -= (-2278750795629407788 && 46761);
                                var_19 = (max(var_19, (((~(0 == -107))))));
                            }
                        }
                    }
                    var_20 = (max(var_20, (min((max((max(-1, 7124)), 5938)), (1 <= 145)))));
                    var_21 = (((((1433548956553344164 ? ((max(3, 0))) : ((min(56062, -115)))))) ? ((max(1282109563, -0))) : 2499648106));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_22 = 8331;
                    var_23 -= (-19056 + (16786439564522823402 || 5938));
                    var_24 = (((396412683 / 20750) ? ((max(0, -352624838))) : (max(1433548956553344164, 3252708864))));
                }
            }
        }
    }
    #pragma endscop
}
