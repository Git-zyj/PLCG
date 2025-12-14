/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((3072 ? -22305 : 4158767258));
    var_16 &= (--136200011);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((-((51 ? 4158767258 : 66))))) ? ((((((arr_0 [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_6 [i_1])))) ? ((80 ? 4294967279 : 3091254899)) : (((10 ? 205 : var_5))))) : (((((((arr_5 [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_1] [i_0])))) ? ((-(arr_2 [i_0] [i_1]))) : ((1 ? 46 : 205)))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_17 &= (((((((((arr_1 [i_0] [i_2]) ? 185 : var_8))) ? ((133 ? (arr_8 [i_2] [i_1] [i_0]) : (arr_4 [i_1] [i_2]))) : var_4))) ? (((((var_6 ? 1203712396 : var_4))) ? 30 : (((arr_4 [i_0] [i_0]) ? (arr_4 [i_1] [i_1]) : (arr_9 [i_0] [i_1] [14]))))) : ((-((169 ? 198 : 255))))));
                    var_18 = ((!((((((var_11 ? (arr_1 [i_2] [i_1]) : (arr_1 [i_0] [i_2])))) ? ((-23234 ? (-9223372036854775807 - 1) : 20037)) : (((221 ? var_4 : (arr_8 [i_0] [i_1] [i_2])))))))));
                    var_19 = -6505250799916805011;
                }
                var_20 -= ((((((((210 ? 38034 : 0))) ? (((var_11 ? var_8 : var_5))) : -var_12))) ? (((var_0 ? (!194) : ((var_7 ? var_1 : var_10))))) : (((((107 ? var_7 : var_4))) ? (~136200038) : -var_4))));
            }
        }
    }
    var_21 = (~(((((var_3 ? 0 : 23584))) ? (((0 ? 17073 : var_4))) : ((1 ? var_9 : var_11)))));
    #pragma endscop
}
