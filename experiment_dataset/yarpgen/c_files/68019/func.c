/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68019
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)3] [i_1] [i_2] = (unsigned short)8800;
                    var_10 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)30701)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) arr_2 [i_1] [i_0]))))));
                    var_11 = (unsigned short)54094;
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((max(((~(((/* implicit */int) arr_7 [i_0] [(unsigned short)10] [i_2] [i_3])))), ((~(((/* implicit */int) (unsigned short)56071)))))) + (22783)))));
                        var_12 = var_4;
                        var_13 += arr_6 [i_0];
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_14 = (unsigned short)51352;
                        var_15 += arr_6 [i_0];
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (var_3)));
                            var_17 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0])) != (((/* implicit */int) (unsigned short)18205)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            var_18 = arr_4 [i_2];
                            var_19 = arr_2 [(unsigned short)11] [i_1];
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? ((((+(((/* implicit */int) (unsigned short)14183)))) | (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((((/* implicit */int) arr_17 [i_1] [i_7])) < (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) var_0))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_26 [i_8] = (unsigned short)51370;
                            arr_27 [i_0] [i_1] [i_2] [i_7] [i_8] = (unsigned short)19174;
                        }
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)58060)) >= (((/* implicit */int) var_1))))), (var_2))))));
}
