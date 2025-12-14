/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97819
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_10 [(short)18] [(short)2] [(short)18] [i_3] [i_0] = ((short) ((short) (short)-4096));
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] = (short)4600;
                        var_17 = ((/* implicit */short) max((var_17), ((short)-4096)));
                    }
                } 
            } 
            arr_12 [(short)9] |= max((max(((short)-2787), ((short)8291))), (((short) (short)14352)));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) ((short) (short)-4519))) | (((/* implicit */int) ((short) ((short) (short)-27432)))))))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_19 = (short)7911;
            arr_16 [i_0] = ((short) (short)-32748);
        }
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            arr_19 [i_0] [i_5] = ((short) ((short) (short)-15317));
            arr_20 [(short)6] [i_5] [i_5] = ((short) min((((((/* implicit */int) (short)4084)) & (((/* implicit */int) (short)31510)))), (((/* implicit */int) (short)-4095))));
            arr_21 [i_5] = (short)-32748;
        }
        arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-22835)) != (((/* implicit */int) (short)(-32767 - 1)))));
        arr_23 [i_0] = ((short) ((short) (short)2046));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    var_20 = min((max((((/* implicit */short) ((((/* implicit */int) (short)-22155)) > (((/* implicit */int) (short)-1))))), (((short) (short)27253)))), (((short) ((short) (short)4095))));
                    var_21 = ((short) ((short) (short)-9110));
                    arr_31 [i_7] = ((short) min(((short)8376), ((short)14347)));
                    var_22 = ((/* implicit */short) max((var_22), (((short) (short)7469))));
                }
            } 
        } 
    }
    var_23 -= ((short) max((((short) (short)-4081)), ((short)3968)));
}
