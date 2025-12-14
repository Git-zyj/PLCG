/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92458
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
    var_20 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_21 = max((((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [i_1] [i_3]) > (0U)))), (((((/* implicit */_Bool) arr_8 [10U] [i_1] [i_1])) ? (1302444445U) : (arr_6 [i_1]))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (min((min((((((/* implicit */_Bool) 4294967292U)) ? (2196103523U) : (2156094022U))), (arr_3 [i_0] [i_3]))), (((((/* implicit */_Bool) max((14U), (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [4U])) || (((/* implicit */_Bool) arr_10 [i_0])))))) : (((unsigned int) 1646646869U))))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (2992522841U)));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_1 [i_0] [i_0]) : (3025834107U))), (((1010344363U) * (arr_8 [1U] [i_1] [i_1])))))) ? (arr_5 [i_0] [i_1] [i_0]) : (((((/* implicit */unsigned int) ((/* implicit */int) ((1748316554U) >= (var_18))))) ^ (arr_9 [i_0] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_24 = min((var_5), (((((/* implicit */_Bool) 3342413815U)) ? (((2088491335U) + (1269133189U))) : ((+(4294967281U))))));
    /* LoopSeq 2 */
    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4 - 2] = ((/* implicit */unsigned int) ((702832400U) == (3625504056U)));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147479552U)) ? (min((arr_15 [i_4] [i_5] [7U]), (1222512098U))) : (23374215U)))) ? (arr_20 [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 219445592U)) ? (1999667007U) : (2147487743U))) >= (var_16))))));
                        var_26 -= (((-(5U))) % ((+(max((3411172258U), (arr_15 [i_4] [i_5] [i_6 - 2]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 3; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) arr_15 [i_8 - 2] [i_8] [i_8 - 2])) ? (arr_18 [i_8 - 2] [i_8 - 3] [i_8 - 2]) : (3935419011U));
        var_28 = ((arr_18 [i_8 + 1] [i_8 - 1] [i_8 - 2]) * (arr_18 [0U] [i_8] [i_8 + 1]));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            {
                arr_31 [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 1014897626U)) && (((/* implicit */_Bool) 3025834131U)))))))) ? (((var_9) << (((arr_10 [i_10]) - (1664838650U))))) : ((-(((((/* implicit */_Bool) arr_6 [14U])) ? (arr_2 [i_10]) : (var_0))))));
                var_29 ^= max((max((arr_20 [i_9] [i_9]), (arr_20 [i_9] [i_10]))), (((((/* implicit */_Bool) arr_20 [i_9] [i_10])) ? (arr_20 [i_10] [i_9]) : (arr_20 [i_9] [i_10]))));
                var_30 = ((((/* implicit */_Bool) arr_16 [i_10] [9U] [9U])) ? (((((4129913420U) < (2064951591U))) ? (arr_27 [6U] [i_9]) : (((219445592U) + (var_16))))) : (((((/* implicit */_Bool) (~(3041075726U)))) ? (arr_23 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1995120938U)) || (((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9])))))))));
                var_31 = ((/* implicit */unsigned int) max((var_31), (max(((~(4294967295U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_23 [8U]) : (702832421U)))) ? (max((arr_17 [13U] [13U]), (3653624310U))) : (((((/* implicit */_Bool) 1036933709U)) ? (arr_9 [13U] [i_10] [8U] [i_10]) : (4U)))))))));
                var_32 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_9])))) ? ((~(4109243653U))) : (arr_5 [i_9] [i_10] [i_10])))) ? (4294967295U) : (((((/* implicit */_Bool) (+(1524505933U)))) ? (2790944899U) : (3280069670U))));
            }
        } 
    } 
}
