/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93838
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            var_15 = ((int) var_5);
            var_16 = var_10;
            arr_6 [(short)1] = ((((/* implicit */_Bool) ((int) (short)28643))) ? (var_4) : (((int) var_5)));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    arr_14 [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_11)));
                    var_17 = var_5;
                }
                arr_15 [i_0] = ((((((/* implicit */_Bool) (short)30140)) ? (var_7) : (((/* implicit */int) (short)(-32767 - 1))))) / (var_12));
                var_18 = ((var_9) / (1264045348));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */short) var_9);
                            var_20 = ((((/* implicit */_Bool) var_2)) ? (((int) var_12)) : (((int) (short)-23570)));
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                arr_24 [16] [i_2] [i_2] [i_0] &= ((((/* implicit */_Bool) -1264045349)) ? (((/* implicit */int) var_14)) : (((int) 1264045348)));
                var_21 = ((/* implicit */short) var_9);
            }
            arr_25 [i_0] [i_0] = ((int) var_0);
        }
        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)23766)) : (-1264045335)));
            var_23 += ((/* implicit */short) ((var_10) / (((((/* implicit */_Bool) -2042906305)) ? (-1264045355) : (-1264045349)))));
        }
        var_24 = ((((/* implicit */_Bool) -2124051916)) ? (((/* implicit */int) (short)-23752)) : (((/* implicit */int) (short)-23763)));
        var_25 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)27876)));
        arr_30 [i_0] = ((((/* implicit */_Bool) (-(var_7)))) ? (var_2) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (var_13))));
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */int) min((var_26), (var_11)));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            var_27 = ((/* implicit */short) min((var_4), ((-(((int) (short)-23766))))));
            arr_37 [i_9] [i_10] [i_10] = ((short) ((((/* implicit */_Bool) -2147483616)) ? (((/* implicit */int) (short)-23773)) : (var_4)));
            var_28 &= ((int) ((((/* implicit */_Bool) var_1)) ? (1210738767) : (((/* implicit */int) var_5))));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            arr_42 [i_11] [i_12] [i_11] = ((/* implicit */short) var_7);
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        var_29 = ((((/* implicit */_Bool) var_4)) ? (var_7) : (338836051));
                        arr_50 [i_11] [i_12] [(short)1] [i_14] = ((/* implicit */short) (~(0)));
                    }
                } 
            } 
        }
        arr_51 [i_11] = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_8) : (((/* implicit */int) var_0)));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)23762)) : (677743892)));
        var_31 |= ((((/* implicit */_Bool) -677743893)) ? (var_11) : (var_12));
    }
    var_32 = var_3;
    var_33 += (~(((/* implicit */int) var_0)));
}
