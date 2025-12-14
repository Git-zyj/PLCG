/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68184
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
    var_10 = max((max((min((4294967289U), (9485598U))), (((((/* implicit */_Bool) 0U)) ? (1627520599U) : (var_4))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4191414686U))))), (min((var_8), (8387584U))))));
    var_11 = min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1119517033U)) || (((/* implicit */_Bool) var_7))))), (var_3))), (((((/* implicit */_Bool) max((30U), (4285939327U)))) ? (var_7) : ((~(16744448U))))));
    var_12 = (+(var_1));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = (+(130048U));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = min((32767U), (268435456U));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [5U] [i_0] [i_0 - 1])) ? (((unsigned int) (+(arr_2 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (2305310031U)))) ? (arr_7 [i_0 + 1] [i_0 - 1]) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 1] [i_0]) : (arr_9 [i_0 - 1] [i_0] [i_0]))))));
        arr_15 [20U] |= (~(arr_10 [8U] [i_0] [8U] [i_0]));
        var_13 = ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0 - 1]), (1534203468U)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2])) ? (arr_7 [i_0] [i_0 - 2]) : (arr_7 [i_0] [i_0 - 2]))) : (min((var_3), (var_8))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = arr_3 [9U];
        var_14 -= ((unsigned int) arr_16 [i_4]);
        var_15 = ((unsigned int) arr_17 [i_4] [i_4]);
        var_16 = ((((/* implicit */_Bool) 2709081940U)) ? (arr_8 [i_4] [i_4] [i_4]) : (arr_0 [10U]));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_17 = min((4294967295U), (3145275387U));
        var_18 *= (-(((unsigned int) 2505152217U)));
        var_19 = min((((((/* implicit */_Bool) arr_21 [i_5])) ? (1059661160U) : (arr_21 [i_5]))), ((+(((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [18U]) : (2147483644U))))));
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_20 = ((unsigned int) ((unsigned int) 1005877537U));
        arr_24 [i_6] [i_6] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2861962421U)) ? (4227858432U) : (arr_22 [i_6])))) ? (max((arr_22 [i_6]), (3570560290U))) : (min((3011975984U), (arr_22 [i_6])))));
    }
}
