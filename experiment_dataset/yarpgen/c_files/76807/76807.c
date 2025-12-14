/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (max((max((max(40259, 255)), var_4)), (!-128)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = 1;
        arr_2 [i_0] = (+-128);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 = ((max(1151795604700004352, 1)));
            arr_6 [i_0] [i_0] = (max(((127 ? 255 : 1494342179)), (max(((max(-747668782, 0))), (max(2401803448, 130))))));
            var_20 = min((max(4014681175334630807, (-2147483647 - 1))), (((11 ? 1 : -17462))));
            arr_7 [i_0] [i_0] = (min(((((214 ? 1151795604700004363 : 7614996814153117815)))), 17294948469009547264));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (((-(!17294948469009547252))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] = (min(((min(1, 127))), (max(1, (~50289)))));
                        var_22 &= ((13500737297702680005 ? (((-68 ? 26766 : -44))) : (max(1, (max(67, 67106816))))));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            var_23 = (max((max(0, 1849054436)), ((((127 ? 75 : 17482))))));
            var_24 *= ((((max(4294967295, (max(56196, 0))))) ? (max(4294967278, (((-875661063 ? 1 : 110))))) : ((45947 ? (-127 - 1) : 4294967295))));
            var_25 = (max(10831747259556433800, (~-1)));
        }
    }
    var_26 = 0;
    var_27 = var_5;
    #pragma endscop
}
