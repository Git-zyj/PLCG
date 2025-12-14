/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63780
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
    var_16 = ((/* implicit */long long int) ((((_Bool) 1880924642)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-35))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) (signed char)33);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                        arr_11 [i_3] [i_3] [i_2] [i_1] [i_0] [(signed char)15] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (short)-22230)) ? (((((/* implicit */_Bool) -1294807882)) ? (13231163629946171779ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-22244))))));
                    }
                } 
            } 
            var_19 = -3284383429235636057LL;
            var_20 = ((/* implicit */int) (short)22221);
        }
        /* vectorizable */
        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) arr_10 [i_4] [i_4] [i_4]);
            arr_15 [i_4] [i_4] [i_4] = arr_6 [i_0] [(_Bool)1] [i_4];
            arr_16 [i_0] [i_4] [4] &= ((/* implicit */signed char) arr_14 [16] [i_4 - 2]);
            var_22 = ((/* implicit */int) ((signed char) 7615097648326759333ULL));
            var_23 = ((/* implicit */int) arr_13 [i_0]);
        }
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_24 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((short) (signed char)(-127 - 1)))) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5])))));
        var_25 -= ((/* implicit */signed char) arr_18 [8ULL]);
    }
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned long long int) arr_19 [4U] [i_6]);
        arr_22 [i_6] = ((/* implicit */int) (_Bool)1);
        arr_23 [(signed char)4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 7615097648326759335ULL))) ? (1859100597) : (((((/* implicit */_Bool) (short)-22244)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (signed char)-35))))))) ? (-832525309) : (-305164305)));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6]))) : (arr_4 [i_6])))))));
        arr_24 [(short)12] &= ((/* implicit */int) (short)6664);
    }
    var_27 -= 1880924642;
    var_28 = ((/* implicit */int) (short)22245);
}
