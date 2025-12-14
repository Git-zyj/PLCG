/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81831
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
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= (short)-32767;
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)8841))));
                }
            } 
        } 
        var_10 = ((/* implicit */short) (-(((/* implicit */int) (short)1))));
        var_11 += (-((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
        var_12 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
        arr_9 [i_0] = ((int) (short)-22421);
    }
    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max(((short)0), ((short)27952))))) ? ((+(((var_0) - (((/* implicit */int) (short)27952)))))) : ((-(((/* implicit */int) ((short) arr_6 [i_3] [i_3] [i_3] [i_3])))))));
        var_14 = ((int) ((int) (short)22421));
        arr_12 [i_3] [i_3] = (short)-27973;
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_15 = ((((/* implicit */int) (short)-603)) - (1809997398));
        arr_16 [i_4] = ((/* implicit */short) min((((((/* implicit */int) (short)-3656)) - (((/* implicit */int) arr_5 [i_4] [i_4])))), (((/* implicit */int) (!(((var_2) >= (var_1))))))));
        var_16 += var_8;
    }
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    var_18 = ((/* implicit */int) (short)8812);
}
