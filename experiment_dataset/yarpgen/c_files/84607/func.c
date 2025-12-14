/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84607
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 2]);
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned long long int) ((int) arr_8 [i_3] [i_1 - 1]));
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (arr_9 [i_1] [i_1] [i_3]) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)215))))) : (arr_5 [i_0]));
                    }
                } 
            } 
            var_19 = ((/* implicit */int) 534283355378667335ULL);
            var_20 += ((/* implicit */signed char) ((short) 17912460718330884281ULL));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) 2103431242U);
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((short) (_Bool)1))), (var_14)))) : ((+(((/* implicit */int) (_Bool)1))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (677365170076938769ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_0))))))));
}
