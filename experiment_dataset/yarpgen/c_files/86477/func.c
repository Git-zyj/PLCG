/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86477
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) 2150496731U);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            var_18 -= (unsigned short)24963;
            var_19 = 206228011U;
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_14 [i_4] [i_3 - 1] [i_4] [i_1 + 1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)36229);
                            arr_15 [i_4] = (unsigned short)0;
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = 1023U;
        }
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            arr_21 [i_5] = ((/* implicit */unsigned int) (unsigned short)39746);
            /* LoopSeq 1 */
            for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) 
            {
                var_20 ^= (unsigned short)16384;
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 951888568U))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_7 = 4; i_7 < 13; i_7 += 4) 
            {
                var_22 = (unsigned short)49131;
                var_23 = ((/* implicit */unsigned short) 4294967295U);
                var_24 = 127U;
            }
            for (unsigned int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) (unsigned short)49152);
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned int i_10 = 4; i_10 < 13; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) 2922866111U);
                            arr_36 [i_0] [i_5] [i_8] [i_9 + 1] [i_10] = ((/* implicit */unsigned int) (unsigned short)51042);
                            var_27 = (unsigned short)14493;
                            var_28 -= ((/* implicit */unsigned int) (unsigned short)49151);
                            arr_37 [i_0] [i_5] [i_8] [i_9 - 3] [i_10] = 2147483648U;
                        }
                    } 
                } 
            }
        }
        var_29 = 4294967294U;
    }
    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 3) 
    {
        var_30 = max((max((min((3603008341U), (98957634U))), (min((var_2), (((/* implicit */unsigned int) arr_12 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1])))))), (max((((/* implicit */unsigned int) min(((unsigned short)50307), ((unsigned short)49127)))), (max((arr_19 [i_11] [i_11]), (((/* implicit */unsigned int) (unsigned short)49131)))))));
        arr_41 [i_11] = max(((unsigned short)55279), ((unsigned short)10261));
    }
    var_31 = min((min((((/* implicit */unsigned int) max((var_11), ((unsigned short)14511)))), (min((var_4), (var_16))))), (((/* implicit */unsigned int) min((max(((unsigned short)64320), ((unsigned short)30122))), ((unsigned short)43981)))));
}
