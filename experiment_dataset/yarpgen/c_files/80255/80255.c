/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_3));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 *= ((var_3 ? ((((!(arr_2 [i_0] [i_2 - 3]))))) : (max(var_10, (arr_5 [i_0] [i_1] [i_2] [i_1])))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((((max((max((arr_0 [i_2] [i_1]), 14)), (!var_13)))) ? ((var_10 ? (var_5 > var_16) : ((var_10 << (var_8 - 78))))) : (((((-1890884721 ? -1267816003 : -70))) ? (3377876887761639577 < 1) : (((1073741823 && (arr_6 [i_0] [i_0]))))))));
                            var_19 += (18395173182079286753 + ((((arr_3 [i_2] [i_2 - 4] [16]) ? (arr_3 [i_0] [i_2 - 4] [i_2]) : (arr_3 [i_0] [i_2 - 4] [i_2])))));
                            arr_10 [i_0] [i_3] = var_4;
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = (-15 == ((((13773509098139719829 == (((var_16 & (arr_3 [19] [19] [i_1])))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                var_20 = ((!((min((min((arr_5 [i_4] [i_4] [i_5] [i_5]), var_12)), var_13)))));
                arr_17 [i_4] [16] = 48;
            }
        }
    }
    #pragma endscop
}
