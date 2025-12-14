/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58313
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((_Bool) var_5)))) + (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_21 = ((long long int) min((((long long int) var_18)), (((/* implicit */long long int) ((short) var_9)))));
                                var_22 = ((_Bool) ((long long int) var_16));
                                arr_11 [14U] [i_1] = ((/* implicit */short) var_5);
                                var_23 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) var_8)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) var_10);
                    var_25 = ((/* implicit */unsigned char) var_7);
                    var_26 = ((/* implicit */long long int) var_18);
                    var_27 = ((/* implicit */signed char) var_17);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) var_14)));
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((short) ((unsigned short) var_8))))));
            var_30 = ((/* implicit */short) min((var_15), (max((var_7), (((/* implicit */unsigned short) var_17))))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_20 [i_0] [3U] [3U] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_13);
                        var_31 = ((/* implicit */_Bool) min((var_8), (((((unsigned int) var_5)) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_1)))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) min((min((((/* implicit */unsigned short) var_2)), (var_7))), (((/* implicit */unsigned short) ((short) var_1)))))) * (((/* implicit */int) var_14))));
                    }
                } 
            } 
            arr_21 [i_0] [i_5] = var_19;
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_33 -= ((/* implicit */unsigned long long int) ((unsigned short) ((short) ((int) var_2))));
            var_34 = ((/* implicit */short) ((long long int) var_4));
        }
        for (short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            arr_26 [i_0] [i_9] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) var_0)));
            /* LoopNest 2 */
            for (unsigned char i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                for (unsigned int i_11 = 3; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_35 -= ((/* implicit */unsigned short) var_19);
                        arr_32 [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) var_9);
                        var_36 = ((/* implicit */int) ((short) var_8));
                        var_37 = ((/* implicit */long long int) var_9);
                    }
                } 
            } 
        }
        arr_33 [i_0] = ((/* implicit */unsigned short) ((var_0) ^ (((/* implicit */long long int) var_19))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    {
                        var_38 = var_10;
                        var_39 = ((/* implicit */_Bool) ((unsigned short) var_4));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                for (short i_17 = 2; i_17 < 14; i_17 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_40 = var_19;
                            var_41 = ((/* implicit */unsigned char) var_6);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_42 -= ((/* implicit */short) ((unsigned int) var_12));
                            arr_54 [i_12] [i_13] [i_16 + 1] [i_16] [i_17] [i_19] = ((/* implicit */unsigned char) ((long long int) ((long long int) var_9)));
                            var_43 = ((_Bool) ((unsigned short) var_15));
                            var_44 = ((/* implicit */short) var_19);
                        }
                        arr_55 [i_16] [i_16 + 1] [i_13] [i_13] [i_16] = ((/* implicit */short) ((((/* implicit */int) var_14)) << (((var_0) - (565484446024777936LL)))));
                        var_45 = var_2;
                        var_46 = ((unsigned char) var_11);
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned short) var_0);
        }
        arr_56 [i_12 + 1] [(unsigned short)7] = ((/* implicit */signed char) min((((unsigned long long int) var_18)), (((/* implicit */unsigned long long int) ((var_18) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))))))));
        arr_57 [(short)3] = ((/* implicit */long long int) min((min((var_6), (var_2))), (((short) var_1))));
    }
    var_48 = ((/* implicit */long long int) ((int) var_8));
    var_49 = ((/* implicit */long long int) var_3);
}
